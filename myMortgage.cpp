// Lab 4c
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
  cout << "Description: calculate the MONTHLY payment" << endl;
  cout << "on a 30-year mortgage to the penny." << endl << endl;

  //assign values
  int p = 300000; //mortgage $
  double r = 0.03875/12; //interest rate
  int n = 30*12; //number of monthly payments

  double c = (p*r*pow(1+r,n)) / (pow(1+r,n)-1); //cost/month of mortgage

  //output before formatting
  cout<< "The cost of a 30-year mortgage of" << endl;
  cout<< "$" << p << " at a " << r*12*100 << "% interest rate is " << endl;
  cout<< n << " monthly payments of $";

  // format to 2 decimal points
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);

  cout << c << "." << endl;

return 0;
}