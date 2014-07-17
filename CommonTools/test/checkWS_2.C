void checkWS_2(TString file_name,TString parameter, double value){

  /*
TObject * s=w->obj("dkg")
const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
rdep.setVal(0.001)
w->cd()
  */

  TFile * file=new TFile(file_name,"read");

  gROOT->ProcessLine(".L /afs/cern.ch/work/s/senka/public/plotsForVgammaPaper/ptg/CMSstyle_YuriStyle.C");
  gROOT->ProcessLine("CMSstyle()");

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();

  double lZval=0.01;

  double bkg1_ch7_start=n_exp_final_binch1_proc_WV_semileptonic_bkg1_ch7->getVal();
  double bkg1_ch8_start=n_exp_final_binch2_proc_WV_semileptonic_bkg1_ch8->getVal();
  double bkg1_ch9_start=n_exp_final_binch3_proc_WV_semileptonic_bkg1_ch9->getVal();
  double bkg1_ch10_start=n_exp_final_binch4_proc_WV_semileptonic_bkg1_ch10->getVal();
  double bkg1_ch11_start=n_exp_final_binch5_proc_WV_semileptonic_bkg1_ch11->getVal();
  double bkg1_ch12_start=n_exp_binch6_proc_WV_semileptonic_bkg1_ch12->getVal();

  double bkg2_ch7_start=n_exp_final_binch1_proc_WV_semileptonic_bkg2_ch7->getVal();
  double bkg2_ch8_start=n_exp_final_binch2_proc_WV_semileptonic_bkg2_ch8->getVal();
  double bkg2_ch9_start=n_exp_final_binch3_proc_WV_semileptonic_bkg2_ch9->getVal();
  double bkg2_ch10_start=n_exp_final_binch4_proc_WV_semileptonic_bkg2_ch10->getVal();
  double bkg2_ch11_start=n_exp_binch5_proc_WV_semileptonic_bkg2_ch11->getVal();
  double bkg2_ch12_start=n_exp_binch6_proc_WV_semileptonic_bkg2_ch12->getVal();

  double bkg3_ch7_start=n_exp_final_binch1_proc_WV_semileptonic_bkg3_ch7->getVal();
  double bkg3_ch8_start=n_exp_final_binch2_proc_WV_semileptonic_bkg3_ch8->getVal();
  double bkg3_ch9_start=n_exp_final_binch3_proc_WV_semileptonic_bkg3_ch9->getVal();
  double bkg3_ch10_start=n_exp_final_binch4_proc_WV_semileptonic_bkg3_ch10->getVal();
  double bkg3_ch11_start=n_exp_final_binch5_proc_WV_semileptonic_bkg3_ch11->getVal();
  double bkg3_ch12_start=n_exp_final_binch6_proc_WV_semileptonic_bkg3_ch12->getVal();

  double SM_ch7_start=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);


  double SM_ch8_start=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch8->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch9_start=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch9->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch10_start=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch10->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch11_start=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch12_start=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();

  cout <<"\n\t yield :" << endl;
  cout << "ch7 DY : " << bkg1_ch7_start <<"\t\ttop: "<<bkg2_ch7_start <<"\t\twz: "<<bkg3_ch7_start <<"\tsignal SM: "<< SM_ch7_start << endl;
  cout << "ch8 DY : " << bkg1_ch8_start<<"\t\ttop: "<<bkg2_ch8_start <<"\t\twz: "<<bkg3_ch8_start <<"\tsignal SM: "<< SM_ch8_start << endl;
  cout << "ch9 DY : " << bkg1_ch9_start<<"\t\ttop: "<<bkg2_ch9_start <<"\t\twz: "<<bkg3_ch9_start <<"\tsignal SM: "<< SM_ch9_start << endl;
  cout << "ch10 DY : " << bkg1_ch10_start<<"\ttop: "<<bkg2_ch10_start <<"\t\twz: "<<bkg3_ch10_start <<"\tsignal SM: "<< SM_ch10_start << endl;
  cout << "ch11 DY : " << bkg1_ch11_start<<"\ttop: "<<bkg2_ch11_start <<"\t\twz: "<<bkg3_ch11_start <<"\tsignal SM: "<< SM_ch11_start << endl;
  cout << "ch12 DY : " << bkg1_ch12_start<<"\t\ttop: "<<bkg2_ch12_start <<"\t\twz: "<<bkg3_ch12_start <<"\tsignal SM: "<< SM_ch12_start << endl;
  cout << "  SUM: \t  "<<bkg1_ch7_start+bkg1_ch8_start+bkg1_ch9_start+bkg1_ch10_start+bkg1_ch11_start+bkg1_ch12_start <<"\t    "<<bkg2_ch7_start+bkg2_ch8_start+bkg2_ch9_start+bkg2_ch10_start+bkg2_ch11_start+bkg2_ch12_start<<"\t     "<<bkg3_ch7_start+bkg3_ch8_start+bkg3_ch9_start+bkg3_ch10_start+bkg3_ch11_start+bkg3_ch12_start <<"\t\t  "<<SM_ch7_start+SM_ch8_start+SM_ch9_start+SM_ch10_start+SM_ch11_start+SM_ch12_start<< endl;
 

  ////////////
  //
  //  setting some par values:
  //

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  cout <<"\n\t---> setting "<< parameter<<" to "<< value << endl;
  //  readout_yields();


  double bkg1_ch7=n_exp_final_binch1_proc_WV_semileptonic_bkg1_ch7->getVal();
  double bkg1_ch8=n_exp_final_binch2_proc_WV_semileptonic_bkg1_ch8->getVal();
  double bkg1_ch9=n_exp_final_binch3_proc_WV_semileptonic_bkg1_ch9->getVal();
  double bkg1_ch10=n_exp_final_binch4_proc_WV_semileptonic_bkg1_ch10->getVal();
  double bkg1_ch11=n_exp_final_binch5_proc_WV_semileptonic_bkg1_ch11->getVal();
  double bkg1_ch12=n_exp_binch6_proc_WV_semileptonic_bkg1_ch12->getVal();

  double bkg2_ch7=n_exp_final_binch1_proc_WV_semileptonic_bkg2_ch7->getVal();
  double bkg2_ch8=n_exp_final_binch2_proc_WV_semileptonic_bkg2_ch8->getVal();
  double bkg2_ch9=n_exp_final_binch3_proc_WV_semileptonic_bkg2_ch9->getVal();
  double bkg2_ch10=n_exp_final_binch4_proc_WV_semileptonic_bkg2_ch10->getVal();
  double bkg2_ch11=n_exp_binch5_proc_WV_semileptonic_bkg2_ch11->getVal();
  double bkg2_ch12=n_exp_binch6_proc_WV_semileptonic_bkg2_ch12->getVal();

  double bkg3_ch7=n_exp_final_binch1_proc_WV_semileptonic_bkg3_ch7->getVal();
  double bkg3_ch8=n_exp_final_binch2_proc_WV_semileptonic_bkg3_ch8->getVal();
  double bkg3_ch9=n_exp_final_binch3_proc_WV_semileptonic_bkg3_ch9->getVal();
  double bkg3_ch10=n_exp_final_binch4_proc_WV_semileptonic_bkg3_ch10->getVal();
  double bkg3_ch11=n_exp_final_binch5_proc_WV_semileptonic_bkg3_ch11->getVal();
  double bkg3_ch12=n_exp_final_binch6_proc_WV_semileptonic_bkg3_ch12->getVal();

  double SM_ch7=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);

  double SM_ch8=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch8->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //   dkg->setVal(0.01);

  double SM_ch9=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch9->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch10=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch10->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch11=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch12=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 

  cout <<"\n\t yield :" << endl;
  cout << "ch7 DY : " << bkg1_ch7<<" -> "<<bkg1_ch7/bkg1_ch7_start <<"\t\ttop: "<<bkg2_ch7<<" -> "<<bkg2_ch7/bkg2_ch7_start <<"\t\twz: "<<bkg3_ch7 <<" -> "<<bkg3_ch7/bkg3_ch7_start<<"\t\tsignal SM: "<< SM_ch7<<" -> "<<SM_ch7/SM_ch7_start << endl;
  cout << "ch8 DY : " << bkg1_ch8<<" -> "<<bkg1_ch8/bkg1_ch8_start<<"\t\ttop: "<<bkg2_ch8<<" -> "<<bkg2_ch8/bkg2_ch8_start <<"\t\twz: "<<bkg3_ch8<<" -> "<<bkg3_ch8/bkg3_ch8_start <<"\t\tsignal SM: "<< SM_ch8<<" -> "<<SM_ch8/SM_ch8_start << endl;
  cout << "ch9 DY : " << bkg1_ch9<<" -> "<<bkg1_ch9/bkg1_ch9_start<<"\t\ttop: "<<bkg2_ch9<<" -> "<<bkg2_ch9/bkg2_ch9_start <<"\t\twz: "<<bkg3_ch9 <<" -> "<<bkg3_ch9/bkg3_ch9_start<<"\t\tsignal SM: "<< SM_ch9<<" -> "<<SM_ch9/SM_ch9_start << endl;
  cout << "ch10 DY : " << bkg1_ch10<<" -> "<<bkg1_ch10/bkg1_ch10_start<<"\t\ttop: "<<bkg2_ch10<<" -> "<<bkg2_ch10/bkg2_ch10_start <<"\t\twz: "<<bkg3_ch10<<" -> "<<bkg3_ch10/bkg3_ch10_start <<"\t\tsignal SM: "<< SM_ch10<<" -> "<<SM_ch10/SM_ch10_start << endl;
  cout << "ch11 DY : " << bkg1_ch11<<" -> "<<bkg1_ch11/bkg1_ch11_start<<"\t\ttop: "<<bkg2_ch11<<" -> "<<bkg2_ch11/bkg2_ch11_start <<"\t\t\twz: "<<bkg3_ch11<<" -> "<<bkg3_ch11/bkg3_ch11_start <<"\t\tsignal SM: "<< SM_ch11<<" -> "<<SM_ch11/SM_ch11_start << endl;
  cout << "ch12 DY : " << bkg1_ch12<<" -> "<<bkg1_ch12/bkg1_ch12_start<<"\t\ttop: "<<bkg2_ch12 <<" -> "<<bkg2_ch12/bkg2_ch12_start<<"\t\t\twz: "<<bkg3_ch12<<" -> "<<bkg3_ch12/bkg3_ch12_start <<"\t\tsignal SM: "<< SM_ch12<<" -> "<<SM_ch12/SM_ch12_start << endl;
  cout << "  SUM: \t  "<<bkg1_ch7+bkg1_ch8+bkg1_ch9+bkg1_ch10+bkg1_ch11+bkg1_ch12 <<"\t\t    "<<bkg2_ch7+bkg2_ch8+bkg2_ch9+bkg2_ch10+bkg2_ch11+bkg2_ch12<<"\t\t\t     "<<bkg3_ch7+bkg3_ch8+bkg3_ch9+bkg3_ch10+bkg3_ch11+bkg3_ch12 <<"\t\t\t  "<<SM_ch7+SM_ch8+SM_ch9+SM_ch10+SM_ch11+SM_ch12<< endl;
 


  //  w->cd();
  
  /*
    cout << endl;
  cout << "ch7 bkg1: " << n_exp_final_binch1_proc_WV_semileptonic_bkg1_ch7->getVal() << endl;
  cout << "ch7 bkg2: " << n_exp_final_binch1_proc_WV_semileptonic_bkg2_ch7->getVal() << endl;
  cout << "ch7 bkg3: " << n_exp_final_binch1_proc_WV_semileptonic_bkg3_ch7->getVal() << endl;
  cout << "ch7 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal() << endl;
    cout << endl;
  cout << "ch11 bkg1: " << n_exp_final_binch5_proc_WV_semileptonic_bkg1_ch11->getVal() << endl;
  cout << "ch11 bkg2: " << n_exp_binch5_proc_WV_semileptonic_bkg2_ch11->getVal() << endl;
  cout << "ch11 bkg3: " << n_exp_final_binch5_proc_WV_semileptonic_bkg3_ch11->getVal() << endl;
  cout << "ch11 signal: " <<n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11->getVal() << endl;
    cout << endl;
  cout << "ch12 bkg1: " << n_exp_binch6_proc_WV_semileptonic_bkg1_ch12->getVal() << endl;
  cout << "ch12 bkg2: " << n_exp_binch6_proc_WV_semileptonic_bkg2_ch12->getVal() << endl;
  cout << "ch12 bkg3: " << n_exp_final_binch6_proc_WV_semileptonic_bkg3_ch12->getVal() << endl;
  cout << "ch12 signal: " <<n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal() << endl;

  double yield=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();
  CMS_hzz2l2v_QCD_ACC_JVeto->setVal(1.);
  double yieldUp=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();
  CMS_hzz2l2v_QCD_ACC_JVeto->setVal(-1.);
  double yieldDown=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();
  cout <<"ch12 QCD: "<< yieldDown/yield<<" / "<<yieldUp/yield << endl;
  CMS_hzz2l2v_QCD_ACC_JVeto->setVal(0.);

  // zz2l2nu_CMS_hzz2l2v_sherpa
  double yield=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  double yieldUp=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  double yieldDown=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();
  cout <<"ch12 QCD: "<< yieldDown/yield<<" / "<<yieldUp/yield << endl;
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(0.);

  
      //  cout << "ch7 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal() << endl;
  cout << "ch12 signal: " <<n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal() << endl;


  double yield_1_sherpaUp,yield_2_sherpaUp,yield_3_sherpaUp,yield_4_sherpaUp,yield_5_sherpaUp,yield_6_sherpaUp;

  cout <<"\n setting sherpa=1"<< endl;
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  cout <<"\n setting lZ=0.01"<< endl;
  //  lZval
      lZ->setVal(lZval);
  //      lZ->setVal(0.01);
      //  cout << "ch7 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal() << endl;
  cout << "ch7 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);

  yield_1_sherpaUp=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal();
  //  file->Close();
  cout <<"\tplace 1" << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  cout << "ch8 signal: " <<n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch8->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  yield_2_sherpaUp=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch8->getVal();
  //  file->Close();

  cout <<"\tplace 2" << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  cout << "ch9 signal: " <<n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch9->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  yield_3_sherpaUp=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch9->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  cout << "ch10 signal: " <<n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch10->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  yield_4_sherpaUp=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch10->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  cout << "ch11 signal: " <<n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  yield_5_sherpaUp=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11->getVal();
  //  file->Close();
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  cout << "ch12 signal: " <<n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  yield_6_sherpaUp=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();
  
 
  double yield_1_sherpaDown,yield_2_sherpaDown,yield_3_sherpaDown,yield_4_sherpaDown,yield_5_sherpaDown,yield_6_sherpaDown;

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  cout <<"\n setting sherpa=1"<< endl;
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  cout <<"\n setting lZ=0.01"<< endl;
      lZ->setVal(lZval);
  //      lZ->setVal(lZval);
      //  cout << "ch7 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal() << endl;
  cout << "ch7 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_1_sherpaDown=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  cout << "ch8 signal: " <<n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch8->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_2_sherpaDown=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch8->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  cout << "ch9 signal: " <<n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch9->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_3_sherpaDown=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch9->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  cout << "ch10 signal: " <<n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch10->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_4_sherpaDown=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch10->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  cout << "ch11 signal: " <<n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_5_sherpaDown=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  cout << "ch12 signal: " <<n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_6_sherpaDown=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();
  
  

 
  double yield_1,yield_2,yield_3,yield_4,yield_5,yield_6;

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  lZ->setVal(lZval);
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(0.);
  yield_1=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal();
  yield_2=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch8->getVal();
  yield_3=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch9->getVal();
  yield_4=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch10->getVal();
  yield_5=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11->getVal();
  yield_6=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();
  
  TH1F * histo=new TH1F("histo","histo",6,0.,6.);
  histo->SetBinContent(1,yield_1);
  histo->SetBinContent(2,yield_2);
  histo->SetBinContent(3,yield_3);
  histo->SetBinContent(4,yield_4);
  histo->SetBinContent(5,yield_5);
  histo->SetBinContent(6,yield_6);

  TCanvas *c1 = new TCanvas("c1");
   c1->SetGrid();

   histo->GetYaxis()->SetRangeUser(0.,20.);
   histo->Draw("");

   cout <<"\n\t\t sherpa write out" << endl;
   cout <<yield_1<<"\t\t"<<yield_1_sherpaUp/yield_1<<"\t/"<<yield_1_sherpaDown/yield_1<<"\t"
	<<"\n"<<yield_2<<"\t\t"<<yield_2_sherpaUp/yield_2<<"\t/"<<yield_2_sherpaDown/yield_2<<"\t"
	<<"\n"<<yield_3<<"\t\t"<<yield_3_sherpaUp/yield_3<<"\t/"<<yield_3_sherpaDown/yield_3<<"\t"
	<<"\n"<<yield_4<<"\t\t"<<yield_4_sherpaUp/yield_4<<"\t/"<<yield_4_sherpaDown/yield_4<<"\t"
	<<"\n"<<yield_5<<"\t\t"<<yield_5_sherpaUp/yield_5<<"\t/"<<yield_5_sherpaDown/yield_5<<"\t"
	<<"\n"<<yield_6<<"\t\t"<<yield_6_sherpaUp/yield_6<<"\t/"<<yield_6_sherpaDown/yield_6<<"\t"  <<endl;
   cout <<"\n\t\t sherpa write out" << endl;
   cout <<yield_1<<"\t\t"<<yield_1_sherpaUp<<"\t"<<yield_1_sherpaDown<<"\t"
	<<"\n"<<yield_2<<"\t+-\t"<<yield_2_sherpaUp<<"\t"<<yield_2_sherpaDown<<"\t"
	<<"\n"<<yield_3<<"\t+-\t"<<yield_3_sherpaUp<<"\t"<<yield_3_sherpaDown<<"\t"
	<<"\n"<<yield_4<<"\t+-\t"<<yield_4_sherpaUp<<"\t"<<yield_4_sherpaDown<<"\t"
	<<"\n"<<yield_5<<"\t+-\t"<<yield_5_sherpaUp<<"\t"<<yield_5_sherpaDown<<"\t"
	<<"\n"<<yield_6<<"\t+-\t"<<yield_6_sherpaUp<<"\t"<<yield_6_sherpaDown<<"\t"  <<endl;
   //   cout <<yield_1<<"-"<<yield_1_sherpaDown<<"\t"<<yield_2<<"-"<<yield_2_sherpaDown<<"\t"<<yield_3<<"-"<<yield_3_sherpaDown<<"\t"<<yield_4<<"-"<<yield_4_sherpaDown<<"\t"<<yield_5<<"-"<<yield_5_sherpaDown<<"\t"<<yield_6<<"-"<<yield_6_sherpaDown  <<endl;

  const Int_t n = 6;
  Float_t x[n]={0.5,1.5,2.5,3.5,4.5,5.5};
  Float_t y[n]  = {yield_1,yield_2,yield_3,yield_4,yield_5,yield_6};
  Float_t exl[n] = {0.,0.,0.,0.,0.,0.};
    Float_t eyl[n] = {yield_1-yield_1_sherpaDown,yield_2-yield_2_sherpaDown,yield_3-yield_3_sherpaDown,yield_4-yield_4_sherpaDown,yield_5-yield_5_sherpaDown,yield_6-yield_6_sherpaDown};
  //  Float_t eyl[n] = {yield_1_sherpaDown,yield_2_sherpaDown,yield_3_sherpaDown,yield_4_sherpaDown,yield_5_sherpaDown,yield_6_sherpaDown};
  Float_t exh[n] = {0.,0.,0.,0.,0.,0.};
    Float_t eyh[n] = {-yield_1+yield_1_sherpaUp,-yield_2+yield_2_sherpaUp,-yield_3+yield_3_sherpaUp,-yield_4+yield_4_sherpaUp,-yield_5+yield_5_sherpaUp,-yield_6+yield_6_sherpaUp};
    //Float_t eyh[n] = {yield_1_sherpaUp,yield_2_sherpaUp,yield_3_sherpaUp,yield_4_sherpaUp,yield_5_sherpaUp,yield_6_sherpaUp};
 
   //h->GetXaxis()->LabelsOption("v");
   gr = new TGraphAsymmErrors(n,x,y,exl,exh,eyl,eyh);
   gr->SetMarkerStyle(21);
   gr->Draw("p");

  */

}

void readout_yields(){


  double bkg1_ch7=n_exp_final_binch1_proc_WV_semileptonic_bkg1_ch7->getVal();
  double bkg1_ch8=n_exp_final_binch2_proc_WV_semileptonic_bkg1_ch8->getVal();
  double bkg1_ch9=n_exp_final_binch3_proc_WV_semileptonic_bkg1_ch9->getVal();
  double bkg1_ch10=n_exp_final_binch4_proc_WV_semileptonic_bkg1_ch10->getVal();
  double bkg1_ch11=n_exp_final_binch5_proc_WV_semileptonic_bkg1_ch11->getVal();
  double bkg1_ch12=n_exp_binch6_proc_WV_semileptonic_bkg1_ch12->getVal();

  double bkg2_ch7=n_exp_final_binch1_proc_WV_semileptonic_bkg2_ch7->getVal();
  double bkg2_ch8=n_exp_final_binch2_proc_WV_semileptonic_bkg2_ch8->getVal();
  double bkg2_ch9=n_exp_final_binch3_proc_WV_semileptonic_bkg2_ch9->getVal();
  double bkg2_ch10=n_exp_final_binch4_proc_WV_semileptonic_bkg2_ch10->getVal();
  double bkg2_ch11=n_exp_binch5_proc_WV_semileptonic_bkg2_ch11->getVal();
  double bkg2_ch12=n_exp_binch6_proc_WV_semileptonic_bkg2_ch12->getVal();

  double bkg3_ch7=n_exp_final_binch1_proc_WV_semileptonic_bkg3_ch7->getVal();
  double bkg3_ch8=n_exp_final_binch2_proc_WV_semileptonic_bkg3_ch8->getVal();
  double bkg3_ch9=n_exp_final_binch3_proc_WV_semileptonic_bkg3_ch9->getVal();
  double bkg3_ch10=n_exp_final_binch4_proc_WV_semileptonic_bkg3_ch10->getVal();
  double bkg3_ch11=n_exp_final_binch5_proc_WV_semileptonic_bkg3_ch11->getVal();
  double bkg3_ch12=n_exp_final_binch6_proc_WV_semileptonic_bkg3_ch12->getVal();

  double SM_ch7=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7->getVal();
  double SM_ch8=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch8->getVal();
  double SM_ch9=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch9->getVal();
  double SM_ch10=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch10->getVal();
  double SM_ch11=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11->getVal();
  double SM_ch12=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12->getVal();

  cout <<"\n\t yield :" << endl;
  cout << "ch7 DY : " << bkg1_ch7<<" -> "<<bkg1_ch7/bkg1_ch7_start <<"\t\ttop: "<<bkg2_ch7 <<"\t\twz: "<<bkg3_ch7 <<"\tsignal SM: "<< SM_ch7 << endl;
  cout << "ch8 DY : " << bkg1_ch8<<" -> "<<bkg1_ch8/bkg1_ch8_start<<"\t\ttop: "<<bkg2_ch8 <<"\t\twz: "<<bkg3_ch8 <<"\tsignal SM: "<< SM_ch8 << endl;
  cout << "ch9 DY : " << bkg1_ch9<<" -> "<<bkg1_ch9/bkg1_ch9_start<<"\t\ttop: "<<bkg2_ch9 <<"\t\twz: "<<bkg3_ch9 <<"\tsignal SM: "<< SM_ch9 << endl;
  cout << "ch10 DY : " << bkg1_ch10<<" -> "<<bkg1_ch10/bkg1_ch10_start<<"\ttop: "<<bkg2_ch10 <<"\t\twz: "<<bkg3_ch10 <<"\tsignal SM: "<< SM_ch10 << endl;
  cout << "ch11 DY : " << bkg1_ch11<<" -> "<<bkg1_ch11/bkg1_ch11_start<<"\ttop: "<<bkg2_ch11 <<"\t\twz: "<<bkg3_ch11 <<"\tsignal SM: "<< SM_ch11 << endl;
  cout << "ch12 DY : " << bkg1_ch12<<" -> "<<bkg1_ch12/bkg1_ch12_start<<"\t\ttop: "<<bkg2_ch12 <<"\t\twz: "<<bkg3_ch12 <<"\tsignal SM: "<< SM_ch12 << endl;
  cout << "  SUM: \t  "<<bkg1_ch7+bkg1_ch8+bkg1_ch9+bkg1_ch10+bkg1_ch11+bkg1_ch12 <<"\t    "<<bkg2_ch7+bkg2_ch8+bkg2_ch9+bkg2_ch10+bkg2_ch11+bkg2_ch12<<"\t     "<<bkg3_ch7+bkg3_ch8+bkg3_ch9+bkg3_ch10+bkg3_ch11+bkg3_ch12 <<"\t\t  "<<SM_ch7+SM_ch8+SM_ch9+SM_ch10+SM_ch11+SM_ch12<< endl;
 



}
