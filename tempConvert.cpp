// Lab 7c
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
  cout << endl << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Convert an unspecified number of temperatures" << endl;
  cout << "from C to F, from a text file \"temps.txt\"." << endl << endl;

  double f = 0; // degrees F 
  double c = 0; // degrees C 

  ifstream fin;
  fin.open("temps.txt");
  if (!fin.good()) throw "I/O error";

while (true)
  { 
    fin >> c; 
    fin.ignore(1000, 10); 

    if (c == -999) break;

    cout << "A temperature of " << c << "C is "; 

    f = 9.0 / 5 * c + 32; 

    cout.setf(ios::fixed|ios::showpoint); 
    cout << fixed << setprecision(1); 

    cout << f << " F." << endl; 

    cout.unsetf(ios::fixed|ios::showpoint); 
    cout << setprecision(6);

  } // while 

  cout << "    Sentinal value of \"-999\" encountered. Ending program." << endl;  
  return 0; 
} // main