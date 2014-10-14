#include <iostream> 
#include <string> 
using namespace std;

// Lab 3e
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

int main()
{
  // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Print a form letter to identify a student" << endl;
  cout << "with her/his name and to tell her/him her/his grade." << endl;
  cout << "Do this using only 2 variables." << endl;
  cout << endl;
  //Declare variables
  string name = "Dent, Stu";
  string grade = "C++";

  //Output
  cout << "Greetings, " << name << ". Your grade in Comsc110 is " 
  << grade << "." << endl;

  return 0;
}
