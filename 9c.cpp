// Lab 9c
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
  cout << "Description: [PROG DESC HERE L1]" << endl;
  cout << "[DESC L2 HERE, ETC.]" << endl;
  cout << "[etc.]" << endl;

  int sum = 0;
  for (int i = 0; i < 10000000000; i++)
    sum += 1;	


/*
  cout.setf(ios::fixed);
  cout<< setprecision (12);
*/


  cout << sum << endl;

return 0;
}