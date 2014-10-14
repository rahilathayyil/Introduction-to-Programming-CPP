// Lab 4d
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
using namespace std;

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: I will work with a lengthy program designed to describe" << endl;
  cout << "the specific bills necessary to make change from financial transcations" << endl << endl;


  int offered = 450000000;
  int lendThisAmount = 299929908;
  int changeDue = offered - lendThisAmount;

    //beginning display
  cout << "Amount to be lent: $" << lendThisAmount << endl;
  cout << "Amount offered: $" << offered << endl;
  cout << "Change due: $" << changeDue << endl << endl;

    //calculate bills using integer division and remainders
  int hundredThousandDollarBills = changeDue / 100000;
  cout << "Change includes this many hundred thousand dollar bills: ";
  cout << hundredThousandDollarBills << endl;
  changeDue = changeDue % 100000;

  int tenThousandDollarBills = changeDue / 10000;
  cout << "Change includes this many ten thousand dollar bills: ";
  cout << tenThousandDollarBills << endl;
  changeDue = changeDue % 10000;

  int fiveThousandDollarBills = changeDue / 5000;
  cout << "Change includes this many five thousand dollar bills: ";
  cout << fiveThousandDollarBills << endl;
  changeDue = changeDue % 5000;

  int oneThousandDollarBills = changeDue / 1000;
  cout << "Change includes this many one thousand dollar bills: ";
  cout << oneThousandDollarBills << endl;
  changeDue = changeDue % 1000;

  int fiveHundredDollarBills = changeDue / 500;
  cout << "Change includes this many five hundred dollar bills: ";
  cout << fiveHundredDollarBills << endl;
  changeDue = changeDue % 500;

  int oneHundredDollarBills = changeDue / 100;
  cout << "Change includes this many one hundred dollar bills: ";
  cout << oneHundredDollarBills << endl;
  changeDue = changeDue % 100;

  int fiftyDollarBills = changeDue / 50;
  cout << "Change includes this many fifty dollar bills: ";
  cout << fiftyDollarBills << endl;
  changeDue = changeDue % 50;

  int twentyDollarBills = changeDue / 20;
  cout << "Change includes this many twenty dollar bills: ";
  cout << twentyDollarBills << endl;
  changeDue = changeDue % 20;

  int tenDollarBills = changeDue / 10;
  cout << "Change includes this many ten dollar bills: ";
  cout << tenDollarBills << endl;
  changeDue = changeDue % 10;

  int fiveDollarBills = changeDue / 5;
  cout << "Change includes this many five dollar bills: ";
  cout << fiveDollarBills << endl;
  changeDue = changeDue % 5;

  int twoDollarBills = changeDue / 2;
  cout << "Change includes this many two dollar bills: ";
  cout << twoDollarBills << endl;
  changeDue = changeDue % 2;

  cout << "Change includes this many one dollar bills: ";
  cout << changeDue << endl << endl;

  cout << "That's a lot of money, Mr. Bank. Don't go spending it all on" << endl;
  cout << "risky unregulated derivatives like last time..." << endl;

  cin.get();

return 0;
}