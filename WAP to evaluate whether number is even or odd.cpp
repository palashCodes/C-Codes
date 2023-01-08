/*
WAP to evaluate whether number is even or odd
*/
#include <conio.h>
#include <iostream.h>
void main()
{
clrscr();
int N1;
cout<<"enter a number\n";
cin>>N1;
int RES=(N1%2);
if(RES==0)
{
cout<<"the number is an even number";
}

else
{
cout<<"the number is odd";
}   
getch();
}