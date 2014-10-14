#include <fstream> 
#include <iostream> 
#include <string> 
using namespace std; 
  
int main() 
{ 
  // open aboutYou.txt for input 
  ifstream fin; 
  fin.open("aboutYou.txt"); 
  if (!fin.good()) throw "I/O error";
  // read an int value from one line of an input file 
  int age; 
  fin >> age; 
  fin.ignore(1000, 10);

  // read a double value from one line of an input file 
  double gpa; 
  fin >> gpa; 
  fin.ignore(1000, 10);

  // read a string value from one line of an input file 
  string name; 
  getline(fin, name);

  // read a char value from one line of an input file 
  char gender; 
  fin >> gender; 
  fin.ignore(1000, 10); 
  
  fin.close(); 
  return 0; 
}