// Lab 7d
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
  cout << "Description: modify \"bounce.cpp\" from chapter 7" << endl;
  cout << "so the program terminates when the height < 0.5. " << endl;
  cout << "Check for this value after the height is printed." << endl << endl;

  double height = 40; 
  int i = 1;

  cout.setf(ios::fixed);
  cout << setprecision(0);  

  cout << "The ball starts at " << height << " inches high." << endl;

while (true) 
  { 
    height = height / 2; 
    cout << "After bounce " << i << " the ball is " << height << " inches high." << endl; 
    i = i + 1; 
    if (height < 0.5) break;

  } // while 

  cout << "    The height is less than 0.5. Program ending." << endl;
  
  return 0; 
} // main

 