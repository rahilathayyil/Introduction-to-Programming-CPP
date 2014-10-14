// Lab 14a
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <algorithm> 
#include <deque>
#include <fstream>
#include <iostream> 
#include <iomanip>
#include <string> 

using namespace std;

#include <cctype>

// required for conversion to lowercase 
  class toLower {public: char operator()(char c) const {return tolower(c);}};

  string defaultInputFilename = "fileContainingEmails.txt";  // default input
   string inputFilename;
  string defaultOutputFilename = "copyPasteMyEmails.txt"; // default output
   string outputFilename = defaultOutputFilename;

  string lineFromFile; // is actually the entire line...

  int emailPrintCounts = 0;


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


bool testValid(string lineFromFile, int charAt)
  {
  bool hasDot = false;
  int tempCharAt = charAt+1;

      //scan forward
  for (int i = 0; i < (lineFromFile.length() - charAt); i++)
    {
     if (lineFromFile[tempCharAt] == '.') hasDot = true;
     else if (lineFromFile[tempCharAt] == ' ' || lineFromFile[tempCharAt] == ',' ||
              lineFromFile[tempCharAt] == ';' || lineFromFile[tempCharAt] == '@') break;
     tempCharAt++; // increment forward to next char & check again.
    } // for

      // scan one backward
  if (lineFromFile[charAt - 1] == '.' || lineFromFile[charAt - 1] == '@' ||
      lineFromFile[charAt - 1] == ' ') hasDot = false;

  return hasDot;
} // testValid


struct ValidEmail
  {
  string validEmail;
  }; // ValidEmail


bool checkDups(string lowerEmail, deque<ValidEmail>& lowerFinalEmails)
{
  bool isDup = false;
  for (int i = 0; i < lowerFinalEmails.size(); i++)
    {
      if (lowerFinalEmails[i].validEmail == lowerEmail) isDup = true;
    } // for - check against lower-case cases
  return isDup; // returns boolean result.
} // checkDups


int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Prompt the user for input & output filenames," << endl;
  cout << "open and read the input file, and print to the console the" << endl;
  cout << "lines that contain the character '@'." << endl << endl;

    // create an empty deque list for finalEmails and lowerFinalEmails
  deque<ValidEmail> finalEmails; // ValidEmail list
  deque<ValidEmail> lowerFinalEmails; // lowerFinalEmails for duplicate check

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
    if (!fin.good()) break; // check integrity of file input
    getline(fin, lineFromFile); // lineFromFile declared as universal variable

  // encode string lineFromFile by adding 1 to the ASCII code of each character
  for (int i = 0; i < lineFromFile.length(); i++) // for each char in the string... 
    if (lineFromFile[i] == '@')
      {
      int charAt = i; // case @ char of line      
      if (testValid(lineFromFile, charAt) == true) // only runs loop if valid e-mail address
        {
       // ---------------- THIS CODE CREATES THE EMAIL ADDRESS ---------------
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
         for (int e = charAt+1; lineFromFile[e-4] != '.'; e++) // Add letters to end of e-mail string until 3 char after '.'
           {
            email = email + lineFromFile[e];
           } // for e for adding to end of email string

  // Transform email and finalEmails to lowercase *lowerEmail* and *lowerFinalEmails*
         string lowerEmail = email;
         transform(lowerEmail.begin(), lowerEmail.end(), lowerEmail.begin(), toLower());
 
  // Check for duplicates
         if (checkDups(lowerEmail, lowerFinalEmails) == false)
           {
           ValidEmail aFinalEmails;
           aFinalEmails.validEmail = email;
           finalEmails.push_back(aFinalEmails);
             //PRINT to console
           cout << email << endl;
           aFinalEmails.validEmail = lowerEmail;
           lowerFinalEmails.push_back(aFinalEmails); // ADD string email to deque here.
         emailPrintCounts++;

 	//fout << email << endl;
           } // if checkDups
         } // valid e-mail loop --> Also ends "string email" var.
      } // if lineFromFile[i] == '@'
  } // while

  fin.close();
  //fout.close();

  if (emailPrintCounts == 0) cout << "There are no e-mails in this file." << endl;

/////////////////////////////////////////////
/*
  for (int i=0; i< finalEmails.size(); i++)
    {
     cout << finalEmails[i].validEmail << endl;
    } // for
*/
//////////////////////////////////////////////

  return 0;
}  // main




/*
//in project, "bool hasDup = false" (from hasPerfectScore) AFTER decided valid e-mail adress, but BEFORE You add e-ail address to list
//then loop to go through: if i<[list name counter]
*/




/* Remember in your final version of the project to remove the printing of emails to the console
screen as you add them to the list. In that version, print them after the EOF loop closes
and you determine that the list of emails is not empty. Then you can print them in a loop
that traverses the list -- one per line to the console, and semicolon-space delimited to the output file.*/