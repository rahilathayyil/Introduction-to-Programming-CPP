// Lab 8d
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <cstdlib>
#include <ctime>
#include <iostream> 
using namespace std;


void additionProblem(int topNumber, int bottomNumber) 
{ 
  int userAnswer; 
  cout << "\n\n\n      " << topNumber << " + " << bottomNumber << " = "; 
  cin >> userAnswer; 
  cin.ignore(1000, 10); 
  
  int theAnswer = topNumber + bottomNumber; 
  if (theAnswer == userAnswer) 
{
    cout << "      Correct!" << endl; 
}
  else 
    cout << "      Very good, but a better answer is " << theAnswer << endl; 

} // additionProblem 


  
int main() 
{ 
srand(time(0));
rand();

   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Increase familiarity with parameter lists and " << endl;
  cout << "random number generation." << endl << endl;

  int count = 5;

for (int i=0; i<count; i++)
{
  additionProblem((rand() % 51), (rand() % 51)); 
}

cout << "\n\n\nQuiz over!" << endl;

return 0;
} // main
