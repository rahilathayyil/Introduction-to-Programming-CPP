// Lab [LAB NUMBER HERE]
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
  cout << "Description: This program will use math to multiply" << endl;
  cout << "a standard recipe to serve a greater number of people." << endl;
  cout << endl;
  cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
  cout << endl;

  // declare recipe variables and initial amounts.
  double appleJuice = 32;          // in oz.
  double cranberryJuice = 12;      // in oz.
  double orangeJuice = 8;          // in oz.
  double gingerAle = 0.5;          // in liters
  double apples = 1;               // in apples

  // serving calculators
  double serves = 12;
  double mustServe = 240000;

  //math
  appleJuice = (appleJuice/serves)*mustServe;
  cranberryJuice = (cranberryJuice/serves)*mustServe;
  orangeJuice = (orangeJuice/serves)*mustServe;
  gingerAle = (gingerAle/serves)*mustServe;
  apples = (apples/serves)*mustServe;

  //output
  cout << endl;
  cout << endl;
  cout << "Recipe for " << mustServe << " servings of Apple Orchard Punch:" << endl;
  cout << "         --------------------------------         ";
  cout << endl;
  cout << "   Ounces of chilled apple juice: " << appleJuice << endl;
  cout << "   Ounces of frozen cranberry juice concentrate: " << cranberryJuice << endl;
  cout << "   Ounces of orange juice: " << orangeJuice << endl;
  cout << "   Liters of ginger ale: " << gingerAle << endl;
  cout << "   Apples: " << apples << endl;
  cout << endl;

return 0;
}