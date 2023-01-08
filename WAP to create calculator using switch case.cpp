/*
WAP to create calculator using switch case
*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

float no1,no2,result;
cout<<"Enter two numbers";
cin>>no1>>no2;
int choice;

cout<<"Enter your choice from below:\n"<<"1 Addition\n2 Subtraction\n3 Multiplication\n4 Division\n5 Modulus\n"; 
cin>>choice;

switch(choice)
{
case 1:
{
    result=no1+no2;
    cout<<"Addition = "<<result;
    break;
}
case 2:
{
    result=no1-no2;
    cout<<"Subtraction = "<<result;
    break;
}
case 3:
{
    result=no1*no2;
    cout<<"Multiplication = "<<result;
    break;
}
case 4:
{
    result=no1/no2;
    cout<<"Division = "<<result;
    break;
}
case 5:
{
    result=(int)no1%(int)no2;
    cout<<"Modulus = "<<result; 
    break;
}
default:
{
cout<<"Sorry wrong choice";    
break;
}
}
getch();
}