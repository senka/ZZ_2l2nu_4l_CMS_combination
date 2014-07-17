void checkWS_7and8TeV_SMZZasBKG_2(TString file_name,TString parameter, double value){

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


  double bkg1_ch7_start=n_exp_final_binch7_proc_WV_semileptonic_bkg1_ch7_smzzasbkg->getVal();
  //                        n_exp_final_binch7_proc_WV_semileptonic_bkg1_ch7_smzzasbkg

  double bkg1_ch8_start=n_exp_final_binch8_proc_WV_semileptonic_bkg1_ch8_smzzasbkg->getVal();
  //                    n_exp_final_binch2_proc_WV_semileptonic_bkg3_ch8_smzzasbkg
  double bkg1_ch9_start=n_exp_final_binch9_proc_WV_semileptonic_bkg1_ch9_smzzasbkg->getVal();
  double bkg1_ch10_start=n_exp_final_binch10_proc_WV_semileptonic_bkg1_ch10_smzzasbkg->getVal();
  double bkg1_ch11_start=n_exp_final_binch11_proc_WV_semileptonic_bkg1_ch11_smzzasbkg->getVal();
  double bkg1_ch12_start=n_exp_binch12_proc_WV_semileptonic_bkg1_ch12_smzzasbkg->getVal();

  double bkg2_ch7_start=n_exp_final_binch7_proc_WV_semileptonic_bkg2_ch7_smzzasbkg->getVal();
  double bkg2_ch8_start=n_exp_final_binch8_proc_WV_semileptonic_bkg2_ch8_smzzasbkg->getVal();
  double bkg2_ch9_start=n_exp_final_binch9_proc_WV_semileptonic_bkg2_ch9_smzzasbkg->getVal();
  double bkg2_ch10_start=n_exp_final_binch10_proc_WV_semileptonic_bkg2_ch10_smzzasbkg->getVal();
  double bkg2_ch11_start=n_exp_binch11_proc_WV_semileptonic_bkg2_ch11_smzzasbkg->getVal();
  double bkg2_ch12_start=n_exp_binch12_proc_WV_semileptonic_bkg2_ch12_smzzasbkg->getVal();

  double bkg3_ch7_start=n_exp_final_binch7_proc_WV_semileptonic_bkg3_ch7_smzzasbkg->getVal();
  double bkg3_ch8_start=n_exp_final_binch8_proc_WV_semileptonic_bkg3_ch8_smzzasbkg->getVal();
  double bkg3_ch9_start=n_exp_final_binch9_proc_WV_semileptonic_bkg3_ch9_smzzasbkg->getVal();
  double bkg3_ch10_start=n_exp_final_binch10_proc_WV_semileptonic_bkg3_ch10_smzzasbkg->getVal();
  double bkg3_ch11_start=n_exp_final_binch11_proc_WV_semileptonic_bkg3_ch11_smzzasbkg->getVal();
  double bkg3_ch12_start=n_exp_final_binch12_proc_WV_semileptonic_bkg3_ch12_smzzasbkg->getVal();

  double bkg4_ch7_start=n_exp_final_binch7_proc_WV_semileptonic_bkg4_ch7_smzzasbkg->getVal();
  double bkg4_ch8_start=n_exp_final_binch8_proc_WV_semileptonic_bkg4_ch8_smzzasbkg->getVal();
  double bkg4_ch9_start=n_exp_final_binch9_proc_WV_semileptonic_bkg4_ch9_smzzasbkg->getVal();
  double bkg4_ch10_start=n_exp_final_binch10_proc_WV_semileptonic_bkg4_ch10_smzzasbkg->getVal();
  double bkg4_ch11_start=n_exp_final_binch11_proc_WV_semileptonic_bkg4_ch11_smzzasbkg->getVal();
  double bkg4_ch12_start=n_exp_final_binch12_proc_WV_semileptonic_bkg4_ch12_smzzasbkg->getVal();

  double SM_ch7_start=n_exp_final_binch7_proc_WWgammaZ_WV_atgc_semileptonic_ch7_smzzasbkg->getVal();


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


  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);


  double SM_ch8_start=n_exp_final_binch8_proc_WWgammaZ_WV_atgc_semileptonic_ch8_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch9_start=n_exp_final_binch9_proc_WWgammaZ_WV_atgc_semileptonic_ch9_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch10_start=n_exp_final_binch10_proc_WWgammaZ_WV_atgc_semileptonic_ch10_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch11_start=n_exp_final_binch11_proc_WWgammaZ_WV_atgc_semileptonic_ch11_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch12_start=n_exp_final_binch12_proc_WWgammaZ_WV_atgc_semileptonic_ch12_smzzasbkg->getVal();

  cout <<"\n\t yield 8TeV:" << endl;
  cout << "ch1 DY : " << bkg1_ch1_start <<"\t\ttop: "<<bkg2_ch1_start <<"\t\twz: "<<bkg3_ch1_start<<"\t\tzz: "<<bkg4_ch1_start <<"\tsignal SM: "<< SM_ch1_start << endl;
  cout << "ch2 DY : " << bkg1_ch2_start<<"\t\ttop: "<<bkg2_ch2_start <<"\t\twz: "<<bkg3_ch2_start <<"\t\tzz: "<<bkg4_ch2_start <<"\tsignal SM: "<< SM_ch2_start << endl;
  cout << "ch3 DY : " << bkg1_ch3_start<<"\t\ttop: "<<bkg2_ch3_start <<"\t\twz: "<<bkg3_ch3_start <<"\t\tzz: "<<bkg4_ch3_start <<"\tsignal SM: "<< SM_ch3_start << endl;
  cout << "ch4 DY : " << bkg1_ch4_start<<"\ttop: "<<bkg2_ch4_start <<"\t\twz: "<<bkg3_ch4_start <<"\t\tzz: "<<bkg4_ch4_start <<"\tsignal SM: "<< SM_ch4_start << endl;
  cout << "ch5 DY : " << bkg1_ch5_start<<"\ttop: "<<bkg2_ch5_start <<"\t\twz: "<<bkg3_ch5_start <<"\t\tzz: "<<bkg4_ch5_start <<"\tsignal SM: "<< SM_ch5_start << endl;
  cout << "ch6 DY : " << bkg1_ch6_start<<"\t\ttop: "<<bkg2_ch6_start <<"\t\twz: "<<bkg3_ch6_start<<"\t\tzz: "<<bkg4_ch6_start <<"\tsignal SM: "<< SM_ch6_start << endl;
  cout << "  SUM: \t  "<<bkg1_ch1_start+bkg1_ch2_start+bkg1_ch3_start+bkg1_ch4_start+bkg1_ch5_start+bkg1_ch6_start <<"\t    "<<bkg2_ch1_start+bkg2_ch2_start+bkg2_ch3_start+bkg2_ch4_start+bkg2_ch5_start+bkg2_ch6_start<<"\t     "<<bkg3_ch1_start+bkg3_ch2_start+bkg3_ch3_start+bkg3_ch4_start+bkg3_ch5_start+bkg3_ch6_start <<"\t     "<<bkg4_ch1_start+bkg4_ch2_start+bkg4_ch3_start+bkg4_ch4_start+bkg4_ch5_start+bkg4_ch6_start <<"\t\t  "<<SM_ch1_start+SM_ch2_start+SM_ch3_start+SM_ch4_start+SM_ch5_start+SM_ch6_start<< endl;
 


  cout <<"\n\t yield 7TeV:" << endl;
  cout << "ch7 DY : " << bkg1_ch7_start <<"\t\ttop: "<<bkg2_ch7_start <<"\t\twz: "<<bkg3_ch7_start<<"\t\tzz: "<<bkg4_ch7_start <<"\tsignal SM: "<< SM_ch7_start << endl;
  cout << "ch8 DY : " << bkg1_ch8_start<<"\t\ttop: "<<bkg2_ch8_start <<"\t\twz: "<<bkg3_ch8_start <<"\t\tzz: "<<bkg4_ch8_start <<"\tsignal SM: "<< SM_ch8_start << endl;
  cout << "ch9 DY : " << bkg1_ch9_start<<"\t\ttop: "<<bkg2_ch9_start <<"\t\twz: "<<bkg3_ch9_start <<"\t\tzz: "<<bkg4_ch9_start <<"\tsignal SM: "<< SM_ch9_start << endl;
  cout << "ch10 DY : " << bkg1_ch10_start<<"\ttop: "<<bkg2_ch10_start <<"\t\twz: "<<bkg3_ch10_start <<"\t\tzz: "<<bkg4_ch10_start <<"\tsignal SM: "<< SM_ch10_start << endl;
  cout << "ch11 DY : " << bkg1_ch11_start<<"\ttop: "<<bkg2_ch11_start <<"\t\twz: "<<bkg3_ch11_start <<"\t\tzz: "<<bkg4_ch11_start <<"\tsignal SM: "<< SM_ch11_start << endl;
  cout << "ch12 DY : " << bkg1_ch12_start<<"\t\ttop: "<<bkg2_ch12_start <<"\t\twz: "<<bkg3_ch12_start<<"\t\tzz: "<<bkg4_ch12_start <<"\tsignal SM: "<< SM_ch12_start << endl;
  cout << "  SUM: \t  "<<bkg1_ch7_start+bkg1_ch8_start+bkg1_ch9_start+bkg1_ch10_start+bkg1_ch11_start+bkg1_ch12_start <<"\t    "<<bkg2_ch7_start+bkg2_ch8_start+bkg2_ch9_start+bkg2_ch10_start+bkg2_ch11_start+bkg2_ch12_start<<"\t     "<<bkg3_ch7_start+bkg3_ch8_start+bkg3_ch9_start+bkg3_ch10_start+bkg3_ch11_start+bkg3_ch12_start <<"\t     "<<bkg4_ch7_start+bkg4_ch8_start+bkg4_ch9_start+bkg4_ch10_start+bkg4_ch11_start+bkg4_ch12_start <<"\t\t  "<<SM_ch7_start+SM_ch8_start+SM_ch9_start+SM_ch10_start+SM_ch11_start+SM_ch12_start<< endl;
 

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
  double SM_ch2=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch2_smzzasbkg->getVal();
  double SM_ch3=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch3_smzzasbkg->getVal();
  double SM_ch4=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch4_smzzasbkg->getVal();
  double SM_ch5=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch5_smzzasbkg->getVal();
  double SM_ch6=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch6_smzzasbkg->getVal();

  double bkg1_ch7=n_exp_final_binch7_proc_WV_semileptonic_bkg1_ch7_smzzasbkg->getVal();
  double bkg1_ch8=n_exp_final_binch8_proc_WV_semileptonic_bkg1_ch8_smzzasbkg->getVal();
  double bkg1_ch9=n_exp_final_binch9_proc_WV_semileptonic_bkg1_ch9_smzzasbkg->getVal();
  double bkg1_ch10=n_exp_final_binch10_proc_WV_semileptonic_bkg1_ch10_smzzasbkg->getVal();
  double bkg1_ch11=n_exp_final_binch11_proc_WV_semileptonic_bkg1_ch11_smzzasbkg->getVal();
  double bkg1_ch12=n_exp_binch12_proc_WV_semileptonic_bkg1_ch12_smzzasbkg->getVal();

  double bkg2_ch7=n_exp_final_binch7_proc_WV_semileptonic_bkg2_ch7_smzzasbkg->getVal();
  double bkg2_ch8=n_exp_final_binch8_proc_WV_semileptonic_bkg2_ch8_smzzasbkg->getVal();
  double bkg2_ch9=n_exp_final_binch9_proc_WV_semileptonic_bkg2_ch9_smzzasbkg->getVal();
  double bkg2_ch10=n_exp_final_binch10_proc_WV_semileptonic_bkg2_ch10_smzzasbkg->getVal();
  double bkg2_ch11=n_exp_binch11_proc_WV_semileptonic_bkg2_ch11_smzzasbkg->getVal();
  double bkg2_ch12=n_exp_binch12_proc_WV_semileptonic_bkg2_ch12_smzzasbkg->getVal();

  double bkg3_ch7=n_exp_final_binch7_proc_WV_semileptonic_bkg3_ch7_smzzasbkg->getVal();
  double bkg3_ch8=n_exp_final_binch8_proc_WV_semileptonic_bkg3_ch8_smzzasbkg->getVal();
  double bkg3_ch9=n_exp_final_binch9_proc_WV_semileptonic_bkg3_ch9_smzzasbkg->getVal();
  double bkg3_ch10=n_exp_final_binch10_proc_WV_semileptonic_bkg3_ch10_smzzasbkg->getVal();
  double bkg3_ch11=n_exp_final_binch11_proc_WV_semileptonic_bkg3_ch11_smzzasbkg->getVal();
  double bkg3_ch12=n_exp_final_binch12_proc_WV_semileptonic_bkg3_ch12_smzzasbkg->getVal();

  double bkg4_ch7=n_exp_final_binch7_proc_WV_semileptonic_bkg4_ch7_smzzasbkg->getVal();
  double bkg4_ch8=n_exp_final_binch8_proc_WV_semileptonic_bkg4_ch8_smzzasbkg->getVal();
  double bkg4_ch9=n_exp_final_binch9_proc_WV_semileptonic_bkg4_ch9_smzzasbkg->getVal();
  double bkg4_ch10=n_exp_final_binch10_proc_WV_semileptonic_bkg4_ch10_smzzasbkg->getVal();
  double bkg4_ch11=n_exp_final_binch11_proc_WV_semileptonic_bkg4_ch11_smzzasbkg->getVal();
  double bkg4_ch12=n_exp_final_binch12_proc_WV_semileptonic_bkg4_ch12_smzzasbkg->getVal();

  double SM_ch7=n_exp_final_binch7_proc_WWgammaZ_WV_atgc_semileptonic_ch7_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);

  double SM_ch8=n_exp_final_binch8_proc_WWgammaZ_WV_atgc_semileptonic_ch8_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //   dkg->setVal(0.01);

  double SM_ch9=n_exp_final_binch9_proc_WWgammaZ_WV_atgc_semileptonic_ch9_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch10=n_exp_final_binch10_proc_WWgammaZ_WV_atgc_semileptonic_ch10_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch11=n_exp_final_binch11_proc_WWgammaZ_WV_atgc_semileptonic_ch11_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch12=n_exp_final_binch12_proc_WWgammaZ_WV_atgc_semileptonic_ch12_smzzasbkg->getVal();

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
 

  cout <<"\n\t yield :" << endl;
  cout << "ch7 DY : " << bkg1_ch7<<" -> "<<bkg1_ch7/bkg1_ch7_start <<"\t\ttop: "<<bkg2_ch7<<" -> "<<bkg2_ch7/bkg2_ch7_start <<"\t\twz: "<<bkg3_ch7 <<" -> "<<bkg3_ch7/bkg3_ch7_start<<"\t\tzz: "<<bkg4_ch7 <<" -> "<<bkg4_ch7/bkg4_ch7_start<<"\t\tsignal SM: "<< SM_ch7<<" -> "<<SM_ch7/SM_ch7_start << endl;
  cout << "ch8 DY : " << bkg1_ch8<<" -> "<<bkg1_ch8/bkg1_ch8_start<<"\t\ttop: "<<bkg2_ch8<<" -> "<<bkg2_ch8/bkg2_ch8_start <<"\t\twz: "<<bkg3_ch8<<" -> "<<bkg3_ch8/bkg3_ch8_start <<"\t\tzz: "<<bkg4_ch8<<" -> "<<bkg4_ch8/bkg4_ch8_start <<"\t\tsignal SM: "<< SM_ch8<<" -> "<<SM_ch8/SM_ch8_start << endl;
  cout << "ch9 DY : " << bkg1_ch9<<" -> "<<bkg1_ch9/bkg1_ch9_start<<"\t\ttop: "<<bkg2_ch9<<" -> "<<bkg2_ch9/bkg2_ch9_start <<"\t\twz: "<<bkg3_ch9 <<" -> "<<bkg3_ch9/bkg3_ch9_start<<"\t\tzz: "<<bkg4_ch9 <<" -> "<<bkg4_ch9/bkg4_ch9_start<<"\t\tsignal SM: "<< SM_ch9<<" -> "<<SM_ch9/SM_ch9_start << endl;
  cout << "ch10 DY : " << bkg1_ch10<<" -> "<<bkg1_ch10/bkg1_ch10_start<<"\t\ttop: "<<bkg2_ch10<<" -> "<<bkg2_ch10/bkg2_ch10_start <<"\t\twz: "<<bkg3_ch10<<" -> "<<bkg3_ch10/bkg3_ch10_start <<"\t\tzz: "<<bkg4_ch10<<" -> "<<bkg4_ch10/bkg4_ch10_start <<"\t\tsignal SM: "<< SM_ch10<<" -> "<<SM_ch10/SM_ch10_start << endl;
  cout << "ch11 DY : " << bkg1_ch11<<" -> "<<bkg1_ch11/bkg1_ch11_start<<"\t\ttop: "<<bkg2_ch11<<" -> "<<bkg2_ch11/bkg2_ch11_start <<"\t\t\twz: "<<bkg3_ch11<<" -> "<<bkg3_ch11/bkg3_ch11_start <<"\t\t\tzz: "<<bkg4_ch11<<" -> "<<bkg4_ch11/bkg4_ch11_start <<"\t\tsignal SM: "<< SM_ch11<<" -> "<<SM_ch11/SM_ch11_start << endl;
  cout << "ch12 DY : " << bkg1_ch12<<" -> "<<bkg1_ch12/bkg1_ch12_start<<"\t\ttop: "<<bkg2_ch12 <<" -> "<<bkg2_ch12/bkg2_ch12_start<<"\t\t\twz: "<<bkg3_ch12<<" -> "<<bkg3_ch12/bkg3_ch12_start<<"\t\t\tzz: "<<bkg4_ch12<<" -> "<<bkg4_ch12/bkg4_ch12_start <<"\t\tsignal SM: "<< SM_ch12<<" -> "<<SM_ch12/SM_ch12_start << endl;
  cout << "  SUM: \t  "<<bkg1_ch7+bkg1_ch8+bkg1_ch9+bkg1_ch10+bkg1_ch11+bkg1_ch12 <<"\t\t    "<<bkg2_ch7+bkg2_ch8+bkg2_ch9+bkg2_ch10+bkg2_ch11+bkg2_ch12<<"\t\t\t     "<<bkg3_ch7+bkg3_ch8+bkg3_ch9+bkg3_ch10+bkg3_ch11+bkg3_ch12 <<"\t\t\t     "<<bkg4_ch7+bkg4_ch8+bkg4_ch9+bkg4_ch10+bkg4_ch11+bkg4_ch12 <<"\t\t\t  "<<SM_ch7+SM_ch8+SM_ch9+SM_ch10+SM_ch11+SM_ch12<< endl;
 


}

void readout_yields(){


  double bkg1_ch7=n_exp_final_binch1_proc_WV_semileptonic_bkg1_ch7_smzzasbkg->getVal();
  double bkg1_ch8=n_exp_final_binch2_proc_WV_semileptonic_bkg1_ch8_smzzasbkg->getVal();
  double bkg1_ch9=n_exp_final_binch3_proc_WV_semileptonic_bkg1_ch9_smzzasbkg->getVal();
  double bkg1_ch10=n_exp_final_binch4_proc_WV_semileptonic_bkg1_ch10_smzzasbkg->getVal();
  double bkg1_ch11=n_exp_final_binch5_proc_WV_semileptonic_bkg1_ch11_smzzasbkg->getVal();
  double bkg1_ch12=n_exp_binch6_proc_WV_semileptonic_bkg1_ch12_smzzasbkg->getVal();

  double bkg2_ch7=n_exp_final_binch1_proc_WV_semileptonic_bkg2_ch7_smzzasbkg->getVal();
  double bkg2_ch8=n_exp_final_binch2_proc_WV_semileptonic_bkg2_ch8_smzzasbkg->getVal();
  double bkg2_ch9=n_exp_final_binch3_proc_WV_semileptonic_bkg2_ch9_smzzasbkg->getVal();
  double bkg2_ch10=n_exp_final_binch4_proc_WV_semileptonic_bkg2_ch10_smzzasbkg->getVal();
  double bkg2_ch11=n_exp_binch5_proc_WV_semileptonic_bkg2_ch11_smzzasbkg->getVal();
  double bkg2_ch12=n_exp_binch6_proc_WV_semileptonic_bkg2_ch12_smzzasbkg->getVal();

  double bkg3_ch7=n_exp_final_binch1_proc_WV_semileptonic_bkg3_ch7_smzzasbkg->getVal();
  double bkg3_ch8=n_exp_final_binch2_proc_WV_semileptonic_bkg3_ch8_smzzasbkg->getVal();
  double bkg3_ch9=n_exp_final_binch3_proc_WV_semileptonic_bkg3_ch9_smzzasbkg->getVal();
  double bkg3_ch10=n_exp_final_binch4_proc_WV_semileptonic_bkg3_ch10_smzzasbkg->getVal();
  double bkg3_ch11=n_exp_final_binch5_proc_WV_semileptonic_bkg3_ch11_smzzasbkg->getVal();
  double bkg3_ch12=n_exp_final_binch6_proc_WV_semileptonic_bkg3_ch12_smzzasbkg->getVal();

  double SM_ch7=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7_smzzasbkg->getVal();
  double SM_ch8=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch8_smzzasbkg->getVal();
  double SM_ch9=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch9_smzzasbkg->getVal();
  double SM_ch10=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch10_smzzasbkg->getVal();
  double SM_ch11=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11_smzzasbkg->getVal();
  double SM_ch12=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12_smzzasbkg->getVal();

  cout <<"\n\t yield :" << endl;
  cout << "ch7 DY : " << bkg1_ch7<<" -> "<<bkg1_ch7/bkg1_ch7_start <<"\t\ttop: "<<bkg2_ch7 <<"\t\twz: "<<bkg3_ch7 <<"\tsignal SM: "<< SM_ch7 << endl;
  cout << "ch8 DY : " << bkg1_ch8<<" -> "<<bkg1_ch8/bkg1_ch8_start<<"\t\ttop: "<<bkg2_ch8 <<"\t\twz: "<<bkg3_ch8 <<"\tsignal SM: "<< SM_ch8 << endl;
  cout << "ch9 DY : " << bkg1_ch9<<" -> "<<bkg1_ch9/bkg1_ch9_start<<"\t\ttop: "<<bkg2_ch9 <<"\t\twz: "<<bkg3_ch9 <<"\tsignal SM: "<< SM_ch9 << endl;
  cout << "ch10 DY : " << bkg1_ch10<<" -> "<<bkg1_ch10/bkg1_ch10_start<<"\ttop: "<<bkg2_ch10 <<"\t\twz: "<<bkg3_ch10 <<"\tsignal SM: "<< SM_ch10 << endl;
  cout << "ch11 DY : " << bkg1_ch11<<" -> "<<bkg1_ch11/bkg1_ch11_start<<"\ttop: "<<bkg2_ch11 <<"\t\twz: "<<bkg3_ch11 <<"\tsignal SM: "<< SM_ch11 << endl;
  cout << "ch12 DY : " << bkg1_ch12<<" -> "<<bkg1_ch12/bkg1_ch12_start<<"\t\ttop: "<<bkg2_ch12 <<"\t\twz: "<<bkg3_ch12 <<"\tsignal SM: "<< SM_ch12 << endl;
  cout << "  SUM: \t  "<<bkg1_ch7+bkg1_ch8+bkg1_ch9+bkg1_ch10+bkg1_ch11+bkg1_ch12 <<"\t    "<<bkg2_ch7+bkg2_ch8+bkg2_ch9+bkg2_ch10+bkg2_ch11+bkg2_ch12<<"\t     "<<bkg3_ch7+bkg3_ch8+bkg3_ch9+bkg3_ch10+bkg3_ch11+bkg3_ch12 <<"\t\t  "<<SM_ch7+SM_ch8+SM_ch9+SM_ch10+SM_ch11+SM_ch12<< endl;
 



}
