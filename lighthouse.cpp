// Lab 5c
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
  cout << "Description: Write a program from scratch that calculates" << endl;
  cout << "how far away a lighthouse can be seen from sea." << endl << endl;

  //establish doubles h & d
  double h;
  double d;

  // Prompt the user for the height in feet 
  cout << "Input height of the lighthouse in ft.: "; 
  cin >> h; 
  cin.ignore(1000, 10);

  // Use d = sqrt(h*0.8) to get the value of double "d"
  d = sqrt(h*0.8);

  //Display output: unformatted "h" height = 
  cout << endl << "A lighthouse " << h << " feet tall can be seen from ";

  //  Format the output of "d" to round to zero decimals
  cout.setf(ios::fixed);
  cout << setprecision(0);

  //Display output: formatted "d"
  cout << d << " miles away." << endl;

  return 0;
}