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

## Complete a simple ROOT macro
Consider the file *myMacro.C*. It is a simple ROOT macro. In this exercise, you
will fill in the code you interactively typed into the interpreter to verify the
value of the *TMath::Gaus* function.
Run the macro with ROOT in three ways:
- Directly invoking ROOT as interpreter for it
- Executing it from within the prompt
- Loading it from the prompt and then invoking the *myMacro* function

The final step consists in compiling the macro as executable with the compiler.
Add to the compiler invocation the following arguments: *`` `root-config --cflags --libs` ``*:
this is needed to expose to the compiler the details about ROOT which are needed
to link its libraries to the executable.
### Follow up question
Can you comment about the headers which need to be included in case ROOT is used
or the compiler is invoke


## First Fitting 
The macro **firstFit.C** is only half-way complete. In the code a fit of a histogram is performed
and the parameters of the fitted model are inspected.
Try to complete the code putting to a good use what you learned during the lectures.
The solution is available in the [firstFit_Solution.C](firstFit_Solution.C) macro.

## Writing and Reading histograms


## TBrowser
Open the file with *root*
```root myFile.root```
And open a **TBrowser**
```root[0] TBrowser b```
Now display the histograms and fit them with the **FitPanel**: can you recover the distributions according to which you created the histograms?
