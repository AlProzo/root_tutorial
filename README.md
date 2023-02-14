# The exercises for the ROOT intro

## Start a ROOT session
Carry out these simple tasks:
 - Fire up ROOT
 - Verify it works as a calculator
 - List the files in /etc from within the ROOT prompt
 - Inspect the help
 - Quit

## Geometric series
Can you create a macro to execute the geometric series exercise we saw together during the lectures?
The solution can be found in the *geometricSeries.C* macro.

## First Fitting 
The macro **firstFit.C** is only half-way complete. In the code a fit of a histogram is performed
and the parameters of the fitted model are inspected.
Try to complete the code putting to a good use what you learned during the lectures.
The solution is available in the [firstFit_Solution.C](firstFit_Solution.C) macro.


## TBrowser
Open the file with *root*
```root myFile.root```
And open a **TBrowser**
```root[0] TBrowser b```
Now display the histograms and fit them with the **FitPanel**: can you recover the distributions according to which you created the histograms?
