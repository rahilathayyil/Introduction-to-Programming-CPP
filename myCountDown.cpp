// Lab 14c
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
#include <iomanip>
#include <string> 
using namespace std;


void recursiveFunction(int n)
{
  cout << n << ' '; // the part I know how to do
  if (n > 0) // look for base case
    recursiveFunction(n - 1); // do this if not base case
} // recursiveFunction

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Explore recursions by making a subprogram" << endl;
  cout << "itself. Say WHAT?! Tha's CRAY!!!" << endl << endl;


  int n;
  cout << "Enter n: ";
  cin >> n;
  cin.ignore(1000, 10);

  recursiveFunction(n);
  cout << endl;

  return 0;
} // main