#include <iomanip> 
#include <iostream> 
using namespace std;
#include <cmath> 
  
int main() 
{ 
  double years = 10; 
  
  double D = 100; 
  double p = 0.075 / 12; 
  double T = years * 12; 
  double S = D * ((pow(1 + p, T) - 1) / p);

  // formatting output (see 4.2) 
  cout.setf(ios::fixed|ios::showpoint); 
  cout << setprecision(0); 
  
  cout << "In " << years << " years, $"; 
  cout << D << " deposited per month will grow to $"; 
  cout << setprecision(2) << S << "." << endl; 
  return 0; 
}