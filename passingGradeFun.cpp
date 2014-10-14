// Lab 8b
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
using namespace std;

char gradeInput() 
{ 
  char grade = 'Q'; // the default value 
  while (true) 
  { 
    cout << "What is your grade? [A, B, C, D, F, or Q to quit]: "; 
    cin >> grade; 
    cin.ignore(1000, 10); 

    cout << "   ";
  
    if (grade == 'A' || grade == 'B' || grade == 'C') break; 
    if (grade == 'a' || grade == 'b' || grade == 'c') break; 
    if (grade == 'D' || grade == 'F') break; 
    if (grade == 'd' || grade == 'f') break; 
    if (grade == 'Q' || grade == 'q') break; 
  
    cout << grade << " is not a valid grade. Try again..." << endl; 
  } // while 
  
  return grade; 
} // gradeInput 
  

int main() 
{ 
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Modify passingGradeFun.cpp so it accepts" << endl;
  cout << "uppercase or lowercase 'q' to quit. Include 'd' & 'f'" << endl;
  cout << "outputs. Allow for case. Change name of subprogram." << endl << endl << endl;

  char grade; 
  while (true) 
  { 
    grade = gradeInput(); 
    if (grade == 'Q' || grade == 'q') break; 
    if (grade == 'A' || grade == 'B' || grade == 'C') 
      cout << "You pass" << endl << endl; 
    if (grade == 'a' || grade == 'b' || grade == 'c') 
      cout << "You pass" << endl << endl; 
    if (grade == 'D' || grade == 'd' || grade == 'F' || grade == 'f')
      cout << "You do not pass" << endl << endl;
  } // while 
  
  cout << endl << "Thanks for checking your grades!" << endl << endl; 
  return 0; 
} // main