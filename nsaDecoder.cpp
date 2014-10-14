// Lab 9f
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <fstream> 
#include <iostream> 
#include <iomanip>
#include <string> 
using namespace std;

int main() 
{ 
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Decode the message encrypted in" << endl;
  cout << "Lab 9e's \"secret.txt\"." << endl << endl;

string fileName;

  ifstream fin; 
  fin.open("secret.txt"); 
  if (!fin.good()) throw "I/O error"; 

  while (true) 
  { 
    if (!fin.good()) break; 
  
    string lineFromFile; 
    getline(fin, lineFromFile); 

  // Decode string lineFromFile by SUBTRACTING 1 to the ASCII code of each character
  for (int i = 0; i < lineFromFile.length(); i++) // for each char in the string...
    lineFromFile[i]--; // bump the ASCII code by -1

    cout << lineFromFile << endl; 

  } // while 
  fin.close();
  
  return 0; 
} // main

