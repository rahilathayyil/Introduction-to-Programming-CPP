#include <iostream> 
#include <string> 
using namespace std; 
  
void compare(string question, string answer) 
{ 
string userAnswer = "";

  cout << question;
    getline(cin, userAnswer);  
 
if (userAnswer == answer) cout << "     same\n" << endl;
else 
  cout << "     different\n" << endl;

  cout << userAnswer << endl;
  cout << answer << endl;
} // printName 
  
int main() 
{ 
string q1 = "yes or no? ";
string a1 = "yes";

  string question = "question";

while (true)
{
  cout << "\n\n" << question << "\n\n\n";
  question = question + q1;
  cout << "\n\n         " << question << "\n\n\n";
  compare(q1, a1); 
}

  return 0; 
} // main