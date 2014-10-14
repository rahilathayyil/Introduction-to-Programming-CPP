// Lab 12d
// Programmer: Aaron Melocik
// Editor used: Windows 7 Notepad
// Compiler used: Microsoft Visual C++ 2010 Express

#include <algorithm> 
#include <fstream>
#include <iostream> 
#include <iomanip>
#include <string> 
using namespace std;

#include <cctype> 
// required for conversion to lowercase 
class toLower {public: char operator()(char c) const {return tolower(c);}}; 


struct Name
{
  string name;
  string nameLower;
};


void printNames(Name* name, int nNames)
{
  int i;
  for (i = 0; i < nNames; i++)
  {
    cout << name[i].name << endl;
  }
}

int main()
{
   // identifying output statements
  cout << "Programmer: Aaron Melocik" << endl;
  cout << "Description: Read names from a text file, sort them alphabetically," << endl;
  cout << "and print them to the screen." << endl << endl;

      //Declare variables
  ifstream fin;
  string defaultInputFilename = "names.txt";  // default input
   string inputFilename;
  int i = 0;
  bool isDuplicate = false;

    //prompt user for input file name
  cout << "Enter filename of input file (default = \"" << defaultInputFilename << "\"): ";
  getline(cin, inputFilename);
  if (inputFilename == "") inputFilename = defaultInputFilename;

    //open file for input
  fin.open(inputFilename); 
  if (!fin.good()) throw "I/O error"; 

  // create an empty list 
  const int MAX_NAMES = 8; // capacity 
  int nNames = 0; // initially empty 
  Name name[MAX_NAMES]; 

    //read and save names
  while (fin.good()) 
  { 
   // Create record and read it from file
   Name aName;
   getline(fin, aName.name);
   isDuplicate = false;  

   // Pass name to all lower-case for sorting/comparing
   aName.nameLower = aName.name;
   transform(aName.nameLower.begin(), aName.nameLower.end(), aName.nameLower.begin(), toLower()); 

     // IF line is not blank
   if (aName.name.length() > 0)
     {
      //IF line is not duplicate
      for (int j=0; j<nNames; j++)
        {
        if (aName.nameLower == name[j].nameLower) isDuplicate = true;
        } // FOR

       //Test for duplicate; if not, print
      if (isDuplicate == false)
        {
       // add record to list, if it's not full
       if (nNames < MAX_NAMES) 
       name[nNames++] = aName; 
         } // IF not duplicate
     } // IF not blank
  } // WHILE
  fin.close();

  //SORT
  for (int k = 0; k < nNames; k++)
  {
    for (int m = k + 1; m < nNames; m++)
    {
      if (name[k].nameLower > name[m].nameLower)
      {
        Name temp = name[k];
        name[k] = name[m];
        name[m] = temp;
      }
    }
  }


  // Print sorted output:
  printNames(name, nNames);

return 0;
}