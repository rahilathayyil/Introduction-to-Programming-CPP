// Lab 10b
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <fstream> 
#include <iostream> 
#include <iomanip>
using namespace std;

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Explore the code elements of arrays" << endl;
  cout << "and console by marking up existing code" << endl << endl;

  // Declare variables
  int score[4];
  int i; // loop counter 
  int scoreTotal = 0; 
  int nGreater = 0; 

  // Prompt user for 4 inputs in loop
  for (i = 0; i < 4; i++) 
  { 
    cout << "Enter score " << i+1 << " of 4: ";
    cin >> score[i]; 
    cin.ignore(1000, 10); 
  } // for 


  
  // calculate and print the average 
  for (i = 0; i < 4; i++) 
  { 
    scoreTotal += score[i]; 
  } // for 
  double average = scoreTotal / 4.0; 
  cout << "The average of these 4 numbers is " << average << endl; 
  
  // count #of scores > average 
  for (i = 0; i < 4; i++) 
  { 
    if (score[i] > average) nGreater++; 
  } // for 
  cout << nGreater << " scores are greater than the average." << endl; 
  
  return 0; 
} // main