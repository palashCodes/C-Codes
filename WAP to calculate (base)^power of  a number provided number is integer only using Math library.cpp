//WAP to calculate (base)^power of  a number provided number is integer only using Math library

//Single line comment 

/*
Hi I am Palash
Welcome to C++ trainning with Hiren Sir
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();

int num;
cout<<"Enter the number\n ";
cin>>num;

int pwr;
cout<<"Enter power of a number\n";
cin>>pwr;

cout<<"Square of entered number is "<<pow(num,pwr);

getch();
}