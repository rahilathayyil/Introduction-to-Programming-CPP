// Lab 8e
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <fstream>
#include <iomanip>
#include <iostream> 
#include <string>
using namespace std;
#include <cmath>

void passwordEntry()
{

string sid = "1353874";
string passwordInput = "0";

  while(true)
    {
    cout<< "Enter password to unlock program: ";
    cin >> passwordInput;
    cin.ignore(1000, 10); 

    if (passwordInput == sid) break;
    cout << endl << "Incorrect password. Try again." << endl;
    }
  cout<< "Password accepted." << endl << endl << endl;
}


int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: calculate the monthly payment on" << endl;
  cout << "a user-input 30-year mortgage, to the penny." << endl;
  cout << "Display the output to the console, and append " << endl;
  cout << "to a text file, 'mortgages.txt'." << endl << endl << endl;

passwordEntry();

  //declare fout, open file, and declare error handling
  ofstream fout;
  fout.open("mortgages.txt", ios::app);
  if (!fout.good()) throw "I/O error";

  //Establish initial variables
  int p;
  double r;
  int n = 30*12; //number of monthly payments

  cout << "Input Mortgage Amount: $"; 
  cin >> p; 
  cin.ignore(1000, 10);

  cout << "Input Annual Interest Rate: "; 
  cin >> r; 
  cin.ignore(1000, 10);
  r = r/1200;

  double c = (p*r*pow(1+r,n)) / (pow(1+r,n)-1); //cost/month of mortgage

  r = r*1200;

  //output before formatting, for both console & file
  cout<< "Mortgage amount: $" << p << endl;
  fout<< "Mortgage amount: $" << p << endl;
  cout<< "Annual Interest Rate: " << r << "%" << endl;
  fout<< "Annual Interest Rate: " << r << "%" << endl;
  cout << "Amortization Period: 30 years" << endl;
  fout << "Amortization Period: 30 years" << endl;

  // format to 2 decimal points, for both console & file
  cout.setf(ios::fixed|ios::showpoint);
  fout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);
  fout << setprecision(2);
  cout << "The monthly payment will be " << c << endl;
  fout << "The monthly payment will be " << c << endl << endl;

  //close file
  fout.close();

  return 0;
}