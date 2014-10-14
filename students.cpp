// Lab 11b
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
#include <iomanip>
#include <string> 
using namespace std;


  // Create struct
struct Student
 {
  string name;
  string address;
  string city;
  string state;
  string zip;
  char gender;
  string id;
  double gpa;
 }; // Student


void inputStudent(Student& s, int sn)
{
  cout << endl << endl;
  cout << "Enter Student " << sn << "'s name: ";  getline(cin, s.name);
  cout << "Enter Student " << sn << "'s address: ";  getline(cin, s.address);
  cout << "Enter Student " << sn << "'s city: ";  getline(cin, s.city);
  cout << "Enter Student " << sn << "'s state: ";  getline(cin, s.state);
  cout << "Enter Student " << sn << "'s zip: ";  getline(cin, s.zip);
  cout << "Enter Student " << sn << "'s gender: ";  cin >> s.gender;  cin.ignore(1000, 10);
  cout << "Enter Student " << sn << "'s ID: ";  getline(cin, s.id);
  cout << "Enter Student " << sn << "'s GPA: ";  cin >> s.gpa;  cin.ignore(1000, 10);
} // inputStudent


void printRecord(Student& s, int sn)
{
  cout << endl << endl;
  cout << "Student " << sn << "'s name: " << s.name << endl;
  cout << "Student " << sn << "'s address: " << s.address << endl;
  cout << "Student " << sn << "'s city: " << s.city << endl;
  cout << "Student " << sn << "'s state: " << s.state << endl;
  cout << "Student " << sn << "'s zip: " << s.zip << endl;
  cout << "Student " << sn << "'s gender: " << s.gender << endl;
  cout << "Student " << sn << "'s ID: " << s.id << endl;
  cout << "Student " << sn << "'s GPA: " << s.gpa << endl;
} // printRecord


int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Learn about struct definitions and customize" << endl;
  cout << "struct data elements. Do this in several steps." << endl;;

    // Declare 3 variables of struct Student (create 3 student records)
  Student a;
  Student b;
  Student c;

    // Input students through subprogram
  inputStudent(a, 1);
  inputStudent(b, 2);
  inputStudent(c, 3);

    // Print student values through subprogram
  printRecord(a, 1);
  printRecord(b, 2);
  printRecord(c, 3);

return 0;
}