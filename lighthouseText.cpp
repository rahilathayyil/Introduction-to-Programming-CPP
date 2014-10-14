// Lab 5h
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Modify 'lighthouse.cpp' to read from an external" << endl;
  cout << "file and print to the console screen." << endl << endl;

  ifstream fin;

  fin.open("lighthouse.txt");
  if (!fin.good()) throw "I/O error";
  
  //establish doubles h & d
  double h;
  double d;

  // Check 'lighthouse.txt' file for height in feet
  fin >> h; 
  fin.ignore(1000, 10);

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