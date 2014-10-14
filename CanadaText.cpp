// Lab 5g
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
  cout << "Description: Write a program from scratch that reads input from " << endl;
  cout << "'Celsius.txt' and prints a Farenheit ";
  cout << "conversion to 'Farenheit.txt'." << endl << endl;

  //establish "fin" and "fout"
  ifstream fin;
  ofstream fout;

  //open file & error handling
  fin.open("Celsius.txt");
  if (!fin.good()) throw "I/O error";

  //establish doubles c & f
  double c;
  double f;

  // Read C temp from file
  fin >> c; 
  fin.ignore(1000, 10);


  // Use f = (9/5)c + 32 to get the value of double "f"
  f = ((9.00/5.00)*c)+32.00;

  //Display output: unformatted "c" degrees  to Text file
  fout.open("Farenheit.txt");
  if (!fout.good()) throw "I/O error"; 

   // identifying output statements
  fout << "Programmer: Aaron Melocik" << endl;
  fout << "Description: Write a program from scratch that reads input from " << endl;
  fout << "'Celsius.txt' and prints a Farenheit ";
  fout << "conversion to 'Farenheit.txt'." << endl << endl;

  fout << c << " Celsius is ";
  cout << c << " Celsius is ";

  //  Format the output of "f" to round to one decimal *** "cout" or "fout?!"
  fout.setf(ios::fixed|ios::showpoint);
  fout << setprecision(1); 
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(1); 

  //Display output: formatted "f"
  fout << f << " Farenheit." << endl;
  cout << f << " Farenheit." << endl;
  
  //close file references
  fin.close();
  fout.close();


  cin.get();
  return 0;
}