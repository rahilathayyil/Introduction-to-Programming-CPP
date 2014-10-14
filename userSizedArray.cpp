// Lab 10c
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
#include <iomanip>
using namespace std;

#include <cstdlib> 

  // Sorting function  
int compare(const void* pa, const void* pb) 
{ 
  const int& a = *static_cast<const int*>(pa); 
  const int& b = *static_cast<const int*>(pb); 
  if (a < b) return -1; // negative if a<b 
  if (a > b) return 1; // positive if a>b 
  return 0; // 0 for tie 
} // compare 

  // Averaging Function
double getAverage(int* score, int n) 
{ 
  int sum = 0; 
  int i = 0; 
  for (i = 0; i < n; i++) 
    sum += score[i]; 
  double average = double(sum) / n; 
  return average; 
} // getAverage 

  // Searching for "A" function
  bool searchA(int* score, int indices)
{
  bool ifA = false;
  for (int i = 0; i < indices; i++) 
  { 
    if (score[i] > 89) 
    { 
      ifA = true; 
      break; 
    } // if 
  } // for 

    return ifA;
} // bool

//------------------------------------------------------------------------------------

int main()
{
    // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Learn about dynamic arrays in steps." << endl;
  cout << "Create an array from user input, sort, average, search." << endl << endl;

    // Declare int "size" and get input from user
  int size;
  cout << "How many scores will you enter? ";
  cin >> size;
  cin.ignore(1000, 10);

    //create array of size [size]
  int* score = new int[size];
    
    // read and save the scores 
  int i; 
  for (i = 0; i < size; i++) 
  { 
    cout << "Enter score " << i+1 << " of " << size << ": ";
    cin >> score[i]; 
    cin.ignore(1000, 10); 
  } // for 
  
    //sort from low to high
  qsort(score, size, sizeof(int), compare); 


  cout << "\nSorted: ";
  for (i = 0; i < size; i++) cout << score[i] << ' '; 
  cout << endl; 
  cout << "Minimum: " << score[0] << endl;
  cout << "Maximum: " << score[size-1] << endl;

  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(1);

  cout << "Average: " << getAverage(score, size) << endl;

// create searchA function: boolean, value-returning.
  if (searchA(score, size)) cout << "There is at least one \"A\" grade." << endl;
  else cout << "There are no \"A\" grades." << endl;

  delete [] score; 

return 0;
}