#include <iostream> 
#include <string> 
using namespace std; 
  
int main() 
{ 
  // read an int value from the keyboard 
       int age; 
  cout << "What is your age? "; 
  cin >> age; 
  cin.ignore(1000, 10);
  // read a double value from the keyboard 
       double gpa; 
  cout << "What is your grade point average? "; 
  cin >> gpa; 
  cin.ignore(1000, 10);

  // read a string value from the keyboard 
       string name; 
  cout << "What is your name? "; 
  getline(cin, name);

  // read a char value from the keyboard 
       char gender; 
  cout << "What is your gender? [M/F]: "; 
  cin >> gender; 
  cin.ignore(1000, 10);

  cout<< endl << endl;
  cout<< "(int age) Your age is " << age << endl;
  cout<< "(double gpa) Your GPA is " << gpa << endl;
  cout<< "(string name) Your name is " << name << endl;
  cout<< "(char gender) Your gender is " << gender << endl;

  return 0; 
}