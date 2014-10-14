// Lab 13b
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <fstream> 
#include <iostream> 
#include <iomanip>
using namespace std;


struct Score
{
  int value;
  Score* next; // the link
}; // Score


int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Learn about linked lists by replacing an" << endl;
  cout << "array with one." << endl << endl;

  // create an empty linked list
  Score* head = 0;

  // Declare variables
  int i = 0; // loop counter 
  int scoreTotal = 0; 
  int nGreater = 0; 

  while(true) //reads and saves records...
    {
    // create a node and read its int value
    Score* tempScore = new Score; // watch for memory leak...
    cout << "Enter score " << i+1 << " [or enter \"-1\" to quit]: ";
    cin >> tempScore->value;
    cin.ignore(1000, 10);

    // check for sentinel value
    if (tempScore->value == -1) break;

    // add node to front of list (stack model)
    i++; // Increment number of scores entered number
    tempScore->next = head;
    head = tempScore;
    } // while true

  // traverse the list and get the average
  int nodes = 0; // to count the number of nodes in the list
  double sum = 0.0; // to accumulate the total of all scores
  Score* p;
  for (p = head; p; p = p->next)
  {
    sum += p->value;
    nodes++;
  }

  //determine any input
  if (nodes>0)
    {
  // calculate and print the average 
  double average = sum/nodes;
  cout << "\nThe average of these " << nodes << " numbers is " << average << "." << endl;

  // count #of scores > average 
  int nGreater = 0;
  Score* q;
  for (q = head; q; q = q->next)
    { 
    if (q->value > average) nGreater++; 
    } // for 

  cout << "     " << nGreater << " scores are greater than the average." << endl; 

  } // if count>0
  else
    cout << "     No scores were entered." << endl;
  
  // release borrowed memory
  while(head)
  {
    Score* next = head->next;
    delete head;
    head = next;
  } // while

  return 0; 
} // main