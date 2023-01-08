/*
WAP to check whether the candidate is eligible for Vote or not
*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int age;//Variable declaration
cout<<"Enter your Age:\n";
cin>>age;

if(age>=18)
{
 cout<<"Yes you are eligible for Vote";
}
else
{
 cout<<"Sorry you are not eligible for Vote";
}
getch();
}