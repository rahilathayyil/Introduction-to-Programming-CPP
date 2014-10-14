// Lab 7f
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <ctime>
#include <cstdlib>
#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
srand(time(0)); rand();

   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Write a simple program from scratch that uses if logic" << endl;
  cout << "to print the results of a coin toss." << endl << endl << endl;

cout << "   _ _ _ - - - ^ ^ ^ Welcome to Coin Toss! ^ ^ ^ - - - _ _ _";
int tosses = 1;

while (true)
{
cout << endl << endl << "Enter the number of times you'd like to toss a coin [0 TO EXIT]: ";
cin >> tosses;
cin.ignore(1000, 10);

if (tosses == 0) break;

for (int i=0; i<tosses; i++)
  {
  int result = rand() % 2; // 0 or 1

  if (result == 0) cout << "Heads" << endl;
  else cout << "Tails" << endl;
  } // for

} // while

cout << endl << endl << "  Thanks for playing!" << endl;
return 0;
}