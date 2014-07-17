void checkWS(TString file_name){

  cout <<"start" << endl;
  TFile * file=new TFile(file_name,"read");
  gROOT->ProcessLine(".L /afs/cern.ch/work/s/senka/public/plotsForVgammaPaper/ptg/CMSstyle_YuriStyle.C");
  gROOT->ProcessLine("CMSstyle()");

  cout <<"open" << endl;
  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();

  double lZval=0.01;

  cout <<"read" << endl;
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
  double yield_bkg_1,yield_bkg_2,yield_bkg_3,yield_bkg_4,yield_bkg_5,yield_bkg_6 ;

  file->cd();
  gSystem->Load("libHiggsAnalysisCombinedLimit");
  w->cd();

  yield_bkg_1=n_exp_final_binch1_proc_WV_semileptonic_bkg1_ch7->getVal()+n_exp_final_binch1_proc_WV_semileptonic_bkg2_ch7->getVal()+n_exp_final_binch1_proc_WV_semileptonic_bkg3_ch7->getVal();
  yield_bkg_2=n_exp_final_binch2_proc_WV_semileptonic_bkg1_ch8->getVal()+n_exp_final_binch2_proc_WV_semileptonic_bkg2_ch8->getVal()+n_exp_final_binch2_proc_WV_semileptonic_bkg3_ch8->getVal();
  yield_bkg_3=n_exp_final_binch3_proc_WV_semileptonic_bkg1_ch9->getVal()+n_exp_final_binch3_proc_WV_semileptonic_bkg2_ch9->getVal()+n_exp_final_binch3_proc_WV_semileptonic_bkg3_ch9->getVal();
  yield_bkg_4=n_exp_final_binch4_proc_WV_semileptonic_bkg1_ch10->getVal()+n_exp_final_binch4_proc_WV_semileptonic_bkg2_ch10->getVal()+n_exp_final_binch4_proc_WV_semileptonic_bkg3_ch10->getVal();
  yield_bkg_5=n_exp_final_binch5_proc_WV_semileptonic_bkg1_ch11->getVal()+n_exp_binch5_proc_WV_semileptonic_bkg2_ch11->getVal()+n_exp_final_binch5_proc_WV_semileptonic_bkg3_ch11->getVal();
  yield_bkg_6=n_exp_binch6_proc_WV_semileptonic_bkg1_ch12->getVal()+n_exp_binch6_proc_WV_semileptonic_bkg2_ch12->getVal()+n_exp_final_binch6_proc_WV_semileptonic_bkg3_ch12->getVal();

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

  TH1F * histo_bkg=new TH1F("histo_bkg","histo_bkg",6,0.,6.);
  histo_bkg->SetBinContent(1,yield_bkg_1);
  histo_bkg->SetBinContent(2,yield_bkg_2);
  histo_bkg->SetBinContent(3,yield_bkg_3);
  histo_bkg->SetBinContent(4,yield_bkg_4);
  histo_bkg->SetBinContent(5,yield_bkg_5);
  histo_bkg->SetBinContent(6,yield_bkg_6);

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

   //   gr->Draw("pe");
   gr->Draw("pe");



  TCanvas *c2_bkg = new TCanvas("c2_bkg");
  c2_bkg->cd();
  histo_bkg->Draw();
  
  TH1F * histo_bkg_SM=new TH1F();
  histo_bkg_SM=(TH1F)(histo->Clone("name"));
  histo_bkg_SM->Add(histo_bkg);


   double yield_1_added,yield_2_added,yield_3_added,yield_4_added,yield_5_added,yield_6_added;
   double yield_1_added_sherpaUp,yield_2_added_sherpaUp,yield_3_added_sherpaUp,yield_4_added_sherpaUp,yield_5_added_sherpaUp,yield_6_added_sherpaUp;
   double yield_1_added_sherpaDown,yield_2_added_sherpaDown,yield_3_added_sherpaDown,yield_4_added_sherpaDown,yield_5_added_sherpaDown,yield_6_added_sherpaDown;

   yield_1_added=histo_bkg_SM->GetBinContent(1);
   yield_2_added=histo_bkg_SM->GetBinContent(2);
   yield_3_added=histo_bkg_SM->GetBinContent(3);
   yield_4_added=histo_bkg_SM->GetBinContent(4);
   yield_5_added=histo_bkg_SM->GetBinContent(5);
   yield_6_added=histo_bkg_SM->GetBinContent(6);

   yield_1_added_sherpaUp=yield_1_sherpaUp+histo_bkg->GetBinContent(1);
   yield_2_added_sherpaUp=yield_2_sherpaUp+histo_bkg->GetBinContent(2);
   yield_3_added_sherpaUp=yield_3_sherpaUp+histo_bkg->GetBinContent(3);
   yield_4_added_sherpaUp=yield_4_sherpaUp+histo_bkg->GetBinContent(4);
   yield_5_added_sherpaUp=yield_5_sherpaUp+histo_bkg->GetBinContent(5);
   yield_6_added_sherpaUp=yield_6_sherpaUp+histo_bkg->GetBinContent(6);

   yield_1_added_sherpaDown=yield_1_sherpaDown+histo_bkg->GetBinContent(1);
   yield_2_added_sherpaDown=yield_2_sherpaDown+histo_bkg->GetBinContent(2);
   yield_3_added_sherpaDown=yield_3_sherpaDown+histo_bkg->GetBinContent(3);
   yield_4_added_sherpaDown=yield_4_sherpaDown+histo_bkg->GetBinContent(4);
   yield_5_added_sherpaDown=yield_5_sherpaDown+histo_bkg->GetBinContent(5);
   yield_6_added_sherpaDown=yield_6_sherpaDown+histo_bkg->GetBinContent(6);
   
  Float_t x_added[n]={0.5,1.5,2.5,3.5,4.5,5.5};
  Float_t y_added[n]  = {yield_1_added,yield_2_added,yield_3_added,yield_4_added,yield_5_added,yield_6_added};
  Float_t exl_added[n] = {0.,0.,0.,0.,0.,0.};
    Float_t eyl_added[n] = {yield_1_added-yield_1_added_sherpaDown,yield_2_added-yield_2_added_sherpaDown,yield_3_added-yield_3_added_sherpaDown,yield_4_added-yield_4_added_sherpaDown,yield_5_added-yield_5_added_sherpaDown,yield_6_added-yield_6_added_sherpaDown};
  //  Float_t eyl[n] = {yield_1_sherpaDown,yield_2_sherpaDown,yield_3_sherpaDown,yield_4_sherpaDown,yield_5_sherpaDown,yield_6_sherpaDown};
  Float_t exh_added[n] = {0.,0.,0.,0.,0.,0.};
    Float_t eyh_added[n] = {-yield_1_added+yield_1_added_sherpaUp,-yield_2_added+yield_2_added_sherpaUp,-yield_3_added+yield_3_added_sherpaUp,-yield_4_added+yield_4_added_sherpaUp,-yield_5_added+yield_5_added_sherpaUp,-yield_6_added+yield_6_added_sherpaUp};
    //Float_t eyh[n] = {yield_1_sherpaUp,yield_2_sherpaUp,yield_3_sherpaUp,yield_4_sherpaUp,yield_5_sherpaUp,yield_6_sherpaUp};
 
   //h->GetXaxis()->LabelsOption("v");
   gr_added = new TGraphAsymmErrors(n,x_added,y_added,exl_added,exh_added,eyl_added,eyh_added);
   gr_added->SetMarkerStyle(21);


  TFile * file_data=new TFile("/afs/cern.ch/user/l/lpernie/public/4Senka/EWKSys_2013-08-01_ptDependentErrors_7TeVAll/limits/f5z/cardsShape/0.01/hzz2l2v_f5z_P0p01_7TeV.root","read");
  file_data->cd();
  ll->cd();

  double data_ch7=data_obs->GetBinContent(3);
  double data_ch8=data_obs->GetBinContent(4);
  double data_ch9=data_obs->GetBinContent(5);
  double data_ch10=data_obs->GetBinContent(6);
  double data_ch11=data_obs->GetBinContent(7);
  double data_ch12=data_obs->GetBinContent(8);

  TH1F * data_histo=new TH1F("data_histo","data_histo",6,0,6);
  data_histo->SetBinContent(1,data_ch7);
  data_histo->SetBinContent(2,data_ch8);
  data_histo->SetBinContent(3,data_ch9);
  data_histo->SetBinContent(4,data_ch10);
  data_histo->SetBinContent(5,data_ch11);
  data_histo->SetBinContent(6,data_ch12);


  TCanvas *c3_SMandbkg = new TCanvas("c3_SMandbkg");
  c3_SMandbkg->cd();
  histo_bkg_SM->SetLineColor(4);
  //  histo_bkg_SM->SetFillColor(4);
  histo_bkg_SM->Draw("");
  data_histo->Draw("pesame");
  histo_bkg->SetLineColor(3);
  histo_bkg->SetFillColor(3);
  histo_bkg->Draw("same");
  gr_added->SetLineColor(4);
  gr_added->SetMarkerColor(4);
  gr_added->SetMarkerSize(0.4);
  gr_added->Draw("pe6");
  data_histo->Draw("pesame");
  gPad->RedrawAxis(); // in the end of your macro
   gPad->SetLogy();

    TLegend *leg = new TLegend(0.75, 0.7, 0.99, 0.9);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   leg->SetShadowColor(0);
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.03);
   leg->AddEntry(data_histo, "data","pl");
   leg->AddEntry(gr_added, "ZZ->2l2#nu SM","pl");
   leg->AddEntry(histo_bkg, "bkg","f");
   leg->Draw();

   drawCaption(0.2,0.9, "Sherpa VS MG signal uncertainty");

  cout <<"ratio obs/pred: "
       << data_histo->GetBinContent(1)/histo_bkg_SM->GetBinContent(1)<<"\t"
       << data_histo->GetBinContent(2)/histo_bkg_SM->GetBinContent(2)<<"\t"
       << data_histo->GetBinContent(3)/histo_bkg_SM->GetBinContent(3)<<"\t"
       << data_histo->GetBinContent(4)/histo_bkg_SM->GetBinContent(4)<<"\t"
       << data_histo->GetBinContent(5)/histo_bkg_SM->GetBinContent(5)<<"\t"
       << data_histo->GetBinContent(6)/histo_bkg_SM->GetBinContent(6)<<"\t" << endl;

}

void drawCaption(Float_t xpos , Float_t ypos, TString caption)
{

  TText *latex3e = new TLatex(xpos,ypos,caption);
  latex3e->SetNDC();
  latex3e->SetTextSize(0.03);
  latex3e->Draw();

}
