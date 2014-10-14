// Lab 6d
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
using namespace std; 
  
int main() 
{ 
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Ask user to input grade; then report " << endl;
  cout << "whether or not s/he passes or fails the class." << endl << endl;

  char grade; 
  cout << "What is your grade? [A, B, C, D, or F]: "; 
  cin >> grade; 
  cin.ignore(1000, 10); 

  switch (grade)
{
  case 'A':
  case 'a':
    cout << "  Excellent work! You pass with flying colors!" << endl;
    break;
  case 'B':
  case 'b':
    cout << "  You pass. Good work." << endl;
    break;
  case 'C':
  case 'c':
    cout << "  You pass, but your comprehension needs improvement." << endl;
    break;
  case 'D':
  case 'd':
    cout << "  Close, but you need more work. You do not pass." << endl;
    break;
  case 'F':
  case 'f':
    cout << "  You do not pass. Your comprehension is inadequate." << endl;
    break;
  default: cout << "  Invalid entry. Please follow the prompt." << endl;  //default statement
}

return 0;
}