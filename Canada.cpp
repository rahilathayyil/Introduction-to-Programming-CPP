// Lab 5b
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad, JNotePad 2
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Write a program from scratch that takes user input" << endl;
  cout << "of Celsius and converts it to Farenheit temperatures." << endl << endl;

  //establish doubles c & f
  double c;
  double f;
  //char d = '\u00F8'; // ALTERNATE unicode technique

  // Unicode degree symbol = \u00F8
  // Prompt the user for the temperature in Celsius 
  cout << "Input temperature in C" << '\u00F8' << ": "; 
  cin >> c; 
  cin.ignore(1000, 10);


  // Use f = (9/5)c + 32 to get the value of double "f"
  f = ((9.00/5.00)*c)+32.00;

  //Display output: unformatted "c" degrees = 
  cout << c << '\u00F8' << " Celsius is ";

  //  Format the output of "f" to round to one decimal
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(1); 

  //Display output: formatted "f"
  cout << f << '\u00F8' << " Farenheit." << endl;

  return 0;
}