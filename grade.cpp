// Lab 6c
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
using namespace std;

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Read a score from the keyboard as a whole number" << endl;
  cout << "and print the grade or notify user of invalid entry." << endl << endl;


  // Read a score from the keyboard
  int score; 
  cout << "What is your score? [0-100]: "; 
  cin >> score; 
  cin.ignore(1000, 10); 

  // print grade based on score
  cout << "    ";  // indented space for formatting purposes
  if (score >= 90 && score < 101) 
    cout << "Your grade is A" << endl; 
  else if (score >= 80 && score < 90) 
    cout << "Your grade is B" << endl;
  else if (score >= 70 && score < 80) 
    cout << "Your grade is C" << endl;
  else if (score >= 60 && score < 70) 
    cout << "Your grade is D" << endl;
  else if (score >= 0 && score < 60) 
    cout << "Your grade is F" << endl;
  else
    cout << "invalid entry" << endl;

return 0;
}