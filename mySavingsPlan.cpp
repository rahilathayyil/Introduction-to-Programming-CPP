// Lab 4b
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iomanip>
#include <iostream> 
using namespace std;
#include <cmath>

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Come up with a personal savings plan, modifying the code from" << endl;
  cout << "'mort2.cpp' with your own 'years', 'D', and 'p' values." << endl << endl;

  //D (deposit amount / month) = 417 (to max a ROTH IRA, at least...)
  //p (interest rate) = 2.54%
  //years = 35

  //input values
  double years = 35;
  double D = 417;
  double p = .00254 / 12;
  double T = years*12;

  //out value
  double S = D*((pow(1+p,T)-1)/p);

  //echo input values (no number formatting yet)
  cout << "In " << years << " years, $" << D << " deposited per month will grow to $";

  // apply formatting for output
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);

  //echo output (formatted)
  cout << S << "." << endl;

return 0;
}