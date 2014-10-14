// Lab 14b
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <cctype>
#include <deque>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;


struct Student
{
  string name;
  char gender;
  int id;
  float gpa;
}; // Student


void printStudents(Student student)
{
    cout << "Name = " << left << setw(18) << student.name;
    cout.fill('0'); 
    cout << "Gender = " << student.gender << ", ID = " << right << setw(7) << student.id
      << ", GPA = " << student.gpa << endl;
    cout.fill(' '); 
} // printStudents

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: explore the embedded library functions of" << endl;
  cout << "collections by modifying an example program." << endl << endl;

  // declare variable
  int records = 0;

  // create an empty list
  deque<Student> student;

  // Prompt user for number of records
  cout << "How many student records will you enter? ";
  cin >> records;
  cin.ignore(1000,10);

  //input loop
  for (int i=0; i < records; i++)
    {
    Student aStudent;
    cout << "Enter Student " << i+1 << "'s name: ";
    getline(cin, aStudent.name);

    while (true)
    {
    cout << "Enter Student " << i+1 << "'s gender: ";
    cin >> aStudent.gender;
    cin.ignore(1000, 10);
    aStudent.gender = toupper(aStudent.gender);
    if(aStudent.gender == 'M' || aStudent.gender == 'F') break;
    cout << "  Student must be designated M or F." << endl;
    }


    cout << "Enter Student " << i+1 << "'s ID: ";
    cin >> aStudent.id;
    cin.ignore(1000, 10);
 
    cout << "Enter Student " << i+1 << "'s GPA: ";
    cin >> aStudent.gpa;
    cin.ignore(1000, 10);
 
    student.push_back(aStudent);
         cout << endl; // for formatting
    } // for <-- ENDS user input loop
 
    for (int i = 0; i < student.size(); i++)
    {
    printStudents(student[i]);
    } // for

  return 0;
} // main