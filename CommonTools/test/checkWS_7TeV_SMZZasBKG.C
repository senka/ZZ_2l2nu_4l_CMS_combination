void checkWS_7TeV_SMZZasBKG(TString file_name,TString parameter, double value){

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

  double bkg1_ch7_start=n_exp_final_binch1_proc_WV_semileptonic_bkg1_ch7_smzzasbkg->getVal();
  double bkg1_ch8_start=n_exp_final_binch2_proc_WV_semileptonic_bkg1_ch8_smzzasbkg->getVal();
  //                    n_exp_final_binch2_proc_WV_semileptonic_bkg3_ch8_smzzasbkg
  double bkg1_ch9_start=n_exp_final_binch3_proc_WV_semileptonic_bkg1_ch9_smzzasbkg->getVal();
  double bkg1_ch10_start=n_exp_final_binch4_proc_WV_semileptonic_bkg1_ch10_smzzasbkg->getVal();
  double bkg1_ch11_start=n_exp_final_binch5_proc_WV_semileptonic_bkg1_ch11_smzzasbkg->getVal();
  double bkg1_ch12_start=n_exp_binch6_proc_WV_semileptonic_bkg1_ch12_smzzasbkg->getVal();

  double bkg2_ch7_start=n_exp_final_binch1_proc_WV_semileptonic_bkg2_ch7_smzzasbkg->getVal();
  double bkg2_ch8_start=n_exp_final_binch2_proc_WV_semileptonic_bkg2_ch8_smzzasbkg->getVal();
  double bkg2_ch9_start=n_exp_final_binch3_proc_WV_semileptonic_bkg2_ch9_smzzasbkg->getVal();
  double bkg2_ch10_start=n_exp_final_binch4_proc_WV_semileptonic_bkg2_ch10_smzzasbkg->getVal();
  double bkg2_ch11_start=n_exp_binch5_proc_WV_semileptonic_bkg2_ch11_smzzasbkg->getVal();
  double bkg2_ch12_start=n_exp_binch6_proc_WV_semileptonic_bkg2_ch12_smzzasbkg->getVal();

  double bkg3_ch7_start=n_exp_final_binch1_proc_WV_semileptonic_bkg3_ch7_smzzasbkg->getVal();
  double bkg3_ch8_start=n_exp_final_binch2_proc_WV_semileptonic_bkg3_ch8_smzzasbkg->getVal();
  double bkg3_ch9_start=n_exp_final_binch3_proc_WV_semileptonic_bkg3_ch9_smzzasbkg->getVal();
  double bkg3_ch10_start=n_exp_final_binch4_proc_WV_semileptonic_bkg3_ch10_smzzasbkg->getVal();
  double bkg3_ch11_start=n_exp_final_binch5_proc_WV_semileptonic_bkg3_ch11_smzzasbkg->getVal();
  double bkg3_ch12_start=n_exp_final_binch6_proc_WV_semileptonic_bkg3_ch12_smzzasbkg->getVal();

  double bkg4_ch7_start=n_exp_final_binch1_proc_WV_semileptonic_bkg4_ch7_smzzasbkg->getVal();
  double bkg4_ch8_start=n_exp_final_binch2_proc_WV_semileptonic_bkg4_ch8_smzzasbkg->getVal();
  double bkg4_ch9_start=n_exp_final_binch3_proc_WV_semileptonic_bkg4_ch9_smzzasbkg->getVal();
  double bkg4_ch10_start=n_exp_final_binch4_proc_WV_semileptonic_bkg4_ch10_smzzasbkg->getVal();
  double bkg4_ch11_start=n_exp_final_binch5_proc_WV_semileptonic_bkg4_ch11_smzzasbkg->getVal();
  double bkg4_ch12_start=n_exp_final_binch6_proc_WV_semileptonic_bkg4_ch12_smzzasbkg->getVal();

  double SM_ch7_start=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);


  double SM_ch8_start=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch8_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch9_start=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch9_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch10_start=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch10_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch11_start=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch12_start=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12_smzzasbkg->getVal();

  cout <<"\n\t yield :" << endl;
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

  double bkg4_ch7=n_exp_final_binch1_proc_WV_semileptonic_bkg4_ch7_smzzasbkg->getVal();
  double bkg4_ch8=n_exp_final_binch2_proc_WV_semileptonic_bkg4_ch8_smzzasbkg->getVal();
  double bkg4_ch9=n_exp_final_binch3_proc_WV_semileptonic_bkg4_ch9_smzzasbkg->getVal();
  double bkg4_ch10=n_exp_final_binch4_proc_WV_semileptonic_bkg4_ch10_smzzasbkg->getVal();
  double bkg4_ch11=n_exp_final_binch5_proc_WV_semileptonic_bkg4_ch11_smzzasbkg->getVal();
  double bkg4_ch12=n_exp_final_binch6_proc_WV_semileptonic_bkg4_ch12_smzzasbkg->getVal();

  double SM_ch7=n_exp_final_binch1_proc_WWgammaZ_WV_atgc_semileptonic_ch7_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);

  double SM_ch8=n_exp_final_binch2_proc_WWgammaZ_WV_atgc_semileptonic_ch8_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //   dkg->setVal(0.01);

  double SM_ch9=n_exp_final_binch3_proc_WWgammaZ_WV_atgc_semileptonic_ch9_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch10=n_exp_final_binch4_proc_WWgammaZ_WV_atgc_semileptonic_ch10_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch11=n_exp_final_binch5_proc_WWgammaZ_WV_atgc_semileptonic_ch11_smzzasbkg->getVal();

  TFile * file=new TFile(file_name,"read");
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  //  w->cd();
  TObject * s=w->obj(parameter);
  const RooRealVar& rdep = dynamic_cast<const RooRealVar&>(s);
  rdep.setVal(value);
  w->cd();
  //  dkg->setVal(0.01);
 
  double SM_ch12=n_exp_final_binch6_proc_WWgammaZ_WV_atgc_semileptonic_ch12_smzzasbkg->getVal();

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
