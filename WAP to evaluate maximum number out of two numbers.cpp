/*
WAP to evaluate maximum number out of two numbers
*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 
int no1,no2;
cout<<"Enter two numbers ";
cin>>no1>>no2;

if(no1>no2)
{
cout<<"No1 is greater then No2";
}
else if(no1<no2)
{
cout<<"No2 is greater then No1";
}
else if(no1==no2)
{
cout<<"Sorry we cannot evaluate Max numbers because both are same number";
}
getch();
}