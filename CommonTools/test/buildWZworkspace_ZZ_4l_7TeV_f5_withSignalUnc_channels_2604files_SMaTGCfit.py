import pyroot_logon
import limits
import os
import sys

from array import *


from ROOT import *
from optparse import OptionParser
from ConfigParser import SafeConfigParser

parser = OptionParser(description="%prog : A RooStats Implementation of Anomalous Triple Gauge Coupling Analysis.",
                      usage="buildWZworkspace --config=example_config.cfg")
cfgparse = SafeConfigParser()

parser.add_option("--config",dest="config",help="The name of the input configuration file.")
(options,args) = parser.parse_args()

miss_options = False

if options.config is None:
    print 'Need to specify --config'
    miss_options=True
    
if miss_options:
    exit(1)
        
cfgparse.read(options.config)
options.config = cfgparse # put the parsed config file into our options

cfg = options.config


#lType = sys.argv[1]
#codename = ""
#planeID = sys.argv[2]

norm_sig_sm = -1
norm_sig_sm_up = -1
norm_sig_sm_down = -1
norm_bkg = -1
norm_obs = -1


fit_sections = cfg.sections()
fit_sections.remove('Global') #don't need to iterate over the global configuration

basepath = '%s/src/CombinedEWKAnalysis/CommonTools/data/WV_semileptonic'%os.environ['CMSSW_BASE']

for section in fit_sections:
    codename = section
#    lType = section
    lType = codename
    print 'lType=',lType
    f = TFile('%s/%s_boosted.root'%(basepath,codename))

    background = f.Get('background')

    background_shapeSyst = [string(i) for i in cfg.get(codename,'bkg_shape_syst').split(',')]

    print 'using bkg shape syst = ',background_shapeSyst

    background_backshapeUp = {}
    background_backshapeDown = {}

    for i in range(0,len(background_shapeSyst)):
        print ' bkg shape syst: ',background_shapeSyst[i]
        background_backshapeUp[i] = f.Get('%sUp'%background_shapeSyst[i])
        background_backshapeDown[i] = f.Get('%sDown'%background_shapeSyst[i])

    data_obs = f.Get('data_obs')
    diboson = f.Get('diboson')

    doSignalShape_unc=False
    cfg_items=cfg.items(codename)
    for cfg_item in cfg_items:
        if 'signal_shape_syst' in cfg_item:
            doSignalShape_unc = True

    print 'doSignalShape_unc=',doSignalShape_unc

    if (doSignalShape_unc):
        diboson_up = {}
        diboson_down = {}
        norm_sig_sm_up = {}
        norm_sig_sm_down = {}
        signal_shapeSyst = [string(i) for i in cfg.get(codename,'signal_shape_syst').split(',')]
        for i in range(0,len(signal_shapeSyst)):
            print ' signal shape syst: ',signal_shapeSyst[i]
            diboson_up[i] = f.Get('%sUp'%signal_shapeSyst[i])
            diboson_down[i] = f.Get('%sDown'%signal_shapeSyst[i])
            norm_sig_sm_up[i] = diboson_up[i].Integral()
            norm_sig_sm_down[i] = diboson_down[i].Integral()

    
    norm_sig_sm = diboson.Integral()
    norm_bkg = background.Integral()
    norm_obs = data_obs.Integral()

    if (doSignalShape_unc):
        print 'signal shape unc: ',norm_sig_sm_down,' ',norm_sig_sm,' ',norm_sig_sm_up
    
    theWS = RooWorkspace('WV_%sboosted'%codename, 'WV_%sboosted'%codename)
    
    wpt = theWS.factory('W_pt_%s[%f,%f]' % (codename,data_obs.GetBinLowEdge(1), 
                                         data_obs.GetBinLowEdge(data_obs.GetNbinsX())+data_obs.GetBinWidth(data_obs.GetNbinsX())))

    binning=array('d',[])

    for i in range(1, data_obs.GetNbinsX()+1):
        print i," ",data_obs.GetBinLowEdge(i)
        binning.append(data_obs.GetBinLowEdge(i))
    binning.append(data_obs.GetBinLowEdge(data_obs.GetNbinsX()+1))
    print data_obs.GetBinLowEdge(data_obs.GetNbinsX()+1)

    print "bining: "
    for i in range(0, len(binning)):
        print binning[i]

    bins=RooBinning(len(binning)-1, binning)

    wpt.setBinning(bins)
    lz = theWS.factory('lZ[0., -0.015, 0.015]')
    lz.setConstant(False)
    dkg = theWS.factory('dkg[0.,-0.015, 0.015]')
    dg1 = theWS.factory('dg1[0.,-0.015,0.015]')


    vars = RooArgList(wpt)
    varSet = RooArgSet(wpt)

    data = RooDataHist('data_obs', 'data_obs_WV_%s'%codename, vars, data_obs)
    bkgHist = RooDataHist('WV_semileptonic_bkg_%s'%codename,
                          'WV_semileptonic_bkg_%s'%codename,
                          vars,
                          background)
    
    bkgHist_systUp = {}
    bkgHist_systDown = {}
    for i in range(0,len(background_shapeSyst)):

        bkgHist_systUp[i] = RooDataHist('WV_semileptonic_bkg_%s_%sUp'%(codename,background_shapeSyst[i]),
                                     'WV_semileptonic_bkg_%s_%sUp'%(codename,background_shapeSyst[i]),
                                     vars,
                                     background_backshapeUp[i])
        bkgHist_systDown[i] = RooDataHist('WV_semileptonic_bkg_%s_%sDown'%(codename,background_shapeSyst[i]),
                                       'WV_semileptonic_bkg_%s_%sDown'%(codename,background_shapeSyst[i]),
                                       vars,
                                       background_backshapeDown[i])
   
    dibosonHist = RooDataHist('WV_semileptonic_SM_%s_rawshape'%codename,
                              'WV_semileptonic_SM_%s_rawshape'%codename,
                              vars,
                              diboson)

    if (doSignalShape_unc):
        dibosonHist_up = {}
        dibosonHist_down = {}
        for i in range(0,len(signal_shapeSyst)):
            dibosonHist_up[i] = RooDataHist('WV_semileptonic_SM_%s_rawshape_%sUp'%(codename,signal_shapeSyst[i]),
                                         'WV_semileptonic_SM_%s_rawshape_%sUp'%(codename,signal_shapeSyst[i]),
                                         vars,
                                         diboson_up[i])
            dibosonHist_down[i] = RooDataHist('WV_semileptonic_SM_%s_rawshape_%sDown'%(codename,signal_shapeSyst[i]),
                                           'WV_semileptonic_SM_%s_rawshape_%sDown'%(codename,signal_shapeSyst[i]),
                                           vars,
                                           diboson_down[i])

    dibosonPdf = RooHistFunc('WV_semileptonic_SM_%s_shape'%codename,
                             'WV_semileptonic_SM_%s_shape'%codename,
                             varSet,
                             dibosonHist)

    if (doSignalShape_unc):
        dibosonPdf_up = {}
        dibosonPdf_down = {}
        for i in range(0,len(signal_shapeSyst)):
            dibosonPdf_up[i] = RooHistFunc('WV_semileptonic_SM_%s_shape_%sUp'%(codename,signal_shapeSyst[i]),
                                        'WV_semileptonic_SM_%s_shape_%sUp'%(codename,signal_shapeSyst[i]),
                                        varSet,
                                        dibosonHist_up[i])
            dibosonPdf_down[i] = RooHistFunc('WV_semileptonic_SM_%s_shape_%sDown'%(codename,signal_shapeSyst[i]),
                                          'WV_semileptonic_SM_%s_shape_%sDown'%(codename,signal_shapeSyst[i]),
                                          varSet,
                                          dibosonHist_down[i])
    

    print '\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ reading RooATGCFunction\n'
    aTGC = RooATGCFunction_wz('ATGC_shapescale_WWgammaZ_WV_atgc_semileptonic_%s'%codename,
                              'ATGC_shapescale_%s'%codename,
                              wpt,
                              lz,
                              dkg,
                              dg1, 
                              '%s/signal_WV_%s_f5_ifLessThen0SetTo0_2604Files_SMaTGCfit.root'%(basepath,codename))
#                              '%s/signal_WV_%s.root'%(basepath,codename))
    
    print '\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ read RooATGCFunction\n'
    limtype = -1

    
#    planeID = cfg.get('Global','par1Name')+cfg.get('Global','par2Name')
    planeID = 'dkglZ'
    print 'setting up for %s plane!'%planeID
    if ( planeID == 'dkglZ' ):
        limtype = 0
    elif ( planeID == 'dg1lZ' ):
        limtype = 1
    elif ( planeID == 'dkgdg1'):
        limtype = 2
    else:
        raise RuntimeError('InvalidCouplingChoice',
                           'We can only use [dkg,lZ], [dg1,lZ], and [dkg,dg1]'\
                           ' as POIs right now!')
    
    print limtype

    print '\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ reading RooATGCSemi\n'

    if (doSignalShape_unc):
        kappaLow = {}
        kappaHigh = {}
        aTGCPdf_norm = {}
        theta = {}
        kappaLow_sum_d = 1.
        kappaHigh_sum_d = 1.
        
        for i in range(0,len(signal_shapeSyst)):
            kappaLow[i] = RooRealVar("kappaL_%s_%s"%(i+1,codename),"kappaL_%s_%s"%(i+1,codename),norm_sig_sm_down[i]/norm_sig_sm)
#            kappaLow[i] = RooRealVar("kappaL_%s"%(i+1),"kappaL_%s"%(i+1),norm_sig_sm_down[i]/norm_sig_sm)
            kappaLow[i].setConstant(True)
            kappaHigh[i] = RooRealVar("kappaH_%s_%s"%(i+1,codename),"kappaH_%s_%s"%(i+1,codename),norm_sig_sm_up[i]/norm_sig_sm)
#            kappaHigh[i] = RooRealVar("kappaH_%s"%(i+1),"kappaH_%s"%(i+1),norm_sig_sm_up[i]/norm_sig_sm)
            kappaHigh[i].setConstant(True)
            kappaLow_sum_d = kappaLow_sum_d*norm_sig_sm_down[i]/norm_sig_sm
            kappaHigh_sum_d = kappaHigh_sum_d*norm_sig_sm_up[i]/norm_sig_sm
            
            theWS.factory("%s[-7,7]"%signal_shapeSyst[i])
            theta[i] = theWS.var("%s"%signal_shapeSyst[i])
            
            aTGCPdf_norm[i] = AsymPow('ATGCPdf_WWgammaZ_WV_atgc_semileptonic_%s_integral%s'%(codename,i+1),
                                      'ATGCPdf_WV_%s_integral%s'%(codename,i+1),
                                      kappaLow[i],
                                      kappaHigh[i],
                                      theta[i])

        if (len(signal_shapeSyst)==1):
            aTGCPdf_norm_sum = aTGCPdf_norm[0]
        else:
            for i in range(0,len(signal_shapeSyst)):
                if (i==0): prodset=RooArgList(aTGCPdf_norm[i])
                else: prodset.add(RooArgList(aTGCPdf_norm[i]))
            print 'printing aTGCPdf_norm[]  ',prodset.Print()
            aTGCPdf_norm_sum = RooProduct("aTGCPdf_norm_sum","aTGCPdf_norm_sum",prodset)

        kappaLow_sum = RooRealVar("kappaLow_sum","kappaLow_sum",kappaLow_sum_d)
        kappaHigh_sum = RooRealVar("kappaHigh_sum","kappaHigh_sum",kappaHigh_sum_d)

        aTGCPdf_norm_sum.SetNameTitle('ATGCPdf_WWgammaZ_WV_atgc_semileptonic_%s_norm'%codename,
                                      'ATGCPdf_WV_%s_norm'%codename)
        
        
    aTGCPdf = RooATGCSemiAnalyticPdf_wz('ATGCPdf_WWgammaZ_WV_atgc_semileptonic_%s'%codename,
                                        'ATGCPdf_WV_%s'%codename,
                                        wpt,
                                        dkg,
                                        lz,                                 
                                        dg1,
                                        dibosonPdf,
#                                        '%s/signal_WV_%s.root'%(basepath,codename),
                                        '%s/signal_WV_%s_f5_ifLessThen0SetTo0_2604Files_SMaTGCfit.root'%(basepath,codename),
                                        limtype
                                        )

    if (doSignalShape_unc):
        aTGCPdf_up = {}
        aTGCPdf_down = {}
        for i in range(0,len(signal_shapeSyst)):
            aTGCPdf_up[i] = RooATGCSemiAnalyticPdf_wz('ATGCPdf_WWgammaZ_WV_atgc_semileptonic_%s_%sUp'%(codename,signal_shapeSyst[i]),
                                                   'ATGCPdf_WV_%s'%codename,
                                                   wpt,
                                                   dkg,
                                                   lz,                                 
                                                   dg1,
                                                   dibosonPdf_up[i],
                                                   '%s/signal_WV_%s_f5_ifLessThen0SetTo0_2604Files_SMaTGCfit.root'%(basepath,codename),
                                                   limtype
                                                   )
            aTGCPdf_down[i] = RooATGCSemiAnalyticPdf_wz('ATGCPdf_WWgammaZ_WV_atgc_semileptonic_%s_%sDown'%(codename,signal_shapeSyst[i]),
                                                     'ATGCPdf_WV_%s'%codename,
                                                     wpt,
                                                     dkg,
                                                     lz,                                 
                                                     dg1,
                                                     dibosonPdf_down[i],
                                                     '%s/signal_WV_%s_f5_ifLessThen0SetTo0_2604Files_SMaTGCfit.root'%(basepath,codename),
                                                     limtype
                                                     )
    
    
    print '\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ read RooATGCSemi\n'
    
    getattr(theWS, 'import')(data)
    getattr(theWS, 'import')(bkgHist)
    for i in range(0,len(background_shapeSyst)):
        getattr(theWS, 'import')(bkgHist_systUp[i])
        getattr(theWS, 'import')(bkgHist_systDown[i])
    getattr(theWS, 'import')(aTGCPdf)
    if (doSignalShape_unc):
        for i in range(0,len(signal_shapeSyst)):
            getattr(theWS, 'import')(aTGCPdf_up[i])
            getattr(theWS, 'import')(aTGCPdf_down[i])
#            getattr(theWS, 'import')(aTGCPdf_norm[i])
        getattr(theWS, 'import')(aTGCPdf_norm_sum)
    
    theWS.Print()
    
    fout = TFile('%s_boosted_ws.root'%(codename), 'recreate')
    theWS.Write()
    fout.Close()

### make the card for this channel and plane ID
    card = """
# Simple counting experiment, with one signal and a few background processes 
imax 1  number of channels
jmax 1  number of backgrounds
kmax *  number of nuisance parameters (sources of systematical uncertainties)
------------
shapes WV_semileptonic_bkg_{codename}  {codename}boosted ./{codename}_boosted_ws.root WV_{codename}boosted:$PROCESS WV_{codename}boosted:$PROCESS_$SYSTEMATIC
shapes data_obs                {codename}boosted ./{codename}_boosted_ws.root WV_{codename}boosted:$PROCESS """.format(codename=codename,norm_sig_sm=norm_sig_sm,norm_bkg=norm_bkg,norm_obs=norm_obs)
    if (doSignalShape_unc):
        card += """   
shapes WWgammaZ_WV_atgc_semileptonic_{codename} {codename}boosted ./{codename}_boosted_ws.root WV_{codename}boosted:ATGCPdf_$PROCESS WV_{codename}boosted:ATGCPdf_$PROCESS_$SYSTEMATIC """.format(codename=codename,norm_sig_sm=norm_sig_sm,norm_bkg=norm_bkg,norm_obs=norm_obs)
    else:
        card += """   
shapes WWgammaZ_WV_atgc_semileptonic_{codename} {codename}boosted ./{codename}_boosted_ws.root WV_{codename}boosted:ATGCPdf_$PROCESS
""".format(codename=codename,norm_sig_sm=norm_sig_sm,norm_bkg=norm_bkg,norm_obs=norm_obs)
        
    card += """   
------------
bin {codename}boosted 
observation {norm_obs}
------------
bin                         {codename}boosted		      {codename}boosted
process                     WWgammaZ_WV_atgc_semileptonic_{codename}   WV_semileptonic_bkg_{codename}
process                     0			      1		
rate                        {norm_sig_sm}		      {norm_bkg}	
    
------------
lumi_7TeV           lnN     1.022		      -""".format(codename=codename,norm_sig_sm=norm_sig_sm,norm_bkg=norm_bkg,norm_obs=norm_obs)

    card += """
pdf_VV        lnN  1.04                       -""".format(signal_shapeSyst=signal_shapeSyst[i])

    card += """
CMS_eff_c        lnN  1.03                       -""".format(signal_shapeSyst=signal_shapeSyst[i])
    card += """
CMS_ZZ_4l_7TeV_signalOther        lnN  1.1308                       -""".format(signal_shapeSyst=signal_shapeSyst[i])

    for i in range(0,len(background_shapeSyst)):
        card += """
{background_shapeSyst} shape1  -                         1.0 """.format(codename=codename,norm_sig_sm=norm_sig_sm,norm_bkg=norm_bkg,norm_obs=norm_obs,i=i,background_shapeSyst=background_shapeSyst[i])

    if (doSignalShape_unc):
        for i in range(0,len(signal_shapeSyst)):
            card += """
{signal_shapeSyst}        shape1  1.0                       -""".format(signal_shapeSyst=signal_shapeSyst[i])
    
    print card

    cardfile = open('wv_semil_%sboosted.txt'%(codename),'w')
    cardfile.write(card)
    cardfile.close
