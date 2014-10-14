// Lab 9d
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Learn about \"round-off error\" by writing a" << endl;
  cout << "program that deliberately couses round-off error." << endl;


// use a decmial != 1/2, 1/4, 1/8, 1/16
// try 1/5 = .2; or 1/20 = 0.05
  // try for 16 loops...

double x; 
for (x = 0; x != 3.2; x += 0.2) 
  cout << x << endl;

return 0;
}