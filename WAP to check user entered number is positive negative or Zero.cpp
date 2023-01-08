/*
WAP to check user entered number is positive negative or Zero
*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 
int N1;
cout<<"Enter number \n";
cin>>N1;

if(N1>0)
{
cout<<"No1 IS POSITIVE";
}
else if(N1==0)
{
cout<<"the number is neither positive nor negative";
}
else
{
cout<<"the number is negative";
}
getch();
}