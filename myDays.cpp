// Lab 4f
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
#include <string> 
using namespace std;

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Calculate how many days old I am" << endl;
  cout << "as of the due date of this assignment." << endl << endl;

  //Dates info
  cout<< "DOB: Oct 20, 1981" << endl; // Oct 20 = day 293, 72 days remaining
  cout<< "Due: Feb 26, 2012" << endl; // Feb 26 = day 57, 309 days remaining

  //create variables
  int days = 0;
  int years = 32; // I have lived for 32 years, including 1981 and 2012 <-- THIS was the primary error source.
  int leapYears = (years / 4); // answer is now 8
  int preBirthDays1981 = 293; // 
  int postDueDays2012 = 309; // 

  //math
  days = days + (years*365);
  days = days + leapYears;
  days = days - preBirthDays1981;
  days = days - postDueDays2012;

  //output
  cout<< "As of the due date of this lab, I am " << days << " days old! Wow!" << endl;

return 0;
}