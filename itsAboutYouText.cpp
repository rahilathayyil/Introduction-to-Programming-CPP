#include <fstream> 
#include <iostream>
#include <string> 
using namespace std; 
  
int main() 
{ 
  //reserve identifier "fin" for reading text files
  ifstream fin;

  //open file & error handling
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

  cout<< endl << endl;
  cout<< "(int age) Your age is " << age << endl;
  cout<< "(double gpa) Your GPA is " << gpa << endl;
  cout<< "(string name) Your name is " << name << endl;
  cout<< "(char gender) Your gender is " << gender << endl;

  //close file
  fin.close();

  return 0; 
}