//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Sep 24 16:03:04 2014 by ROOT version 5.34/21
// from TTree SmallTree_WZ/SmallTree_WZ
// found on file: proof_WZ.root
//////////////////////////////////////////////////////////

#ifndef TreeReader_h
#define TreeReader_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH2F.h>
#include <TH2.h>
#include <TH1F.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TFile.h>
#include <TString.h>

#include "TLorentzVector.h"

#include <iostream>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class TreeReader {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   TFile *f_CSVwgt_HF;
   TFile *f_CSVwgt_LF;

   TH1D *h_csv_wgt_hf[100][100];
   TH1D *c_csv_wgt_hf[100][100];
   TH1D *h_csv_wgt_lf[100][100][100];

   bool isData;
   bool isQCD;

   // Declaration of leaf types
   Int_t           smalltree_nlepton;
   Float_t         smalltree_lept_pt[3];   //[smalltree_nlepton]
   Float_t         smalltree_lept_eta[3];   //[smalltree_nlepton]
   Float_t         smalltree_lept_phi[3];   //[smalltree_nlepton]
   Float_t         smalltree_lept_iso[3];   //[smalltree_nlepton]
   Int_t           smalltree_lept_flav[3];   //[smalltree_nlepton]
   Int_t           smalltree_njets;
   Float_t         smalltree_jet_pt[100];   //[smalltree_njets]
   Float_t         smalltree_jet_eta[100];   //[smalltree_njets]
   Float_t         smalltree_jet_phi[100];   //[smalltree_njets]
   Float_t         smalltree_jet_btagdiscri[100];   //[smalltree_njets]
   Float_t         smalltree_jet_btagdiscri_up[100];   //[smalltree_njets]
   Float_t         smalltree_jet_btagdiscri_down[100];   //[smalltree_njets]
   Int_t           smalltree_jet_flav[100];   //[smalltree_njets]
   Int_t           smalltree_jesup_njets;
   Float_t         smalltree_jet_jesup_pt[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jesup_eta[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jesup_phi[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jesup_btagdiscri[100];   //[smalltree_njets]
   Int_t           smalltree_jet_jesup_flav[100];   //[smalltree_njets]
   Int_t           smalltree_jesdown_njets;
   Float_t         smalltree_jet_jesdown_pt[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jesdown_eta[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jesdown_phi[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jesdown_btagdiscri[100];   //[smalltree_njets]
   Int_t           smalltree_jet_jesdown_flav[100];   //[smalltree_njets]
   Int_t           smalltree_jerup_njets;
   Float_t         smalltree_jet_jerup_pt[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jerup_eta[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jerup_phi[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jerup_btagdiscri[100];   //[smalltree_njets]
   Int_t           smalltree_jet_jerup_flav[100];   //[smalltree_njets]
   Int_t           smalltree_jerdown_njets;
   Float_t         smalltree_jet_jerdown_pt[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jerdown_eta[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jerdown_phi[100];   //[smalltree_njets]
   Float_t         smalltree_jet_jerdown_btagdiscri[100];   //[smalltree_njets]
   Int_t           smalltree_jet_jerdown_flav[100];   //[smalltree_njets]
   Float_t         smalltree_met_jesup_pt;
   Float_t         smalltree_met_jesup_phi;
   Float_t         smalltree_met_jesdown_pt;
   Float_t         smalltree_met_jesdown_phi;
   Float_t         smalltree_met_jerup_pt;
   Float_t         smalltree_met_jerup_phi;
   Float_t         smalltree_met_jerdown_pt;
   Float_t         smalltree_met_jerdown_phi;
   Float_t         smalltree_met_unclsup_pt;
   Float_t         smalltree_met_unclsup_phi;
   Float_t         smalltree_met_unclsdown_pt;
   Float_t         smalltree_met_unclsdown_phi;
   Float_t         smalltree_met_pt;
   Float_t         smalltree_metnosmear_phi;
   Float_t         smalltree_metnosmear_pt;
   Float_t         smalltree_met_phi;
   Float_t         smalltree_weight_trigup;
   Float_t         smalltree_weight_trigdown;
   Float_t         smalltree_weight_leptup;
   Float_t         smalltree_weight_leptdown;
   Float_t         smalltree_weight_PDFup;
   Float_t         smalltree_weight_PDFdown;
   Float_t         smalltree_weight_PUup;
   Float_t         smalltree_weight_PUdown;
   Float_t         smalltree_evtweight;
   Float_t         smalltree_weight_toppt;
   Int_t           smalltree_IChannel;

   // List of branches
   TBranch        *b_smalltree_nlepton;   //!
   TBranch        *b_smalltree_lept_pt;   //!
   TBranch        *b_smalltree_lept_eta;   //!
   TBranch        *b_smalltree_lept_phi;   //!
   TBranch        *b_smalltree_lept_iso;   //!
   TBranch        *b_smalltree_lept_flav;   //!
   TBranch        *b_smalltree_njets;   //!
   TBranch        *b_smalltree_jet_pt;   //!
   TBranch        *b_smalltree_jet_eta;   //!
   TBranch        *b_smalltree_jet_phi;   //!
   TBranch        *b_smalltree_jet_btagdiscri;   //!
   TBranch        *b_smalltree_jet_btagdiscri_up;   //!
   TBranch        *b_smalltree_jet_btagdiscri_down;   //!
   TBranch        *b_smalltree_jet_flav;   //!
   TBranch        *b_smalltree_jesup_njets;   //!
   TBranch        *b_smalltree_jet_jesup_pt;   //!
   TBranch        *b_smalltree_jet_jesup_eta;   //!
   TBranch        *b_smalltree_jet_jesup_phi;   //!
   TBranch        *b_smalltree_jet_jesup_btagdiscri;   //!
   TBranch        *b_smalltree_jet_jesup_flav;   //!
   TBranch        *b_smalltree_jesdown_njets;   //!
   TBranch        *b_smalltree_jet_jesdown_pt;   //!
   TBranch        *b_smalltree_jet_jesdown_eta;   //!
   TBranch        *b_smalltree_jet_jesdown_phi;   //!
   TBranch        *b_smalltree_jet_jesdown_btagdiscri;   //!
   TBranch        *b_smalltree_jet_jesdown_flav;   //!
   TBranch        *b_smalltree_jerup_njets;   //!
   TBranch        *b_smalltree_jet_jerup_pt;   //!
   TBranch        *b_smalltree_jet_jerup_eta;   //!
   TBranch        *b_smalltree_jet_jerup_phi;   //!
   TBranch        *b_smalltree_jet_jerup_btagdiscri;   //!
   TBranch        *b_smalltree_jet_jerup_flav;   //!
   TBranch        *b_smalltree_jerdown_njets;   //!
   TBranch        *b_smalltree_jet_jerdown_pt;   //!
   TBranch        *b_smalltree_jet_jerdown_eta;   //!
   TBranch        *b_smalltree_jet_jerdown_phi;   //!
   TBranch        *b_smalltree_jet_jerdown_btagdiscri;   //!
   TBranch        *b_smalltree_jet_jerdown_flav;   //!
   TBranch        *b_smalltree_met_jesup_pt;   //!
   TBranch        *b_smalltree_met_jesup_phi;   //!
   TBranch        *b_smalltree_met_jesdown_pt;   //!
   TBranch        *b_smalltree_met_jesdown_phi;   //!
   TBranch        *b_smalltree_met_jerup_pt;   //!
   TBranch        *b_smalltree_met_jerup_phi;   //!
   TBranch        *b_smalltree_met_jerdown_pt;   //!
   TBranch        *b_smalltree_met_jerdown_phi;   //!
   TBranch        *b_smalltree_met_unclsup_pt;   //!
   TBranch        *b_smalltree_met_unclsup_phi;   //!
   TBranch        *b_smalltree_met_unclsdown_pt;   //!
   TBranch        *b_smalltree_met_unclsdown_phi;   //!
   TBranch        *b_smalltree_met_pt;   //!
   TBranch        *b_smalltree_met_phi;   //!
   TBranch        *b_smalltree_metnosmear_pt;   //!
   TBranch        *b_smalltree_metnosmear_phi;   //!
   TBranch        *b_smalltree_weight_trigup;   //!
   TBranch        *b_smalltree_weight_trigdown;   //!
   TBranch        *b_smalltree_weight_leptup;   //!
   TBranch        *b_smalltree_weight_leptdown;   //!
   TBranch        *b_smalltree_weight_PDFup;   //!
   TBranch        *b_smalltree_weight_PDFdown;   //!
   TBranch        *b_smalltree_weight_PUup;   //!
   TBranch        *b_smalltree_weight_PUdown;   //!
   TBranch        *b_smalltree_evtweight;   //!
   TBranch        *b_smalltree_weight_toppt;   //!
   TBranch        *b_smalltree_IChannel;   //!




   TreeReader(short int QCDCorr, std::vector<TString> datalist, std::vector<TString> datalist_longnames, std::vector<TString> mclist, TTree *tree=0, TString sample="", std::vector<TString> thesystlist = std::vector<TString>());
   virtual ~TreeReader();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(short int QCDCorr, TString sample, TTree *tree );
   virtual void     Loop(short int QCDCorr, std::vector<TString> datalist, std::vector<TString> datalist_longnames, std::vector<TString> mclist, TString sample, std::vector<TString> thesystlist);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

   void initializeHisto(TString sample, bool isfirstset);
   void addHisto( TString var, TString selstep, TString sample, int nbins, float min, float max);
   void fillHisto(TString channel, TString var, TString selstep, TString sample, float val, float weight);

   bool applyEventSel(short int QCDCorr, double SF_QCD, std::vector<TString> datalist, std::vector<TString> datalist_longnames, std::vector<TString> mclist, TString channel, TString systtype, TString sample);

   void SetUpCSVreweighting();
   double GetCSVweight(const int iSys, int jet_n,
		       float *jet_pt,float *jet_eta,float *jet_btagdiscri,int *jet_flav);


   //void writeHisto();

   std::vector<TH1F*> histo_list_mujets;
   std::map<std::string, int> histo_map_mujets;


   int numb_histo;

   void deleteHisto();
   std::vector<TString> systlist;
   std::vector<TString> datalist;
   std::vector<TString> datalist_longnames;
   std::vector<TString> mclist;
   //------------------------------------
  //TTree and banches used for BDT
  //------------------------------------
  std::vector<TTree *> theTree_list;
  std::map<TString, TTree *> theTree_map;

  float tree_cosThetaStar;
  float tree_topMass;
  float tree_totMass;
  float tree_deltaPhilb;
  float tree_deltaRlb;
  float tree_deltaRTopZ;
  float tree_asym;
  float tree_Zpt;
  float tree_ZEta;
  float tree_topPt;
  float tree_topEta;

  float tree_deltaRZl;
  float tree_deltaPhiZmet;
  float tree_btagDiscri;
  float tree_NJets;
  float tree_NBJets;
  float tree_totPt;
  float tree_totEta;
  float tree_met;
  float tree_mTW;
  float tree_mTWplusMET;

  float tree_leptWPt, tree_leptWEta;
  float tree_leadJetPt, tree_leadJetEta;
  float tree_deltaRZleptW, tree_deltaPhiZleptW;

  int   tree_SampleType;
  int   tree_Channel;

  float tree_EvtWeight;

  float isoEl, isoMu;


  int nWZsample;


   //-------------------------------------------
   //TTree and banches used for CSV re-weighting
   //--------------------------------------------
//   std::vector<TTree *> theTreeCSV_list;
//   std::map<TString, TTree *> theTreeCSV_map;

//   int treeCSV_jetN;
//   float treeCSV_jetPt[1000];
//   float treeCSV_jetEta[1000];
//   float treeCSV_jetCSV[1000];
//   int treeCSV_jetFlav[1000];

//   int   treeCSV_SampleType;
//   int   treeCSV_Channel;

//   float treeCSV_EvtWeight;
};

#endif

#ifdef TreeReader_cxx
TreeReader::TreeReader(short int QCDCorr, std::vector<TString> datalist, std::vector<TString> datalist_longnames, std::vector<TString> mclist, TTree *tree, TString sample, std::vector<TString> thesystlist) : fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f;
      if(QCDCorr == 0){
          f = (TFile*)gROOT->GetListOfFiles()->FindObject("../InputFiles_IsoSup0p4/proof_IsoSup0p4_merged.root");
      }else if(QCDCorr == 1){
          f = (TFile*)gROOT->GetListOfFiles()->FindObject("../InputFiles/proof_merged_monotop.root");
      }else if((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_A"){
          f = (TFile*)gROOT->GetListOfFiles()->FindObject("../InputFiles_IsoSup0p4/proof_NTuple_53X_SingleMuRun2012A.root");
      }else if((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_B"){
          f = (TFile*)gROOT->GetListOfFiles()->FindObject("../InputFiles_IsoSup0p4/proof_NTuple_53X_SingleMuRun2012B.root");
      }else if((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_C"){
          f = (TFile*)gROOT->GetListOfFiles()->FindObject("../InputFiles_IsoSup0p4/proof_NTuple_53X_SingleMuRun2012C.root");
      }else if((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_D"){
          f = (TFile*)gROOT->GetListOfFiles()->FindObject("../InputFiles_IsoSup0p4/proof_NTuple_53X_SingleMuRun2012D.root");
      }else if (QCDCorr == 2 || QCDCorr == 3){
          f = (TFile*)gROOT->GetListOfFiles()->FindObject("../InputFiles/proof_merged_monotop.root");
      }else cout << "ERROR: Wrong value of QCDCorr! Allowed values: 0,1,2" << endl;

      if (!f || !f->IsOpen()) {
         if(QCDCorr == 0)                                               f = new TFile("../InputFiles_IsoSup0p4/proof_IsoSup0p4_merged.root");
         else if(QCDCorr == 1)                                          f = new TFile("../InputFiles/proof_merged_monotop.root");
         else if((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_A")   f = new TFile("../InputFiles_IsoSup0p4/proof_NTuple_53X_SingleMuRun2012A.root");
         else if((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_B")   f = new TFile("../InputFiles_IsoSup0p4/proof_NTuple_53X_SingleMuRun2012B.root");
         else if((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_C")   f = new TFile("../InputFiles_IsoSup0p4/proof_NTuple_53X_SingleMuRun2012C.root");
         else if((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_D")   f = new TFile("../InputFiles_IsoSup0p4/proof_NTuple_53X_SingleMuRun2012D.root");
         else if( QCDCorr == 2 || QCDCorr == 3)                         f = new TFile("../InputFiles/proof_merged_monotop.root");
         else cout << "ERROR: Wrong value of QCDCorr! Allowed values: 0,1,2" << endl;
      }
   if     ((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_A")   f->GetObject( "SmallTree_NTuple_53X_SingleMuRun2012A" ,tree);
   else if((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_B")   f->GetObject( "SmallTree_NTuple_53X_SingleMuRun2012B" ,tree);
   else if((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_C")   f->GetObject( "SmallTree_NTuple_53X_SingleMuRun2012C" ,tree);
   else if((QCDCorr == 2 || QCDCorr == 3) && sample == "QCD_D")   f->GetObject( "SmallTree_NTuple_53X_SingleMuRun2012D" ,tree);
   else                                                           f->GetObject(("SmallTree_"+sample).Data()             ,tree);

   }


   Init(QCDCorr,sample, tree);
   systlist = thesystlist;


   isoEl = 0.05;
   isoMu = 0.20;


   //isoEl = 0.15; //0.05
   //isoMu = 0.20; //0.12
   nWZsample = 0;

   isData = 1;
   isQCD  = 1;
}

TreeReader::~TreeReader()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t TreeReader::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t TreeReader::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void TreeReader::Init(short int QCDCorr, TString sample,  TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);
/*
   TObjArray *lb = fChain->GetListOfBranches ();
   Int_t nb = lb->GetEntries ();

   for (Int_t i = 0; i < nb; i++)
   {
     if(lb->At(i)->GetName() == "smalltree_nlepton") fChain->SetBranchAddress("smalltree_nlepton", &smalltree_nlepton, &b_smalltree_nlepton);
     else if(lb->At(i)->GetName() == "smalltree_jet_btagdiscri_up") fChain->SetBranchAddress("smalltree_jet_btagdiscri_up", &smalltree_jet_btagdiscri_up, &b_smalltree_jet_btagdiscri_up);
   }
*/

   fChain->SetBranchAddress("smalltree_evtweight",     &smalltree_evtweight,        &b_smalltree_evtweight);
   fChain->SetBranchAddress("smalltree_nlepton",       &smalltree_nlepton,          &b_smalltree_nlepton);
   fChain->SetBranchAddress("smalltree_lept_pt",        smalltree_lept_pt,          &b_smalltree_lept_pt);
   fChain->SetBranchAddress("smalltree_lept_eta",       smalltree_lept_eta,         &b_smalltree_lept_eta);
   fChain->SetBranchAddress("smalltree_lept_phi",       smalltree_lept_phi,         &b_smalltree_lept_phi);
   fChain->SetBranchAddress("smalltree_lept_iso",       smalltree_lept_iso,         &b_smalltree_lept_iso);
   fChain->SetBranchAddress("smalltree_lept_flav",      smalltree_lept_flav,        &b_smalltree_lept_flav);
   fChain->SetBranchAddress("smalltree_njets",         &smalltree_njets,            &b_smalltree_njets);
   fChain->SetBranchAddress("smalltree_jet_pt",         smalltree_jet_pt,           &b_smalltree_jet_pt);
   fChain->SetBranchAddress("smalltree_jet_eta",        smalltree_jet_eta,          &b_smalltree_jet_eta);
   fChain->SetBranchAddress("smalltree_jet_phi",        smalltree_jet_phi,          &b_smalltree_jet_phi);
   fChain->SetBranchAddress("smalltree_jet_flav",       smalltree_jet_flav,         &b_smalltree_jet_flav);
   fChain->SetBranchAddress("smalltree_jet_btagdiscri", smalltree_jet_btagdiscri,   &b_smalltree_jet_btagdiscri);
   fChain->SetBranchAddress("smalltree_met_pt",        &smalltree_met_pt,           &b_smalltree_met_pt);
   fChain->SetBranchAddress("smalltree_met_phi",       &smalltree_met_phi,          &b_smalltree_met_phi);

   if(QCDCorr != 0 && sample != "QCD_A" && sample != "QCD_B" && sample != "QCD_C" && sample != "QCD_D")
   {

        fChain->SetBranchAddress("smalltree_jet_btagdiscri_up",     smalltree_jet_btagdiscri_up,        &b_smalltree_jet_btagdiscri_up);
        fChain->SetBranchAddress("smalltree_jet_btagdiscri_down",   smalltree_jet_btagdiscri_down,      &b_smalltree_jet_btagdiscri_down);
        fChain->SetBranchAddress("smalltree_jesup_njets",          &smalltree_jesup_njets,              &b_smalltree_jesup_njets);
        fChain->SetBranchAddress("smalltree_jet_jesup_pt",          smalltree_jet_jesup_pt,             &b_smalltree_jet_jesup_pt);
        fChain->SetBranchAddress("smalltree_jet_jesup_eta",         smalltree_jet_jesup_eta,            &b_smalltree_jet_jesup_eta);
        fChain->SetBranchAddress("smalltree_jet_jesup_phi",         smalltree_jet_jesup_phi,            &b_smalltree_jet_jesup_phi);
        fChain->SetBranchAddress("smalltree_jet_jesup_btagdiscri",  smalltree_jet_jesup_btagdiscri,     &b_smalltree_jet_jesup_btagdiscri);
        fChain->SetBranchAddress("smalltree_jet_jesup_flav",        smalltree_jet_jesup_flav,           &b_smalltree_jet_jesup_flav);
        fChain->SetBranchAddress("smalltree_jesdown_njets",        &smalltree_jesdown_njets,            &b_smalltree_jesdown_njets);
        fChain->SetBranchAddress("smalltree_jet_jesdown_pt",        smalltree_jet_jesdown_pt,           &b_smalltree_jet_jesdown_pt);
        fChain->SetBranchAddress("smalltree_jet_jesdown_eta",       smalltree_jet_jesdown_eta,          &b_smalltree_jet_jesdown_eta);
        fChain->SetBranchAddress("smalltree_jet_jesdown_phi",       smalltree_jet_jesdown_phi,          &b_smalltree_jet_jesdown_phi);
        fChain->SetBranchAddress("smalltree_jet_jesdown_btagdiscri",smalltree_jet_jesdown_btagdiscri,   &b_smalltree_jet_jesdown_btagdiscri);
        fChain->SetBranchAddress("smalltree_jet_jesdown_flav",      smalltree_jet_jesdown_flav,         &b_smalltree_jet_jesdown_flav);
        fChain->SetBranchAddress("smalltree_jerup_njets",          &smalltree_jerup_njets,              &b_smalltree_jerup_njets);
        fChain->SetBranchAddress("smalltree_jet_jerup_pt",          smalltree_jet_jerup_pt,             &b_smalltree_jet_jerup_pt);
        fChain->SetBranchAddress("smalltree_jet_jerup_eta",         smalltree_jet_jerup_eta,            &b_smalltree_jet_jerup_eta);
        fChain->SetBranchAddress("smalltree_jet_jerup_phi",         smalltree_jet_jerup_phi,            &b_smalltree_jet_jerup_phi);
        fChain->SetBranchAddress("smalltree_jet_jerup_btagdiscri",  smalltree_jet_jerup_btagdiscri,     &b_smalltree_jet_jerup_btagdiscri);
        fChain->SetBranchAddress("smalltree_jet_jerup_flav",        smalltree_jet_jerup_flav,           &b_smalltree_jet_jerup_flav);
        fChain->SetBranchAddress("smalltree_jerdown_njets",        &smalltree_jerdown_njets,            &b_smalltree_jerdown_njets);
        fChain->SetBranchAddress("smalltree_jet_jerdown_pt",        smalltree_jet_jerdown_pt,           &b_smalltree_jet_jerdown_pt);
        fChain->SetBranchAddress("smalltree_jet_jerdown_eta",       smalltree_jet_jerdown_eta,          &b_smalltree_jet_jerdown_eta);
        fChain->SetBranchAddress("smalltree_jet_jerdown_phi",       smalltree_jet_jerdown_phi,          &b_smalltree_jet_jerdown_phi);
        fChain->SetBranchAddress("smalltree_jet_jerdown_btagdiscri",smalltree_jet_jerdown_btagdiscri,   &b_smalltree_jet_jerdown_btagdiscri);
        fChain->SetBranchAddress("smalltree_jet_jerdown_flav",      smalltree_jet_jerdown_flav,         &b_smalltree_jet_jerdown_flav);
        fChain->SetBranchAddress("smalltree_met_jesup_pt",         &smalltree_met_jesup_pt,             &b_smalltree_met_jesup_pt);
        fChain->SetBranchAddress("smalltree_met_jesup_phi",        &smalltree_met_jesup_phi,            &b_smalltree_met_jesup_phi);
        fChain->SetBranchAddress("smalltree_met_jesdown_pt",       &smalltree_met_jesdown_pt,           &b_smalltree_met_jesdown_pt);
        fChain->SetBranchAddress("smalltree_met_jesdown_phi",      &smalltree_met_jesdown_phi,          &b_smalltree_met_jesdown_phi);
        fChain->SetBranchAddress("smalltree_met_jerup_pt",         &smalltree_met_jerup_pt,             &b_smalltree_met_jerup_pt);
        fChain->SetBranchAddress("smalltree_met_jerup_phi",        &smalltree_met_jerup_phi,            &b_smalltree_met_jerup_phi);
        fChain->SetBranchAddress("smalltree_met_jerdown_pt",       &smalltree_met_jerdown_pt,           &b_smalltree_met_jerdown_pt);
        fChain->SetBranchAddress("smalltree_met_jerdown_phi",      &smalltree_met_jerdown_phi,          &b_smalltree_met_jerdown_phi);
        fChain->SetBranchAddress("smalltree_met_unclsup_pt",       &smalltree_met_unclsup_pt,           &b_smalltree_met_unclsup_pt);
        fChain->SetBranchAddress("smalltree_met_unclsup_phi",      &smalltree_met_unclsup_phi,          &b_smalltree_met_unclsup_phi);
        fChain->SetBranchAddress("smalltree_met_unclsdown_pt",     &smalltree_met_unclsdown_pt,         &b_smalltree_met_unclsdown_pt);
        fChain->SetBranchAddress("smalltree_met_unclsdown_phi",    &smalltree_met_unclsdown_phi,        &b_smalltree_met_unclsdown_phi);
      //fChain->SetBranchAddress("smalltree_weight_trigup",        &smalltree_weight_trigup,            &b_smalltree_weight_trigup);
      //fChain->SetBranchAddress("smalltree_weight_trigdown",      &smalltree_weight_trigdown,          &b_smalltree_weight_trigdown);
        fChain->SetBranchAddress("smalltree_weight_leptup",        &smalltree_weight_leptup,            &b_smalltree_weight_leptup);
        fChain->SetBranchAddress("smalltree_weight_leptdown",      &smalltree_weight_leptdown,          &b_smalltree_weight_leptdown);
      //fChain->SetBranchAddress("smalltree_weight_PDFup",        &smalltree_weight_PDFup,             &b_smalltree_weight_PDFup);
      //fChain->SetBranchAddress("smalltree_weight_PDFdown",      &smalltree_weight_PDFdown,           &b_smalltree_weight_PDFdown);
        fChain->SetBranchAddress("smalltree_weight_PUup",         &smalltree_weight_PUup,              &b_smalltree_weight_PUup);
        fChain->SetBranchAddress("smalltree_weight_PUdown",       &smalltree_weight_PUdown,            &b_smalltree_weight_PUdown);
        fChain->SetBranchAddress("smalltree_weight_toppt",         &smalltree_weight_toppt,             &b_smalltree_weight_toppt);
        fChain->SetBranchAddress("smalltree_metnosmear_pt",        &smalltree_metnosmear_pt,            &b_smalltree_metnosmear_pt);
        fChain->SetBranchAddress("smalltree_metnosmear_phi",       &smalltree_metnosmear_phi,           &b_smalltree_metnosmear_phi);
    //   fChain->SetBranchAddress("smalltree_IChannel",            &smalltree_IChannel,                 &b_smalltree_IChannel);
   }
   Notify();
   nWZsample = 0;
}

Bool_t TreeReader::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void TreeReader::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t TreeReader::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef TreeReader_cxx
