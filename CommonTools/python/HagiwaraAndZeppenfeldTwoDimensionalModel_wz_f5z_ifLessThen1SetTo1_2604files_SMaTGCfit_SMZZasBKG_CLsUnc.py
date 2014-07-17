from CombinedEWKAnalysis.CommonTools.AnomalousCouplingModel import *
import ROOT as r
import os

basepath = '%s/src/CombinedEWKAnalysis/CommonTools/data/WV_semileptonic'%os.environ['CMSSW_BASE']
#filename = '%s/ATGC_shape_coefficients.root'%basepath  
#filename = '%s/signal_WV.root'%basepath  

#this model is in the equal couplings scenario of HISZ or something similar
#it does the old style limits of setting the other parameter to zero
class HagiwaraAndZeppenfeldTwoDimensionalModel_wz_f5z_ifLessThen1SetTo1_2604files_SMaTGCfit_SMZZasBKG_CLsUnc(AnomalousCouplingModel):
    def __init__(self,mode):
        AnomalousCouplingModel.__init__(self)
        self.processes = ['WWgammaZ']
        self.channels  = ['WV_atgc_semileptonic']
#        self.lepchannels  = ['ch1','ch2','ch3','ch4']
        self.lepchannels  = ['ch1','ch2','ch3','ch4','ch5','ch6']
#        self.lepchannels  = ['ch1','ch2']
        self.pois      =  ['dkg','dg1','lZ']
        self.mode      = mode
        self.anomCoupSearchWindows = {'dkg':['-0.006','0.006'],
                                      'dg1':['-0.006','0.006'],
                                      'lZ' :['-0.006','0.006']     }
#        self.anomCoupSearchWindows = {'dkg':['-0.015','0.015'],
#                                      'dg1':['-0.015','0.015'],
#                                      'lZ' :['-0.015','0.015']     }
        
        self.verbose = False

    def buildScaling(self,process,channel,lepchannel):        
        scalerName = '%s_%s_%s'%(process,channel,lepchannel)

        if ('ch' in lepchannel):
            print 'reading %s/signal_WV_%s_f5z_ifLessThen1SetTo1_2604Files_SMaTGCfit.root for %s'%(basepath,lepchannel,lepchannel)
            filename = '%s/signal_WV_%s_f5z_ifLessThen1SetTo1_2604Files_SMaTGCfit.root'%(basepath,lepchannel)
        else:
            print 'reading %s/signal_WV_%s_f5z_ifLessThen0SetTo0_2604Files_SMaTGCfit.root for %s'%(basepath,lepchannel,lepchannel)
            filename = '%s/signal_WV_%s_f5z_ifLessThen0SetTo0_2604Files_SMaTGCfit.root'%(basepath,lepchannel)

        print '\t\t *********************** Hagiwara reading: %s/signal_WV_%s_f5z_ifLessThen1SetTo1_2604Files_SMaTGCfit.root'%(basepath,lepchannel)  
#        filename = '%s/signal_WV_%s_f5z_ifLessThen1SetTo1_2604Files_SMaTGCfit.root'%(basepath,lepchannel)  

              
#        f = r.TFile('%s/mu_boosted.root'%basepath,'READ')
#        print '\t\t *********************** Hagiwara reading: %s/%s_boosted.root'%(basepath,lepchannel)
#        print '\t\t *********************** Hagiwara reading: %s/signal_WV_%s_f5z_ifLessThen1SetTo1_2604Files_SMaTGCfit.root'%(basepath,lepchannel)
        f = r.TFile('%s/%s_boosted.root'%(basepath,lepchannel),'READ')
#        SM_diboson_shape = f.Get('diboson').Clone('SM_wv_semil_mu_shape_for_scale')
        if ('ch' in lepchannel):
            print 'reading Atgc_signal for %s'%lepchannel
            SM_diboson_shape = f.Get('atgc_signal').Clone('SM_wv_semil_%s_shape_for_scale'%lepchannel)
        else:
            print 'reading diboson %s'%lepchannel
            SM_diboson_shape = f.Get('diboson').Clone('SM_wv_semil_%s_shape_for_scale'%lepchannel)
        SM_diboson_shape.SetDirectory(0)
        f.Close()
        self.modelBuilder.out._import(SM_diboson_shape)
        SM_diboson_shape_dhist = r.RooDataHist('DHIST_SM_wv_semil_%s_shape_for_scale'%lepchannel,
                    'DHIST_SM_wv_semil_%s_shape_for_scale'%lepchannel,
                    r.RooArgList(self.modelBuilder.out.var('W_pt_%s'%lepchannel)),
                    self.modelBuilder.out.obj('SM_wv_semil_%s_shape_for_scale'%lepchannel))
        self.modelBuilder.out._import(SM_diboson_shape_dhist)        
#        self.modelBuilder.factory_('RooHistFunc::Scaling_base_pdf_%s({W_pt},DHIST_SM_wv_semil_mu_shape_for_scale)'%(scalerName))              
        self.modelBuilder.factory_('RooHistFunc::Scaling_base_pdf_%s({W_pt_%s},DHIST_SM_wv_semil_%s_shape_for_scale)'%(scalerName,lepchannel,lepchannel))              
        self.modelBuilder.factory_('RooATGCProcessScaling_wz::Scaling_%s(W_pt_%s,dkg,lZ,dg1,Scaling_base_pdf_%s,"%s")'%(scalerName,lepchannel,scalerName,filename))

        if ( self.mode == 'dkglZ' ):
            self.modelBuilder.out.function('Scaling_%s'%scalerName).setLimitType(0)
            self.modelBuilder.out.var('dg1').setVal(0)
            self.modelBuilder.out.var('dg1').setConstant(True)
        elif ( self.mode == 'dg1lZ' ):
            self.modelBuilder.out.function('Scaling_%s'%scalerName).setLimitType(1)
            self.modelBuilder.out.var('dkg').setVal(0)
            self.modelBuilder.out.var('dkg').setConstant(True)  
        elif ( self.mode == 'dkgdg1' ):
            self.modelBuilder.out.function('Scaling_%s'%scalerName).setLimitType(2)
            self.modelBuilder.out.var('lZ').setVal(0)
            self.modelBuilder.out.var('lZ').setConstant(True)            
        else:
            raise RuntimeError('InvalidCouplingChoice',
                               'We can only use [dkg,lZ], [dg1,lZ], and [dkg,dg1]'\
                               ' as POIs right now!')
        
        return scalerName
        

dkglZModel_wz_f5z_ifLessThen1SetTo1_2604files_SMaTGCfit_SMZZasBKG_CLsUnc = HagiwaraAndZeppenfeldTwoDimensionalModel_wz_f5z_ifLessThen1SetTo1_2604files_SMaTGCfit_SMZZasBKG_CLsUnc('dkglZ')
dg1lZModel_wz_f5z_ifLessThen1SetTo1_2604files_SMaTGCfit_SMZZasBKG_CLsUnc = HagiwaraAndZeppenfeldTwoDimensionalModel_wz_f5z_ifLessThen1SetTo1_2604files_SMaTGCfit_SMZZasBKG_CLsUnc('dg1lZ')
dkgdg1Model_wz_f5z_ifLessThen1SetTo1_2604files_SMaTGCfit_SMZZasBKG_CLsUnc = HagiwaraAndZeppenfeldTwoDimensionalModel_wz_f5z_ifLessThen1SetTo1_2604files_SMaTGCfit_SMZZasBKG_CLsUnc('dkgdg1')
