// Lab 12b
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

struct Student
{
  string name;
  int id;
  float gpa;
};
 


void printStudents(Student* student, int nStudents)
{
  int i;
  for (i = 0; i < nStudents; i++)
  {
    cout << "Name = " << left << setw(30) << student[i].name;
    cout.fill('0'); 
    cout << " ID = " << right << setw(7)
      << student[i].id << ", gpa = "
      << student[i].gpa << endl;
    cout.fill(' '); 
  }
}



int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Read student records from the keyboard" << endl;
  cout << "And sort list based on GPA high-to-low." << endl << endl;

  // create an empty list
  const int MAX_STUDENTS = 100; // capacity
  int nStudents = 0; // initially empty
  Student student[MAX_STUDENTS];

  cout << "How many records? ";
  cin >> nStudents;
  cin.ignore(1000, 10); 
 
  // prompt and save the records
  for (int i=0; i < nStudents; i++)
  {
    // create a record
    Student aStudent;

    cout << "\nStudent " << i+1 << "'s Name: ";
    getline(cin, aStudent.name);

    cout << "Student " << i+1 << "'s ID: ";
    cin >> aStudent.id;
    cin.ignore(1000, 10); 

    cout << "Student " << i+1 << "'s GPA: "; 
    cin >> aStudent.gpa;
    cin.ignore(1000, 10); 

    student[i] = aStudent;

  }

 
  // sort the students by gpa high-to-low
  for (int i = 0; i < nStudents; i++)
  {
    for (int j = i + 1; j < nStudents; j++)
    {
      if (student[i].gpa < student[j].gpa)
      {
        Student temp = student[i];
        student[i] = student[j];
        student[j] = temp;
      }
    }
  }

  printStudents(student, nStudents);
 
  return 0;
} // main