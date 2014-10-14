// Lab 9g
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
  cout << "Description: calculate and print the number of weeks necessary to" << endl;
  cout << "earn $1,000,000 when each week doubles allowance, starting at $0.01." << endl << endl;

int weeks = 0;
double weeklyAllowance = 0.01;
double piggyBank = 0.00;

  while(true)
    {
    piggyBank = piggyBank + weeklyAllowance;
    weeklyAllowance = weeklyAllowance*2;
    weeks++;

    if (piggyBank > 1000000) break;

    } // while


  cout << "In " << weeks << " weeks I will be a millionaire! ";
//    cout.setf(ios::fixed|ios::showpoint);
//    cout << setprecision(2); "
  cout << fixed << setprecision(2);
  cout << "I will have $" << piggyBank <<"!!!" << endl;

return 0;
}