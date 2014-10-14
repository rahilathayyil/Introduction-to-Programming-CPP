// Lab 12c
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
#include <iomanip>
#include <string> 
#include <cstdlib> 
using namespace std;



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

           // Searching for "B" function
  bool searchB(int* score, int indices)
{
  bool ifB = false;
  for (int i = 0; i < indices; i++) 
  { 
    if (score[i] > 79 && score[i] < 90) 
    { 
      ifB = true; 
      break; 
    } // if 
  } // for 

    return ifB;
} // bool

             // Searching for "C" function
  bool searchC(int* score, int indices)
{
  bool ifC = false;
  for (int i = 0; i < indices; i++) 
  { 
    if (score[i] > 69 && score[i] < 80) 
    { 
      ifC = true; 
      break; 
    } // if 
  } // for 

    return ifC;
} // bool

             // Searching for "Pass" function
  bool searchPass(int* score, int indices)
{
  bool ifPass = false;
  for (int i = 0; i < indices; i++) 
  { 
    if (score[i] > 69) 
    { 
      ifPass = true; 
      break; 
    } // if 
  } // for 

    return ifPass;
} // bool


int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Update array program from lab 10 to include" << endl;
  cout << "array-based lists and print more outputs." << endl << endl;

  // create an empty list named "score[]"
  const int MAX_SIZE = 6; // capacity 
  int nScores = 0; // initially empty 
  int score[MAX_SIZE]; // array "score" is declared

  int userSize;
  cout << "How many scores will you enter? ";
  cin >> userSize;
  cin.ignore(1000, 10);

  bool anyInput = true;
  if (userSize == 0) anyInput=false;

  if (anyInput == 0) cout << "Nothing to do." << endl;
  else
    {
    // read and save the scores 
  int i; 
  for (i = 0; i < userSize; i++) 
  { 
    cout << "Enter score " << i+1 << " of " << userSize << ": ";
    int aScore;
    cin >> aScore; 
    cin.ignore(1000, 10); 
      if (nScores < MAX_SIZE) 
        score[nScores++] = aScore; 
  } // for 
  
    //sort from low to high
  qsort(score, nScores, sizeof(int), compare); 


  cout << "\nSorted: ";
  for (i = 0; i < nScores; i++) cout << score[i] << ' '; 
  cout << endl; 
  cout << "Minimum: " << score[0] << endl;
  cout << "Maximum: " << score[nScores-1] << endl;

  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(1);

  cout << "Average: " << getAverage(score, nScores) << endl;

// create searchA function: boolean, value-returning.
  if (searchA(score, nScores)) cout << "There is at least one \"A\" grade." << endl;
  else cout << "There are no \"A\" grades." << endl;

// create searchB function: boolean, value-returning.
  if (searchB(score, nScores)) cout << "There is at least one \"B\" grade." << endl;
  else cout << "There are no \"B\" grades." << endl;

// create searchC function: boolean, value-returning.
  if (searchC(score, nScores)) cout << "There is at least one \"C\" grade." << endl;
  else cout << "There are no \"C\" grades." << endl;

// create searchPass function: boolean, value-returning.
  if (searchPass(score, nScores)) cout << "There is at least one \"Passing\" grade." << endl;
  else cout << "There are no \"Passing\" grades." << endl;
} // ELSE

return 0;
}    