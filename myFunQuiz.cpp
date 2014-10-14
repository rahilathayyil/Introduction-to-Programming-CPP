// Lab 8g
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <algorithm> 
#include <iostream> 
#include <string> 
using namespace std;

#include <cctype> 

  // required for conversion to lowercase 
class toLower {public: char operator()(char c) const {return tolower(c);}}; 


//*********************************************************


int questioner(string question, string answer)
{
  string userAnswer = "";

  cout << question;
    getline(cin, userAnswer);   
    transform(userAnswer.begin(), userAnswer.end(), userAnswer.begin(), toLower()); 

  if (answer == userAnswer)
    {
    cout << "  Correct!" << endl <<endl;
    return 1;
    }
  else
    cout << "  Sorry, the correct answer is \"" << answer << "\"." << endl << endl;
  return 0;
} //questioner


//*********************************************************


int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Ask the user 3 questions, test the validity of their answer," << endl;
  cout << "and tell the user whether their answer was correct or incorrect." << endl << endl;

    //variables
  int score = 0;
  int i = 0;
  string question = "question";
  string answer = "answer";
  string question0 = "The Antikythera mechanism - the earliest known mechanical analog \n"
                     "computer - was invented by this ancient civilization: ";
  string answer0 = "greek";

  string question1 = "In 1854 George Boole published a complete algebraic system using\n"
                     "binary states to compute math. The name / description of this\n"
                     "algebraic system is: ";
  string answer1 = "boolean";
  
  string question2 = "Virtually all electronic equipment today relies on this type\n"
                     "of electronic circuit, made prominent through advances in\n"
                     "semiconductor understanding and fabrication: ";
  string answer2 = "integrated";

    // Begin Questions separator (for formatting purposes)
  cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n" << endl;

    score += questioner(question0, answer0);
    score += questioner(question1, answer1);
    score += questioner(question2, answer2);

    //Report score
  cout << endl << "    You answered " << score << "/3 questions correctly. Thanks for playing!" << endl;

  return 0;
} // main

