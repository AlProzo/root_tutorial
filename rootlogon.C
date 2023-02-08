
// This is the file rootlogon.C
{
   TStyle *myStyle  = new TStyle("MyStyle","My Root Styles");

   // from ROOT plain style
   myStyle->SetCanvasBorderMode(0);
   myStyle->SetPadBorderMode(0);
   myStyle->SetPadColor(0);
   myStyle->SetCanvasColor(0);
   myStyle->SetTitleColor(1);
   myStyle->SetStatColor(0);

   // default canvas positioning

   myStyle->SetCanvasDefH(600);
   myStyle->SetCanvasDefW(800);


    myStyle->SetPadTickX(1);
    myStyle->SetPadTickY(1);
    myStyle->SetFrameBorderMode(0);

	 myStyle->SetMarkerStyle(20);

   myStyle->SetOptStat(0);// Show overflow and underflow as well


   // apply the new style
   gROOT->SetStyle("MyStyle"); //uncomment to set this style
 // gROOT->ForceStyle(); // use this style, not the one saved in root files

   printf("\n ==== At your command, sir/madam  ==== \n");

}
