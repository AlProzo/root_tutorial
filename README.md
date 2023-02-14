# The exercises for the ROOT intro

## [rootlogon](rootlogon.C)
The rootlogon allows to use a scpecific default style, it is always executed at the start of ROOT session. Just copy it into your home folder. 
```bash
   cp rootlogon.C ~/.rootlogon.C
```

For example, one can set a canvas default size by 
```c++
   myStyle->SetCanvasDefH(600);
   myStyle->SetCanvasDefW(800);
```

## Start a ROOT session
Carry out these simple tasks:
 - Fire up ROOT
 - Verify it works as a calculator
 - List the files in /etc from within the ROOT prompt
 - Inspect the help
 - Quit

## Geometric series
Can you create a macro to execute the geometric series exercise we saw together during the lectures?
The solution can be found in the [geometricSeries.C](geometricSeries.C) macro.

## Graphics Exercise
In this exercise, you will follow the steps of the "Good Plot" example that is described in the course slides. In particular, these are the steps to follow:
- Create the initial data set by placing the code below in a macro called *macro1*:
```c++
// The number of points in the data set
const int n_points = 10;
// The values along X and Y axis
double x_vals[n_points] = {1,2,3,4,5,6,7,8,9,10};
double y_vals[n_points] = {6,12,14,20,22,24,35,45,44,53};
// The errors on the Y axis
double y_errs[n_points] = {5,5,4.7,4.5,4.2,5.1,2.9,4.1,4.8,5.43};
```
- Create a `TGraphErrors` instance using the aforementioned data.
- Draw the graph data in an error bars plot. Play with the following draw options: *"APE"*, *"APEL"*, *"APEC"*.
- Customize the visual aspect of the plot (marker style, marker color, line color).
- Add a function to compare the data with a line. Use the formula *"[0]+x\*[1]"* and fit the graph
- Set the titles for the graph (*"Measurement XYZ;length [cm];Arb.Units"*) and for the axis ("*length [cm]"* and *"Arb.Units"* for x and y). Try to add special latex characters.
- Add a legend to the plot, with one entry for the graph and one for the function.
- Add an arrow (`TArrow`) and some text (`TLatex`) to the canvas.

You can find the solution [macro1.C](macro1.C).




## TBrowser
Open the file with *root*
```root myFile.root```
And open a **TBrowser**
```root[0] TBrowser b```
Now display the histograms and fit them with the **FitPanel**: can you recover the distributions according to which you created the histograms?
