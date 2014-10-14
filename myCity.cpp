#include <iostream>
using namespace std;

// Lab 3d
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

int main()
{
  // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Write, from scratch, a program to set and print" << endl;
  cout << "the forecasted high temperatures from a city of your choice." << endl;
  cout << " " << endl;
  cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
  cout << " " << endl;

  //create 5 variables
  int tempMon = 55;
  int tempTue = 67;
  int tempWed = 72;
  int tempThu = 72;
  int tempFri = 70;

  //Display output

  cout << "5-Day High Temperature Forecast" << endl;
  cout << "for Vallejo, CA" << endl;
  cout << " " << endl;

  cout << "Monday, February 20, " << tempMon << " degrees" << endl;
  cout << "Tuesday, February 21, " << tempTue << " degrees" << endl;
  cout << "Wednesday, February 22, " << tempWed << " degrees" << endl;
  cout << "Thursday, February 23, " << tempThu << " degrees" << endl;
  cout << "Friday, February 24, " << tempFri << " degrees" << endl;
  cout << " " << endl;

  cout << "(source: Weather.com 5- and 10-day Forecasts)" << endl;

  return 0;
}