void dealWith_unEqualBinning_noFirstTwoBins_binBYbin_2(TString file_name){

  TFile * file_in=new TFile(file_name,"read");
  file_in->cd();
  file_in.ls();
  TString file_out=file_name.Remove(file_name.Length() - 5, 5);

  //  TList * input_p=file_in->GetList();
  TList * list_histos=file_in->GetListOfKeys();
  //  TFile *outFile=new TFile(file_out,"recreate");
  //  outFile->cd();

    TString histo_name_1= list_histos->At(1)->GetName();

    TH1D * plot_1=file_in->Get(histo_name_1);
    int N_bins=plot_1->GetNbinsX();


    for (int j=1;j<=N_bins-2;j++){
      char b[2];
      sprintf(b,"%f",j);
      b[1]=0;
      TString file_out_binBYbin=file_out;
      file_out_binBYbin+="_ch";
      file_out_binBYbin+=string(b);
      file_out_binBYbin+="_uniformBins_binBYbin.root";
  cout <<" ----> output: "<< file_out_binBYbin<<"\n" << endl;
    TFile *outFile=new TFile(file_out_binBYbin,"recreate");
    outFile->cd();

  for (int i=0;i<list_histos->GetEntries();i++){

    TString histo_name= list_histos->At(i)->GetName();

    TH1D * plot=file_in->Get(histo_name);
    //    cout << " plot \""<<histo_name<<"\""<< endl;
    int N_bins=plot->GetNbinsX();
    //    for (int j=1;j<=N_bins-2;j++){
      TString histo_name_binBYbin=histo_name;
      histo_name_binBYbin+="_";
      histo_name_binBYbin+=string(b);
      //      histo_name_binBYbin=histo_name_binBYbin+char(j);
      cout <<"\treading histo \""<< histo_name_binBYbin<< "\" and rebinning.." << endl;
      TH1D * plot_rebin=new TH1D("plot_rebin","plot_rebin",1,0,1);
      double yield=plot->GetBinContent(j+2);
      if (yield==0.) yield=0.00001;
      plot_rebin->SetBinContent(1,yield);
      cout <<"\t\tbin yield starting: "<< plot->Integral()<<" after rebinning: "<<plot_rebin->Integral()  << endl;

      plot_rebin->Write(histo_name);
      delete plot_rebin;
    }

  }

  outFile->Close();
  file_in->Close();

  /*
  list_histos->GetEntries();
  list_histos->At(4)->GetName();
  TH1D * plot=file_in->Get("data_obs");
  */

}
