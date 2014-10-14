// Lab 5d
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
  cout << "Description: calculate the monthly payment on" << endl;
  cout << "a user-input 30-year mortgage, to the penny." << endl << endl;

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

  //output before formatting
  cout<< "Mortgage amount: $" << p << endl;
  cout<< "Annual Interest Rate: " << r << "%" << endl;
  cout << "Amortization Period: 30 years" << endl;

  // format to 2 decimal points
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);
  cout << "The monthly payment will be " << c << endl;

return 0;
}