#include <iostream> 
using namespace std; 
  
int main() 
{ 
  int i;

  for (int i = 0; i < 4; i++) 
  { 
    for (int j = 0; j <= i; j++) 
      {
        cout << '*'; 
      }
    cout << endl; 
  } // for 

    return 0; 
} // main