// Midterm Project
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream> 
#include <iomanip>
#include<windows.h>
using namespace std;


int main()
{
// initialize the computer's random number generator
  srand(time(0));  rand();

// identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Midterm Project" << endl;
  cout << "Play Rock-Paper-Scissors against the computer" << endl;
  cout << "until the user decides to quit." << endl;

// declare variables
  char humanInput = 'q';
  int compChoice = 0;
  int compare = 0;

// start loop
  while(true)
    {

  // determine computer's choice
    compChoice = rand() % 3;

  // prompt for, and read, the human's choice
    cout << "\n\n      Human! Make your choice! \n";
    cout << "('r' for Rock, 'p' for Paper, 's' for Scissors, 'q' to Quit): ";
    cin >> humanInput; 
    cin.ignore(1000, 10); 
    humanInput = tolower(humanInput);

// INDENT
cout << "  ";

  // if human wants to quit, break out of loop
    int humanChoice = 0;

    if (humanInput == 'q') break;
    else if (humanInput == 'r') humanChoice = 10;
    else if (humanInput == 'p') humanChoice = 20;
    else if (humanInput == 's') humanChoice = 30;

  // print results
    compare = humanChoice + compChoice;

    switch (compare)
    {
    case 10: cout << "Human:Rock, Computer:Rock, TIE!" << endl;
Beep(784,600); break;
    case 11: cout << "Human:Rock, Computer:Paper, COMPUTER WINS!" << endl;
Beep(784,250); Beep(523,600); break;
    case 12: cout << "Human:Rock, Computer:Scissors, HUMAN WINS!" << endl;
Beep(784,250); Beep(1050,600); break;
    case 20: cout << "Human:Paper, Computer:Rock, HUMAN WINS!" << endl;
Beep(784,250); Beep(1050,600); break;
    case 21: cout << "Human:Paper, Computer:Paper, TIE!" << endl;
Beep(784,600); break;
    case 22: cout << "Human:Paper, Computer:Scissors, COMPUTER WINS!" << endl;
Beep(784,250); Beep(523,600); break;
    case 30: cout << "Human:Scissors, Computer:Rock, COMPUTER WINS!" << endl;
Beep(784,250); Beep(523,600); break;
    case 31: cout << "Human:Scissors, Computer:Paper, HUMAN WINS!" << endl;
Beep(784,250); Beep(1050,600); break;
    case 32: cout << "Human:Scissors, Computer:Scissors, TIE!" << endl;
Beep(784,600); break;
    default: cout << "Stupid human! \"" << humanInput << "\" is not a valid entry! Try again!";
Beep(392,600); break;
    }

// end loop
    }

// end program
  cout<< "\n\nThanks for playing!" << endl;

return 0;
}