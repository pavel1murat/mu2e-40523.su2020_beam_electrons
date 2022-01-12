///////////////////////////////////////////////////////////////////////////////
// muon beam at VD9 : bmum0s37b0
//
// only to be included by plot.C
//
// Figure 3100 : beam particle momentum at VD9 for different particle species
//
///////////////////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------------------
void plot_stopped_particles(int Figure, int Print = 0) {
//-----------------------------------------------------------------------------
// Figure 3100 : beam particle momentum at VD9
//-----------------------------------------------------------------------------
  if (Figure == 3100) {
    plot_data_t          p(3);
    
    const char* dsid   = "su2020.bmum0s31b0";
    
    p.hd[0]                = hist_data_t(catalog,"su2020",dsid,"spmc_ana.0000","murat_SpmcAna","vdet_309/mom");
    p.hd[0].fNewName       = "mu-";
    p.hd[0].fRebin         =  1;
    p.hd[0].fLabel         = "mu-"; // "mom";
    p.hd[0].fLabelFontSize = 0.04;
    p.hd[0].fMarkerColor   = kRed+1;
    p.hd[0].fLineColor     = kRed+1;
    p.hd[0].fFillStyle     = 0; // 3005;
    p.hd[0].fFillColor     = kRed+1;
    p.hd[0].fDrawOpt       = "hist";
    p.hd[0].fMarkerStyle   = 20;
    p.hd[0].fMarkerSize    = 0.3;

    p.hd[1]                = hist_data_t(catalog,"su2020",dsid,"spmc_ana.0000","murat_SpmcAna","vdet_409/mom");
    p.hd[1].fNewName       = "mu+";
    p.hd[1].fRebin         =  1;
    p.hd[1].fLabel         = "mu+"; // "mom";
    p.hd[1].fLabelFontSize = 0.04;
    p.hd[1].fMarkerColor   = kBlue+2;
    p.hd[1].fLineColor     = kBlue+2;
    p.hd[1].fFillStyle     = 0;
    p.hd[1].fFillColor     = kBlue+1;
    p.hd[1].fDrawOpt       = "hist";
    p.hd[1].fMarkerStyle   = 20;
    p.hd[1].fMarkerSize    = 0.3;

    p.hd[2]                = hist_data_t(catalog,"su2020",dsid,"spmc_ana.0000","murat_SpmcAna","vdet_1009/mom");
    p.hd[2].fNewName       = "pi-";
    p.hd[2].fRebin         =  1;
    p.hd[2].fLabel         = "pi-"; // "mom";
    p.hd[2].fLabelFontSize = 0.04;
    p.hd[2].fMarkerColor   = kBlue+2;
    p.hd[2].fLineColor     = kBlue+2;
    p.hd[2].fFillStyle     = 3003;
    p.hd[2].fFillColor     = kBlue+1;
    p.hd[2].fDrawOpt       = "hist";
    p.hd[2].fMarkerStyle   = 20;
    p.hd[2].fMarkerSize    = 0.3;

    p.fYLogScale     =  1;
    p.fXMin          =  0.;
    p.fXMax          = 200.;
    p.fXAxisTitle    = "P, MeV/c";
    p.fYTitFormat    = "";
    p.fLabel         = "stopped beam particles in front of the ST (at VD9)";
    p.fLabelXMin     = 0.15;
    p.fLegendXMin    = 0.20; p.fLegendXMax = 0.35; p.fLegendYMin = 0.6; p.fLegendYMax = 0.75;
    p.fCanvasName    = Form("Figure_%04i",Figure);
    p.fName          = Form("figure_%05i_bmum0s31b0_vdet_xx09_mom",Figure);

    plot_hist_1d(&p,-1);
    // add whatever else you want
    if (Print > 0) p.print();
  }
//-----------------------------------------------------------------------------
// Figure 3101 : stopped and total particle momentum at VD7
//-----------------------------------------------------------------------------
  if (Figure == 3101) {
    plot_data_t          p(3);
    
    const char* dsid    = "su2020.bmum0s31b0";   // stopped in the ST
    const char* dsid2   = "su2020.bmum0s32b0";   // stopped outside the ST
    
    p.hd[0]                = hist_data_t(catalog,"su2020",dsid2,"spmc_ana.0000","murat_SpmcAna","vdet_307/mom");
    p.hd[0].fNewName       = "oot_vd7";
    p.hd[0].fRebin         =  1;
    p.hd[0].fLabel         = "OOT mu- at VD7"; // "mom";
    p.hd[0].fLabelFontSize = 0.04;
    p.hd[0].fMarkerColor   = kBlue+2;
    p.hd[0].fLineColor     = kBlue+2;
    p.hd[0].fFillStyle     = 0;
    p.hd[0].fFillColor     = kBlue+1;
    p.hd[0].fDrawOpt       = "hist";
    p.hd[0].fMarkerStyle   = 20;
    p.hd[0].fMarkerSize    = 0.3;

    p.hd[1]                = hist_data_t(catalog,"su2020",dsid2,"spmc_ana.0000","murat_SpmcAna","vdet_309/mom");
    p.hd[1].fNewName       = "oot_vd9";
    p.hd[1].fRebin         =  1;
    p.hd[1].fLabel         = "OOT mu- at VD9"; // "mom";
    p.hd[1].fLabelFontSize = 0.04;
    p.hd[1].fMarkerColor   = kBlue+2;
    p.hd[1].fLineColor     = kBlue+2;
    p.hd[1].fFillStyle     = 3004;
    p.hd[1].fFillColor     = kBlue+1;
    p.hd[1].fDrawOpt       = "hist";
    p.hd[1].fMarkerStyle   = 20;
    p.hd[1].fMarkerSize    = 0.3;

    p.hd[2]                = hist_data_t(catalog,"su2020",dsid,"spmc_ana.0000","murat_SpmcAna","vdet_309/mom");
    p.hd[2].fNewName       = "tgt_vd9";
    p.hd[2].fRebin         =  1;
    p.hd[2].fLabel         = "TGT mu- at VD9"; // "mom";
    p.hd[2].fLabelFontSize = 0.04;
    p.hd[2].fMarkerColor   = kRed+1;
    p.hd[2].fLineColor     = kRed+1;
    p.hd[2].fFillStyle     = 3005; // 3005;
    p.hd[2].fFillColor     = kRed+1;
    p.hd[2].fDrawOpt       = "hist";
    p.hd[2].fMarkerStyle   = 20;
    p.hd[2].fMarkerSize    = 0.3;


    p.fYLogScale           =  0;
    p.fXMin                =  0.;
    p.fXMax                = 200.;
    p.fXAxisTitle          = "P, MeV/c";
    p.fYTitFormat          = "";
    p.fLabel               = "beam mu- in front of the ST (at VD9)";
    p.fLabelXMin           = 0.15;
    p.fLegendXMin          = 0.50; p.fLegendXMax = 0.70; p.fLegendYMin = 0.6; p.fLegendYMax = 0.75;
    p.fCanvasName          = Form("Figure_%04i",Figure);
    p.fName                = Form("figure_%05i_bmum0s31b0_vdet_x309_mom",Figure);

    plot_hist_1d(&p,-1);
    // add whatever else you want
    if (Print > 0) p.print();
  }
}
