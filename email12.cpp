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

    //Declare variables
  ifstream fin; 
  ofstream fout;

    // File input/output function calls
  getIn();
  getOut();

    //Display file names:
  cout << endl << "   File Input Name = " << inputFilename << endl;
  cout << "   File Output Name = " << outputFilename << endl << endl << endl;




                //------------- EOF loop to process input file ------------------

  fin.open(inputFilename); 
  if (!fin.good()) throw "I/O error"; 

    while (true) 
  { 
    if (!fin.good()) break; 
  
    string lineFromFile; // is actually the entire line...
    getline(fin, lineFromFile); 

  // encode string lineFromFile by adding 1 to the ASCII code of each character
  for (int i = 0; i < lineFromFile.length(); i++) // for each char in the string... 
    if (lineFromFile[i] == '@') cout << lineFromFile << endl;
  	//fout << lineFromFile << endl;
	} // while

  fin.close();
  //fout.close();

  return 0;
}  // main



/*  INSTRUCTIONS	--
	if line contains '@', create variables s, e, and hasDot; use loops to find their values.
	  If values indicate the '@' is inside a valid e-mail address, print address to console. Repeat for each @ in a line.
	
	1) scan for '@'
	
	
	* No lists or duplicates
	If you open the output file, you are not doing this right.
	If your e-loop is NOT after your s-loop, you are not doing this right.
	If your s- and e-loops are not contained in the code block of an if-statement that tests for the character @, you are not doing this right.
	If you do not using the substring function explained in the project visuals attached to the lecture topic notes, you are not doing this right.
	If you do not create your own input files with which to test your program, you are not doing this right.
	If you do not test your program with the 10 .txt files provided in the project writeup, and see duplicate emails printed, you are not doing this right.

	*** if a line contains the character @ more than once, it should be printed once for each
	*/



//make struct called "EmailList" and an EmailList variable named "isEmail."
//"isEmail" has a box (string type) for the contents of the line, and another boolean for email=t/f


/*
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









/*  OLD CODE:

    while (true) 
  { 
    if (!fin.good()) break; 
  
    string lineFromFile; // is actually the entire line...
    getline(fin, lineFromFile); 
    bool hasAt = false; // boolean flag for line having '@'

  // encode string lineFromFile by adding 1 to the ASCII code of each character
  for (int i = 0; i < lineFromFile.length(); i++) // for each char in the string... 
    if (lineFromFile[i] == '@') hasAt = true;

  	//fout << lineFromFile << endl;
    if (hasAt == true) cout << lineFromFile << endl; 
	} // while

*/