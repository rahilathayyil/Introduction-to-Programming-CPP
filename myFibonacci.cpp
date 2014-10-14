// Lab 14e
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
#include <iomanip>
#include <string> 
using namespace std;


int fibonacci(int n)
{
  int f; // initial number
  if (n == 0) f = 0;
  else if (n == 1) f = 1;
  else f = fibonacci(n - 1) + fibonacci(n - 2);
  return f;
} // fibonacci


int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Create a recursive program that evaluates" << endl;
  cout << "the \"n\"th value of the Fibonacci sequence." << endl << endl;

  int n;
  cout << "Enter a non-negative \"n\" index of the Fibonacci Series: ";
  cin >> n;
  cin.ignore(1000, 10);

  cout << fibonacci(n) << endl;


return 0;
}