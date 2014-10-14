// Lab 13a
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <deque>
#include <fstream>
#include <iostream> 
#include <iomanip>
#include <string> 

using namespace std;

  string defaultInputFilename = "fileContainingEmails.txt";  // default input
   string inputFilename;
  string defaultOutputFilename = "copyPasteMyEmails.txt"; // default output
   string outputFilename = defaultOutputFilename;

  string lineFromFile; // is actually the entire line...

  int emailPrintCounts = 0;

struct Email
  {
  char c;
  Email* next;
  }; // Email

bool testValid(string lineFromFile, int charAt)
  {
  bool hasDot = false;
  int tempCharAt = charAt;
      //scan forward
  while(true) // check for right function
    {
     if (lineFromFile[tempCharAt] == ' ' || lineFromFile[tempCharAt] == ',' || lineFromFile[tempCharAt] == ';') break;
     else if (lineFromFile[tempCharAt] == '.') hasDot = true;
     tempCharAt++;
    } // while
  return hasDot;
  } // testValid

void getIn()  //prompt user for input file name
  {
  cout << "Enter filename of input file (default = \"" << defaultInputFilename << "\"):\n     ";
  getline(cin, inputFilename);
  if (inputFilename == "") inputFilename = defaultInputFilename;

    //determine default value of output filename based on input value
  if (inputFilename != defaultInputFilename) outputFilename = inputFilename;
  } // getIn


void getOut()  //prompt user for output file name
  {
  string tempOutput; // I hate to do this! :(
  cout << "Enter filename of output file (default = \"" << outputFilename << "\"):\n     ";
  getline(cin, tempOutput);
  if (tempOutput != "") outputFilename = tempOutput;
  } // getOut


int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Prompt the user for input & output filenames," << endl;
  cout << "open and read the input file, and print to the console the" << endl;
  cout << "lines that contain the character '@'." << endl << endl;

  // create an empty linked list
  //Email* head = 0;

    //Declare variables
  ifstream fin; 
  ofstream fout;

    // File input/output function calls
  getIn();
  getOut();

    // Display file names confirmation:
  cout << endl << "   File Input Name = " << inputFilename << endl;
  cout << "   File Output Name = " << outputFilename << endl << endl << endl;

                //------------- EOF loop to process input file ------------------

  fin.open(inputFilename); 
  if (!fin.good()) throw "I/O error"; 

    while (true) 
  { 
    if (!fin.good()) break; 
    getline(fin, lineFromFile); // lineFromFile declared as universal variable


//cout<<"test"<<endl<<endl;


  // encode string lineFromFile by adding 1 to the ASCII code of each character
  for (int i = 0; i < lineFromFile.length(); i++) // for each char in the string... 
    if (lineFromFile[i] == '@')
      {
      int charAt = i; // case @ char of line      
      if (testValid(lineFromFile, charAt) == true) // only runs loop if valid e-mail address
        {
           string email = "";
         //add lines to front of email string
         for (int s = charAt; s>=0; s--)
           {
            if (lineFromFile[s] == ' ' || lineFromFile[s] == ',' ||
                lineFromFile[s] == ';' || lineFromFile[s] == '	' ||
                lineFromFile[s] == ':' || lineFromFile[s] == '=' ||
                lineFromFile[s] == '>' || lineFromFile[s] == '<' ||
                lineFromFile[s] == '/' || lineFromFile[s] == '\\' ||
                lineFromFile[s] == '(' || lineFromFile[s] == ')' ||
                lineFromFile[s] == ']' || lineFromFile[s] == '[' ||
                lineFromFile[s] == '{' || lineFromFile[s] == '}') break;
            email = lineFromFile[s] + email;
           } // for s for adding to front of email string

         //add lines to end of email string
         for (int e = charAt+1; lineFromFile[e-4] != '.'; e++) // ************** VALID? If not do logic inside loop
           {
            email = email + lineFromFile[e];
           } // for e for adding to end of email string

         cout << email << endl;
         emailPrintCounts++;
 	//fout << email << endl;
         } // valid e-mail
      } // if lineFromFile[i] == '@'



  } // while

//EmailChar = struct for e-mail characters?
  fin.close();
  //fout.close();

  if (emailPrintCounts == 0) cout << "There are no e-mails in this file." << endl;

  return 0;
}  // main




/*
//NOT checking for dupes right now. Just find valid e-mail, then print to output.
-	*** if a line contains the character @ more than once, it should be printed once for each

//in project, "bool hasDup = false" (from hasPerfectScore) AFTER decided valid e-mail adress, but BEFORE You add e-ail address to list
//then loop to go through: if i<[list name counter]


1) Test for ".com?" // I think test for "hasDot..."
2) If good, add s to head;
3) after s, add e to end until i-3 == '.'
4) then make all the characters in the list the value fo the email address...
5) make a boolean check for UNIQUE input.
-	
//-------------------------------------------
// add node to list (stack model)
//   s->next = head;
//BASICALLY scan the previous letter; if it is not == ' '; add to start (s) of list
// add node to END of the list (queue model)
//   Student* e, *prev;
//   for (e = head, prev = 0; e; prev = e, e = e->next);
//   s->next = e;
//   if (prev) prev->next = s;
//   else head = s;
//-------------------------------------------
//e-loop AFTER s-loop
//use substring function explaijed in project visuals


//make struct called "EmailList" and an EmailList variable named "isEmail."
//"isEmail" has a box (string type) for the contents of the line, and another boolean for email=t/f


  // create an empty list 
  const int MAX_SCORES = 100; // capacity 
  int nScores = 0; // initially empty 
  int score[MAX_SCORES]; 
  
  // read and save the scores 
  while (fin.good()) 
  { 
    // read a score from the file 
    int aScore; 
    fin >> aScore; 
    fin.ignore(1000, 10); 
  
      // add score to list, if it's not full 
    if (nScores < MAX_SCORES) 
      score[nScores++] = aScore; 
  } // while 
  fin.close(); 
*/