#include <iostream> 
using namespace std; 
  
int main() 
{ 
  int age1 = 19; 
  int age2 = 21; 
  int age3 = 30; 
  int averageAge; 
  
  averageAge = age1 + age2; 
  averageAge = averageAge + age3; 
  averageAge = averageAge / 3; 
  
  cout << "The average age is "; 
  cout << averageAge << endl; 
  
  return 0; 
}