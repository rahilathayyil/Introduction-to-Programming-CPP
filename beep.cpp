#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
//Beep(523,500);
//Beep(587,500);
//Beep(659,500);
//Beep(698,500);
//Beep(876,500);
//Beep(982,500);

Beep(784,600);
Beep(784,250); Beep(1050,600);
Beep(784,250); Beep(523,600);
system("pause");
return 0;
}