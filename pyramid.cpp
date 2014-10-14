#include <iostream> 
using namespace std; 
  
int main() 
{ 
  int n; // print this many rows 
  cout << "How many rows to print? "; 
  cin >> n; 
  cin.ignore(1000, 10);
  int stars = 1; 
  int skip = n - 1; 
  for (int i = 0; i < n; i++) 
  { 
    int j; 
    for (j = 0; j < skip; j++) cout << ' '; 
    for (j = 0; j < stars; j++) cout << '*'; 
    cout << endl; 
    stars += 2; 
    --skip; 
  } // for

  return 0; 
} // main