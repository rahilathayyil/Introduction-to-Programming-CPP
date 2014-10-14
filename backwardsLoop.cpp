#include <iostream> 
using namespace std; 
  
int main() 
{ 
  char letter = 'Z'; 
  int i; 
  for (i = 0; i < 26; i++) 
  { 
    cout << letter; 
    letter--; // becomes previous letter 
  } // for 
  cout << endl; 
  
  return 0; 
} // main