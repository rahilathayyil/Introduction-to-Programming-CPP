// Lab 6e
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <algorithm> 
#include <iostream> 
#include <string> 
using namespace std;

#include <cctype> 

  // required for conversion to lowercase 
class toLower {public: char operator()(char c) const {return tolower(c);}}; 

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Ask the user 3 questions, test the validity of their answer," << endl;
  cout << "and tell the user whether their answer was correct or incorrect." << endl << endl;

    //variables
  string q1; 
  string q2;
  string q3;
  int score = 0;

    //Question 1
  cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl << endl;
  cout << "The Antikythera mechanism - the earliest known mechanical analog " << endl;
  cout << "computer - was invented by this ancient civilization: "; 
  getline(cin, q1); 
  
  transform(q1.begin(), q1.end(), q1.begin(), toLower()); 
  
  if (q1 == "greece" || q1 == "greek" || q1 == "greecian" || q1 == "greeks" || q1 == "the greeks" ||
  q1 == "the greecians" || q1 == "ancient greece" || q1 == "ancient greecians") 
{
    cout << "  The Greeks! It sure was! Press ENTER to continue." << endl; 
    score ++;
}
  else
    cout << "  Sorry. The correct answer is \"The Greeks\". Press ENTER to continue." << endl;
    cin.get();



    //Question 2
  cout << "In 1854 George Boole published a complete algebraic system using" << endl;
  cout << "binary states to compute math. The name / description of this" << endl; 
  cout << "algebraic system is: ";
  getline(cin, q2); 
  
  transform(q2.begin(), q2.end(), q2.begin(), toLower()); 
  
  if (q2 == "boolean" || q2 == "boolean expression" || q2 == "boolean expressions") 
{
    cout << "  Boolean expressions! Nice one! Press ENTER for the last question." << endl; 
    score ++;
}
  else
    cout << "  Sorry. The correct answer is \"Boolean\". Press ENTER to continue." << endl;
    cin.get();



    //Question 3
  cout << "Virtually all electronic equipment today relies on this type" << endl;
  cout << "of electronic circuit, made prominent through advances in" << endl;
  cout << "semiconductor understanding and fabrication: ";
  getline(cin, q3); 
  
  transform(q3.begin(), q3.end(), q3.begin(), toLower()); 
  
  if (q3 == "integrated" || q3 == "integrated circuit" || q3 == "ic" || q3 == "microchip" ||
  q3 == "integrated circuit" || q3 == "the integrated circuit" || q3 == "the ic" || q3 == "the microchip" ) 
{
    cout << "  The Integrated Circuit! Right on! Press ENTER to see score." << endl; 
    score ++;
}
  else
    cout << "  Sorry. The correct answer is \"The Integrated Circuit\". Press ENTER to see score." << endl;
    cin.get();

    //Report score
  cout << endl << endl << "You answered " << score << "/3 questions correctly. Thanks for playing!" << endl;

return 0;
}

