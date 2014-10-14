// Lab 7e
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iomanip> 
#include <iostream> 
using namespace std; 
  
#ifdef GPP 
#include <unistd.h> 
#else 
#include <cstdlib> 
#endif 
  
int main() 
{ 

   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Count down from 10 to 0" << endl << endl;


  cout << "    Hit \"CTRL-C\" to exit, or wait until 0...\n"; 
  

  for (int units=10; units>=0; units--) 
  { 
    cout << units; 
    cout.flush(); 
  
  if (units == 0) break;

    #ifdef GPP 
    sleep(1); // one second 
    #else 
    _sleep(1000); // one thousand milliseconds 
    #endif 
  
    cout << '\r' << ' '; // CR 
  } 

cout << endl << endl << "Ruuuuuuunnnn! Goooo! Get to da choppa!!!!!!" << endl;

  return 0; 
} // main
