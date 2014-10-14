// Lab 9e
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
  cout << "Description: Learn that 'char's are represented in computer" << endl;
  cout << "memory as integers, and do math with them." << endl << endl;

string fileName;

cout << "Enter the name of the file to encrypt (including the \".txt\" suffix):\n     ";
cin >> fileName;
cin.ignore(1000, 10);

  ifstream fin; 
  ofstream fout;
  fin.open(fileName); 
  if (!fin.good()) throw "I/O error"; 

  fout.open("secret.txt");
  if (!fout.good()) throw "I/O error";

  while (true) 
  { 
    if (!fin.good()) break; 
  
    string lineFromFile; 
    getline(fin, lineFromFile); 

  // encode string lineFromFile by adding 1 to the ASCII code of each character
  for (int i = 0; i < lineFromFile.length(); i++) // for each char in the string...
    lineFromFile[i]++; // bump the ASCII code by 1 - is the [i] an ARRAY representation?

    fout << lineFromFile << endl;
    cout << lineFromFile << endl; 

  } // while 
  fin.close();
  fout.close();
  
  return 0; 
} // main

