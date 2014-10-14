// Midterm Project
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream> 
#include <iomanip>
using namespace std;


int getCompChoice()
  {
  int compChoice = rand() % 3;
  return compChoice;
  } // getCompChoice


int getHumanChoice()
  {
  char humanInput = 'q';
  int humanChoice = 50;

  while (humanChoice > 40)
    {
    cout << "\n\n      Human! Make your choice! \n";
    cout << "('R' for Rock, 'P' for Paper, 'S' for Scissors, 'Q' to Quit): ";
    cin >> humanInput; 
    cin.ignore(1000, 10); 
    humanInput = tolower(humanInput);

    if (humanInput == 'q') humanChoice = 0;
    else if (humanInput == 'r') humanChoice = 10;
    else if (humanInput == 'p') humanChoice = 20;
    else if (humanInput == 's') humanChoice = 30;
    else cout << "  Stupid human! \"" << humanInput << "\" is not a valid entry! Try again!\n";
    }

  return humanChoice;

  } // getHumanChoice


void printResults(int compare)
  {
  // INDENT
  cout << "  ";

  switch (compare)
    {
    case 10: cout << "Human:Rock, Computer:Rock, TIE!" << endl; break;
    case 11: cout << "Human:Rock, Computer:Paper, COMPUTER WINS!" << endl; break;
    case 12: cout << "Human:Rock, Computer:Scissors, HUMAN WINS!" << endl; break;
    case 20: cout << "Human:Paper, Computer:Rock, HUMAN WINS!" << endl; break;
    case 21: cout << "Human:Paper, Computer:Paper, TIE!" << endl; break;
    case 22: cout << "Human:Paper, Computer:Scissors, COMPUTER WINS!" << endl; break;
    case 30: cout << "Human:Scissors, Computer:Rock, COMPUTER WINS!" << endl; break;
    case 31: cout << "Human:Scissors, Computer:Paper, HUMAN WINS!" << endl; break;
    case 32: cout << "Human:Scissors, Computer:Scissors, TIE!" << endl; break;
    default: cout << "Stupid human! That is not a valid entry! Try again!"; break;
    }
  } // printResults



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
  int compChoice = 0;
  int humanChoice = 50;
  int compare = 0;

// start loop
  while(true)
    {

  // determine computer's choice
    compChoice = getCompChoice();

  // prompt for, and read, the human's choice
    humanChoice = getHumanChoice();

  // if human wants to quit, break out of loop
    if (humanChoice == 0) break;

  // print results
    compare = humanChoice + compChoice;
    printResults(compare);

// end loop
    }

// end program
  cout<< "\n\n  Thanks for playing!" << endl;

return 0;
}