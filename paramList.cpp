// Lab 8c
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iomanip>
#include <iostream> 
using namespace std; 
  
double calcAverage(int a, int b, int c) 
{ 
  double avg = 0.0; 
  avg = (a + b + c) / 3.0; 
  return avg; 
} // calcAverage 
  

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Modify paramList.cpp so it averages 3" << endl;
  cout << "values retrieved from a user prompt. Make output" << endl;
  cout << "robust; format to 2 decimal places." << endl << endl << endl;

  int x = 0;
  int y = 0;
  int w = 0;

  //PROMPTS APPEAR HERE

  cout << "     Let's find the average of 3 integer values." << endl << endl;

  cout << "Enter the 1st integer: ";
  cin >> w; 
  cin.ignore(1000, 10); 

  cout << "Enter the 2nd integer: ";
  cin >> x; 
  cin.ignore(1000, 10); 

  cout << "Enter the 3rd integer: ";
  cin >> y; 
  cin.ignore(1000, 10); 

//  int x = 100; 
//  int y = 200; 
//  int w = 350;

  double z = calcAverage(w, x, y); 

  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2); 

  cout << endl << "     The average is " << z << endl; 
  return 0; 
}