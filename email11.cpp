// Lab 11a
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <iostream> 
#include <iomanip>
#include <string> 
using namespace std;

int main()
{
    //identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Begin term project by writing this small" << endl;
  cout << "program: prompt user for file input and output names," << endl;
  cout << "and print choices to the console." << endl << endl;

    //Declare variables
  string defaultInputFilename = "fileContainingEmails.txt";  // default input
   string inputFilename;
  string defaultOutputFilename = "copyPasteMyEmails.txt"; // default output
   string outputFilename = defaultOutputFilename;

    //prompt user for input file name
  cout << "Enter filename of input file (default = \"" << defaultInputFilename << "\"):\n     ";
  getline(cin, inputFilename);
  if (inputFilename == "") inputFilename = defaultInputFilename;

    //determine default value of output filename based on input value
  if (inputFilename != defaultInputFilename) outputFilename = inputFilename;

    //prompt user for output file name
  string tempOutput; // I hate to do this! :(
  cout << "Enter filename of output file (default = \"" << outputFilename << "\"):\n     ";
  getline(cin, tempOutput);
  if (tempOutput != "") outputFilename = tempOutput;

    //Display file names:
  cout << endl << "   File Input Name = " << inputFilename << endl <<  endl;
  cout << "   File Output Name = " << outputFilename << endl << endl << endl;

// getInOut( <-- this is for making this function a subprogram when you have the time/knowledge.

  return 0;
}