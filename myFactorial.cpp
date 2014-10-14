// Lab 14d
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
#include <iomanip>
#include <string> 
using namespace std;


int iterativeSubtraction(int n)
{
  int f;
  if (n < 2) // detecting a base case
    f = 1;
  else
    f = n * iterativeSubtraction(n - 1);
  return f;
} // iterativeSubtraction


int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Increase familiarity with recursion, subprograms" << endl;
  cout << "calling themselves, and solving factorials." << endl;
  cout << endl;


  int n;
  cout << "Enter n: ";
  cin >> n;
  cin.ignore(1000, 10);

  cout << iterativeSubtraction(n) << endl;

  return 0;
} // main


/*
  // create an empty list 
  const int MAX_SCORES = 100; // capacity 
  int nScores = 0; // initially empty 
  int score[MAX_SCORES]; 
  
  // read and save the scores 
  while (fin.good()) 
  { 
    // read a score from the file 
    int aScore; 
    fin >> aScore; 
    fin.ignore(1000, 10); 
  
      // add score to list, if it's not full 
    if (nScores < MAX_SCORES) 
      score[nScores++] = aScore; 
  } // while 
  fin.close(); 
*/