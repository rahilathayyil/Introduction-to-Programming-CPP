// Lab 6f
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <ctime>
#include <cstdlib>
#include <iostream> 
// #include <iomanip>
using namespace std;

int main()
{
srand(time(0)); rand();

   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Write a simple program from scratch that uses if logic" << endl;
  cout << "to print the results of a coin toss." << endl << endl;

int result = rand() % 2; // 0 or 1

if (result == 0) cout << "Heads" << endl;
else cout << "Tails" << endl;

return 0;
}