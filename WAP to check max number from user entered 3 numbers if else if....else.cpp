/*
WAP to check max number from user entered 3 numbers if else if....else
*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

float no1,no2,no3,result;
cout<<"Enter three numbers";
cin>>no1>>no2>>no3;

if(no1>no2 && no1>no3)
    result=no1;
else if(no2>no3 && no2>no1)
    result=no2;
else
    result=no3;

cout<<"Maxmimum no is "<<result;
getch();
}