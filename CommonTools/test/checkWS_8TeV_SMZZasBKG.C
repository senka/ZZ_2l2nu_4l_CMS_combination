void checkWS_8TeV_SMZZasBKG(TString file_name,TString parameter, double value){

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

  double bkg1_ch1_start=n_exp_final_binch1_proc_WV_semileptonic_bkg1_ch1_smzzasbkg->getVal();
  double bkg1_ch2_start=n_exp_final_binch2_proc_WV_semileptonic_bkg1_ch2_smzzasbkg->getVal();
  double bkg1_ch3_start=n_exp_final_binch3_proc_WV_semileptonic_bkg1_ch3_smzzasbkg->getVal();
  double bkg1_ch4_start=n_exp_final_binch4_proc_WV_semileptonic_bkg1_ch4_smzzasbkg->getVal();
  double bkg1_ch5_start=n_exp_final_binch5_proc_WV_semileptonic_bkg1_ch5_smzzasbkg->getVal();
  double bkg1_ch6_start=n_exp_binch6_proc_WV_semileptonic_bkg1_ch6_smzzasbkg->getVal();

  double bkg2_ch1_start=n_exp_final_binch1_proc_WV_semileptonic_bkg2_ch1_smzzasbkg->getVal();
  double bkg2_ch2_start=n_exp_final_binch2_proc_WV_semileptonic_bkg2_ch2_smzzasbkg->getVal();
  double bkg2_ch3_start=n_exp_final_binch3_proc_WV_semileptonic_bkg2_ch3_smzzasbkg->getVal();
  double bkg2_ch4_start=n_exp_final_binch4_proc_WV_semileptonic_bkg2_ch4_smzzasbkg->getVal();
  double bkg2_ch5_start=n_exp_binch5_proc_WV_semileptonic_bkg2_ch5_smzzasbkg->getVal();
  double bkg2_ch6_start=n_exp_binch6_proc_WV_semileptonic_bkg2_ch6_smzzasbkg->getVal();

  double bkg3_ch1_start=n_exp_final_binch1_proc_WV_semileptonic_bkg3_ch1_smzzasbkg->getVal();
  double bkg3_ch2_start=n_exp_final_binch2_proc_WV_semileptonic_bkg3_ch2_smzzasbkg->getVal();
  double bkg3_ch3_start=n_exp_final_binch3_proc_WV_semileptonic_bkg3_ch3_smzzasbkg->getVal();
  double bkg3_ch4_start=n_exp_final_binch4_proc_WV_semileptonic_bkg3_ch4_smzzasbkg->getVal();
  double bkg3_ch5_start=n_exp_final_binch5_proc_WV_semileptonic_bkg3_ch5_smzzasbkg->getVal();
  double bkg3_ch6_start=n_exp_final_binch6_proc_WV_semileptonic_bkg3_ch6_smzzasbkg->getVal();

  double bkg4_ch1_start=n_exp_final_binch1_proc_WV_semileptonic_bkg4_ch1_smzzasbkg->getVal();
  double bkg4_ch2_start=n_exp_final_binch2_proc_WV_semileptonic_bkg4_ch2_smzzasbkg->getVal();
  double bkg4_ch3_start=n_exp_final_binch3_proc_WV_semileptonic_bkg4_ch3_smzzasbkg->getVal();
  double bkg4_ch4_start=n_exp_final_binch4_proc_WV_semileptonic_bkg4_ch4_smzzasbkg->getVal();
  double bkg4_ch5_start=n_exp_final_binch5_proc_WV_semileptonic_bkg4_ch5_smzzasbkg->getVal();
  double bkg4_ch6_start=n_exp_final_binch6_proc_WV_semileptonic_bkg4_ch6_smzzasbkg->getVal();

  double SM_ch1_start=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);


  double SM_ch2_start=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch2_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch3_start=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch3_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch4_start=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch4_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch5_start=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch5_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch6_start=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6_smzzasbkg->getVal();

  cout <<"\n\t yield :" << endl;
  cout << "ch1 DY : " << bkg1_ch1_start <<"\t\ttop: "<<bkg2_ch1_start <<"\t\twz: "<<bkg3_ch1_start<<"\t\tzz: "<<bkg4_ch1_start <<"\tsignal SM: "<< SM_ch1_start << endl;
  cout << "ch2 DY : " << bkg1_ch2_start<<"\t\ttop: "<<bkg2_ch2_start <<"\t\twz: "<<bkg3_ch2_start <<"\t\tzz: "<<bkg4_ch2_start <<"\tsignal SM: "<< SM_ch2_start << endl;
  cout << "ch3 DY : " << bkg1_ch3_start<<"\t\ttop: "<<bkg2_ch3_start <<"\t\twz: "<<bkg3_ch3_start <<"\t\tzz: "<<bkg4_ch3_start <<"\tsignal SM: "<< SM_ch3_start << endl;
  cout << "ch4 DY : " << bkg1_ch4_start<<"\ttop: "<<bkg2_ch4_start <<"\t\twz: "<<bkg3_ch4_start <<"\t\tzz: "<<bkg4_ch4_start <<"\tsignal SM: "<< SM_ch4_start << endl;
  cout << "ch5 DY : " << bkg1_ch5_start<<"\ttop: "<<bkg2_ch5_start <<"\t\twz: "<<bkg3_ch5_start <<"\t\tzz: "<<bkg4_ch5_start <<"\tsignal SM: "<< SM_ch5_start << endl;
  cout << "ch6 DY : " << bkg1_ch6_start<<"\t\ttop: "<<bkg2_ch6_start <<"\t\twz: "<<bkg3_ch6_start<<"\t\tzz: "<<bkg4_ch6_start <<"\tsignal SM: "<< SM_ch6_start << endl;
  cout << "  SUM: \t  "<<bkg1_ch1_start+bkg1_ch2_start+bkg1_ch3_start+bkg1_ch4_start+bkg1_ch5_start+bkg1_ch6_start <<"\t    "<<bkg2_ch1_start+bkg2_ch2_start+bkg2_ch3_start+bkg2_ch4_start+bkg2_ch5_start+bkg2_ch6_start<<"\t     "<<bkg3_ch1_start+bkg3_ch2_start+bkg3_ch3_start+bkg3_ch4_start+bkg3_ch5_start+bkg3_ch6_start <<"\t     "<<bkg4_ch1_start+bkg4_ch2_start+bkg4_ch3_start+bkg4_ch4_start+bkg4_ch5_start+bkg4_ch6_start <<"\t\t  "<<SM_ch1_start+SM_ch2_start+SM_ch3_start+SM_ch4_start+SM_ch5_start+SM_ch6_start<< endl;
 

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


  double bkg1_ch1=n_exp_final_binch1_proc_WV_semileptonic_bkg1_ch1_smzzasbkg->getVal();
  double bkg1_ch2=n_exp_final_binch2_proc_WV_semileptonic_bkg1_ch2_smzzasbkg->getVal();
  double bkg1_ch3=n_exp_final_binch3_proc_WV_semileptonic_bkg1_ch3_smzzasbkg->getVal();
  double bkg1_ch4=n_exp_final_binch4_proc_WV_semileptonic_bkg1_ch4_smzzasbkg->getVal();
  double bkg1_ch5=n_exp_final_binch5_proc_WV_semileptonic_bkg1_ch5_smzzasbkg->getVal();
  double bkg1_ch6=n_exp_binch6_proc_WV_semileptonic_bkg1_ch6_smzzasbkg->getVal();

  double bkg2_ch1=n_exp_final_binch1_proc_WV_semileptonic_bkg2_ch1_smzzasbkg->getVal();
  double bkg2_ch2=n_exp_final_binch2_proc_WV_semileptonic_bkg2_ch2_smzzasbkg->getVal();
  double bkg2_ch3=n_exp_final_binch3_proc_WV_semileptonic_bkg2_ch3_smzzasbkg->getVal();
  double bkg2_ch4=n_exp_final_binch4_proc_WV_semileptonic_bkg2_ch4_smzzasbkg->getVal();
  double bkg2_ch5=n_exp_binch5_proc_WV_semileptonic_bkg2_ch5_smzzasbkg->getVal();
  double bkg2_ch6=n_exp_binch6_proc_WV_semileptonic_bkg2_ch6_smzzasbkg->getVal();

  double bkg3_ch1=n_exp_final_binch1_proc_WV_semileptonic_bkg3_ch1_smzzasbkg->getVal();
  double bkg3_ch2=n_exp_final_binch2_proc_WV_semileptonic_bkg3_ch2_smzzasbkg->getVal();
  double bkg3_ch3=n_exp_final_binch3_proc_WV_semileptonic_bkg3_ch3_smzzasbkg->getVal();
  double bkg3_ch4=n_exp_final_binch4_proc_WV_semileptonic_bkg3_ch4_smzzasbkg->getVal();
  double bkg3_ch5=n_exp_final_binch5_proc_WV_semileptonic_bkg3_ch5_smzzasbkg->getVal();
  double bkg3_ch6=n_exp_final_binch6_proc_WV_semileptonic_bkg3_ch6_smzzasbkg->getVal();

  double bkg4_ch1=n_exp_final_binch1_proc_WV_semileptonic_bkg4_ch1_smzzasbkg->getVal();
  double bkg4_ch2=n_exp_final_binch2_proc_WV_semileptonic_bkg4_ch2_smzzasbkg->getVal();
  double bkg4_ch3=n_exp_final_binch3_proc_WV_semileptonic_bkg4_ch3_smzzasbkg->getVal();
  double bkg4_ch4=n_exp_final_binch4_proc_WV_semileptonic_bkg4_ch4_smzzasbkg->getVal();
  double bkg4_ch5=n_exp_final_binch5_proc_WV_semileptonic_bkg4_ch5_smzzasbkg->getVal();
  double bkg4_ch6=n_exp_final_binch6_proc_WV_semileptonic_bkg4_ch6_smzzasbkg->getVal();

  double SM_ch1=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);

  double SM_ch2=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch2_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //   dkg->setVal(0.01);

  double SM_ch3=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch3_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch4=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch4_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch5=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch5_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch6=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6_smzzasbkg->getVal();

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
  cout << "ch1 DY : " << bkg1_ch1<<" -> "<<bkg1_ch1/bkg1_ch1_start <<"\t\ttop: "<<bkg2_ch1<<" -> "<<bkg2_ch1/bkg2_ch1_start <<"\t\twz: "<<bkg3_ch1 <<" -> "<<bkg3_ch1/bkg3_ch1_start<<"\t\tzz: "<<bkg4_ch1 <<" -> "<<bkg4_ch1/bkg4_ch1_start<<"\t\tsignal SM: "<< SM_ch1<<" -> "<<SM_ch1/SM_ch1_start << endl;
  cout << "ch2 DY : " << bkg1_ch2<<" -> "<<bkg1_ch2/bkg1_ch2_start<<"\t\ttop: "<<bkg2_ch2<<" -> "<<bkg2_ch2/bkg2_ch2_start <<"\t\twz: "<<bkg3_ch2<<" -> "<<bkg3_ch2/bkg3_ch2_start <<"\t\tzz: "<<bkg4_ch2<<" -> "<<bkg4_ch2/bkg4_ch2_start <<"\t\tsignal SM: "<< SM_ch2<<" -> "<<SM_ch2/SM_ch2_start << endl;
  cout << "ch3 DY : " << bkg1_ch3<<" -> "<<bkg1_ch3/bkg1_ch3_start<<"\t\ttop: "<<bkg2_ch3<<" -> "<<bkg2_ch3/bkg2_ch3_start <<"\t\twz: "<<bkg3_ch3 <<" -> "<<bkg3_ch3/bkg3_ch3_start<<"\t\tzz: "<<bkg4_ch3 <<" -> "<<bkg4_ch3/bkg4_ch3_start<<"\t\tsignal SM: "<< SM_ch3<<" -> "<<SM_ch3/SM_ch3_start << endl;
  cout << "ch4 DY : " << bkg1_ch4<<" -> "<<bkg1_ch4/bkg1_ch4_start<<"\t\ttop: "<<bkg2_ch4<<" -> "<<bkg2_ch4/bkg2_ch4_start <<"\t\twz: "<<bkg3_ch4<<" -> "<<bkg3_ch4/bkg3_ch4_start <<"\t\tzz: "<<bkg4_ch4<<" -> "<<bkg4_ch4/bkg4_ch4_start <<"\t\tsignal SM: "<< SM_ch4<<" -> "<<SM_ch4/SM_ch4_start << endl;
  cout << "ch5 DY : " << bkg1_ch5<<" -> "<<bkg1_ch5/bkg1_ch5_start<<"\t\ttop: "<<bkg2_ch5<<" -> "<<bkg2_ch5/bkg2_ch5_start <<"\t\t\twz: "<<bkg3_ch5<<" -> "<<bkg3_ch5/bkg3_ch5_start <<"\t\t\tzz: "<<bkg4_ch5<<" -> "<<bkg4_ch5/bkg4_ch5_start <<"\t\tsignal SM: "<< SM_ch5<<" -> "<<SM_ch5/SM_ch5_start << endl;
  cout << "ch6 DY : " << bkg1_ch6<<" -> "<<bkg1_ch6/bkg1_ch6_start<<"\t\ttop: "<<bkg2_ch6 <<" -> "<<bkg2_ch6/bkg2_ch6_start<<"\t\t\twz: "<<bkg3_ch6<<" -> "<<bkg3_ch6/bkg3_ch6_start<<"\t\t\tzz: "<<bkg4_ch6<<" -> "<<bkg4_ch6/bkg4_ch6_start <<"\t\tsignal SM: "<< SM_ch6<<" -> "<<SM_ch6/SM_ch6_start << endl;
  cout << "  SUM: \t  "<<bkg1_ch1+bkg1_ch2+bkg1_ch3+bkg1_ch4+bkg1_ch5+bkg1_ch6 <<"\t\t    "<<bkg2_ch1+bkg2_ch2+bkg2_ch3+bkg2_ch4+bkg2_ch5+bkg2_ch6<<"\t\t\t     "<<bkg3_ch1+bkg3_ch2+bkg3_ch3+bkg3_ch4+bkg3_ch5+bkg3_ch6 <<"\t\t\t     "<<bkg4_ch1+bkg4_ch2+bkg4_ch3+bkg4_ch4+bkg4_ch5+bkg4_ch6 <<"\t\t\t  "<<SM_ch1+SM_ch2+SM_ch3+SM_ch4+SM_ch5+SM_ch6<< endl;
 


  //  w->cd();
  
  /*
    cout << endl;
  cout << "ch1 bkg1: " << n_exp_final_binch1_proc_WV_semileptonic_bkg1_ch1->getVal() << endl;
  cout << "ch1 bkg2: " << n_exp_final_binch1_proc_WV_semileptonic_bkg2_ch1->getVal() << endl;
  cout << "ch1 bkg3: " << n_exp_final_binch1_proc_WV_semileptonic_bkg3_ch1->getVal() << endl;
  cout << "ch1 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1->getVal() << endl;
    cout << endl;
  cout << "ch5 bkg1: " << n_exp_final_binch5_proc_WV_semileptonic_bkg1_ch5->getVal() << endl;
  cout << "ch5 bkg2: " << n_exp_binch5_proc_WV_semileptonic_bkg2_ch5->getVal() << endl;
  cout << "ch5 bkg3: " << n_exp_final_binch5_proc_WV_semileptonic_bkg3_ch5->getVal() << endl;
  cout << "ch5 signal: " <<n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch5->getVal() << endl;
    cout << endl;
  cout << "ch6 bkg1: " << n_exp_binch6_proc_WV_semileptonic_bkg1_ch6->getVal() << endl;
  cout << "ch6 bkg2: " << n_exp_binch6_proc_WV_semileptonic_bkg2_ch6->getVal() << endl;
  cout << "ch6 bkg3: " << n_exp_final_binch6_proc_WV_semileptonic_bkg3_ch6->getVal() << endl;
  cout << "ch6 signal: " <<n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal() << endl;

  double yield=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal();
  CMS_hzz2l2v_QCD_ACC_JVeto->setVal(1.);
  double yieldUp=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal();
  CMS_hzz2l2v_QCD_ACC_JVeto->setVal(-1.);
  double yieldDown=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal();
  cout <<"ch6 QCD: "<< yieldDown/yield<<" / "<<yieldUp/yield << endl;
  CMS_hzz2l2v_QCD_ACC_JVeto->setVal(0.);

  // zz2l2nu_CMS_hzz2l2v_sherpa
  double yield=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  double yieldUp=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  double yieldDown=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal();
  cout <<"ch6 QCD: "<< yieldDown/yield<<" / "<<yieldUp/yield << endl;
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(0.);

  
      //  cout << "ch1 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1->getVal() << endl;
  cout << "ch6 signal: " <<n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal() << endl;


  double yield_1_sherpaUp,yield_2_sherpaUp,yield_3_sherpaUp,yield_4_sherpaUp,yield_5_sherpaUp,yield_6_sherpaUp;

  cout <<"\n setting sherpa=1"<< endl;
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  cout <<"\n setting lZ=0.01"<< endl;
  //  lZval
      lZ->setVal(lZval);
  //      lZ->setVal(0.01);
      //  cout << "ch1 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1->getVal() << endl;
  cout << "ch1 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);

  yield_1_sherpaUp=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1->getVal();
  //  file->Close();
  cout <<"\tplace 1" << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  cout << "ch2 signal: " <<n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch2->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  yield_2_sherpaUp=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch2->getVal();
  //  file->Close();

  cout <<"\tplace 2" << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  cout << "ch3 signal: " <<n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch3->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  yield_3_sherpaUp=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch3->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  cout << "ch4 signal: " <<n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch4->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  yield_4_sherpaUp=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch4->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  cout << "ch5 signal: " <<n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch5->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  yield_5_sherpaUp=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch5->getVal();
  //  file->Close();
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  cout << "ch6 signal: " <<n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(1.);
  lZ->setVal(lZval);
  yield_6_sherpaUp=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal();
  
 
  double yield_1_sherpaDown,yield_2_sherpaDown,yield_3_sherpaDown,yield_4_sherpaDown,yield_5_sherpaDown,yield_6_sherpaDown;

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  cout <<"\n setting sherpa=1"<< endl;
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  cout <<"\n setting lZ=0.01"<< endl;
      lZ->setVal(lZval);
  //      lZ->setVal(lZval);
      //  cout << "ch1 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1->getVal() << endl;
  cout << "ch1 signal: " <<n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_1_sherpaDown=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  cout << "ch2 signal: " <<n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch2->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_2_sherpaDown=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch2->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  cout << "ch3 signal: " <<n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch3->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_3_sherpaDown=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch3->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  cout << "ch4 signal: " <<n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch4->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_4_sherpaDown=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch4->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  cout << "ch5 signal: " <<n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch5->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_5_sherpaDown=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch5->getVal();
  //  file->Close();

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  cout << "ch6 signal: " <<n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal() << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(-1.);
  lZ->setVal(lZval);
  yield_6_sherpaDown=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal();
  
  

 
  double yield_1,yield_2,yield_3,yield_4,yield_5,yield_6;

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();
  lZ->setVal(lZval);
  zz2l2nu_CMS_hzz2l2v_sherpa->setVal(0.);
  yield_1=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1->getVal();
  yield_2=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch2->getVal();
  yield_3=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch3->getVal();
  yield_4=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch4->getVal();
  yield_5=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch5->getVal();
  yield_6=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6->getVal();
  
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


  double bkg1_ch1=n_exp_final_binch1_proc_WV_semileptonic_bkg1_ch1_smzzasbkg->getVal();
  double bkg1_ch2=n_exp_final_binch2_proc_WV_semileptonic_bkg1_ch2_smzzasbkg->getVal();
  double bkg1_ch3=n_exp_final_binch3_proc_WV_semileptonic_bkg1_ch3_smzzasbkg->getVal();
  double bkg1_ch4=n_exp_final_binch4_proc_WV_semileptonic_bkg1_ch4_smzzasbkg->getVal();
  double bkg1_ch5=n_exp_final_binch5_proc_WV_semileptonic_bkg1_ch5_smzzasbkg->getVal();
  double bkg1_ch6=n_exp_binch6_proc_WV_semileptonic_bkg1_ch6_smzzasbkg->getVal();

  double bkg2_ch1=n_exp_final_binch1_proc_WV_semileptonic_bkg2_ch1_smzzasbkg->getVal();
  double bkg2_ch2=n_exp_final_binch2_proc_WV_semileptonic_bkg2_ch2_smzzasbkg->getVal();
  double bkg2_ch3=n_exp_final_binch3_proc_WV_semileptonic_bkg2_ch3_smzzasbkg->getVal();
  double bkg2_ch4=n_exp_final_binch4_proc_WV_semileptonic_bkg2_ch4_smzzasbkg->getVal();
  double bkg2_ch5=n_exp_binch5_proc_WV_semileptonic_bkg2_ch5_smzzasbkg->getVal();
  double bkg2_ch6=n_exp_binch6_proc_WV_semileptonic_bkg2_ch6_smzzasbkg->getVal();

  double bkg3_ch1=n_exp_final_binch1_proc_WV_semileptonic_bkg3_ch1_smzzasbkg->getVal();
  double bkg3_ch2=n_exp_final_binch2_proc_WV_semileptonic_bkg3_ch2_smzzasbkg->getVal();
  double bkg3_ch3=n_exp_final_binch3_proc_WV_semileptonic_bkg3_ch3_smzzasbkg->getVal();
  double bkg3_ch4=n_exp_final_binch4_proc_WV_semileptonic_bkg3_ch4_smzzasbkg->getVal();
  double bkg3_ch5=n_exp_final_binch5_proc_WV_semileptonic_bkg3_ch5_smzzasbkg->getVal();
  double bkg3_ch6=n_exp_final_binch6_proc_WV_semileptonic_bkg3_ch6_smzzasbkg->getVal();

  double SM_ch1=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch1_smzzasbkg->getVal();
  double SM_ch2=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch2_smzzasbkg->getVal();
  double SM_ch3=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch3_smzzasbkg->getVal();
  double SM_ch4=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch4_smzzasbkg->getVal();
  double SM_ch5=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch5_smzzasbkg->getVal();
  double SM_ch6=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6_smzzasbkg->getVal();

  cout <<"\n\t yield :" << endl;
  cout << "ch1 DY : " << bkg1_ch1<<" -> "<<bkg1_ch1/bkg1_ch1_start <<"\t\ttop: "<<bkg2_ch1 <<"\t\twz: "<<bkg3_ch1 <<"\tsignal SM: "<< SM_ch1 << endl;
  cout << "ch2 DY : " << bkg1_ch2<<" -> "<<bkg1_ch2/bkg1_ch2_start<<"\t\ttop: "<<bkg2_ch2 <<"\t\twz: "<<bkg3_ch2 <<"\tsignal SM: "<< SM_ch2 << endl;
  cout << "ch3 DY : " << bkg1_ch3<<" -> "<<bkg1_ch3/bkg1_ch3_start<<"\t\ttop: "<<bkg2_ch3 <<"\t\twz: "<<bkg3_ch3 <<"\tsignal SM: "<< SM_ch3 << endl;
  cout << "ch4 DY : " << bkg1_ch4<<" -> "<<bkg1_ch4/bkg1_ch4_start<<"\ttop: "<<bkg2_ch4 <<"\t\twz: "<<bkg3_ch4 <<"\tsignal SM: "<< SM_ch4 << endl;
  cout << "ch5 DY : " << bkg1_ch5<<" -> "<<bkg1_ch5/bkg1_ch5_start<<"\ttop: "<<bkg2_ch5 <<"\t\twz: "<<bkg3_ch5 <<"\tsignal SM: "<< SM_ch5 << endl;
  cout << "ch6 DY : " << bkg1_ch6<<" -> "<<bkg1_ch6/bkg1_ch6_start<<"\t\ttop: "<<bkg2_ch6 <<"\t\twz: "<<bkg3_ch6 <<"\tsignal SM: "<< SM_ch6 << endl;
  cout << "  SUM: \t  "<<bkg1_ch1+bkg1_ch2+bkg1_ch3+bkg1_ch4+bkg1_ch5+bkg1_ch6 <<"\t    "<<bkg2_ch1+bkg2_ch2+bkg2_ch3+bkg2_ch4+bkg2_ch5+bkg2_ch6<<"\t     "<<bkg3_ch1+bkg3_ch2+bkg3_ch3+bkg3_ch4+bkg3_ch5+bkg3_ch6 <<"\t\t  "<<SM_ch1+SM_ch2+SM_ch3+SM_ch4+SM_ch5+SM_ch6<< endl;
 



}
