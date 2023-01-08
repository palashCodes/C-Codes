/*
WAP to check max number from user entered 2 numbers using ternary operator
*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

float no1,no2,result;
cout<<"Enter two numbers";
cin>>no1>>no2;

result=(no1>no2)?no1:no2;

cout<<"Maxmimum no is "<<result;
getch();
}