// Lab 11b
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
#include <iomanip>
#include <string> 
using namespace std;

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Learn about struct definitions and customize" << endl;
  cout << "struct data elements. Do this in several steps." << endl << endl;;



//-----------------------------------------------------------------------------------
// name,	 address, 	city, 	state,	 zip,	 gender, 	id, 	gpa
//-----------------------------------------------------------------------------------

    // Create struct
  struct Student
   {
    string name;
    string address;
    string city;
    string state;
    int zip;
    string gender;
    string id;
    double gpa;
   }; // Student



return 0;
}