/*
WAP to create calculator using if else if......else
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

if(choice==1)
{
    result=no1+no2;
    cout<<"Addition = "<<result;
}
else if(choice==2)
{
    result=no1-no2;
    cout<<"Subtraction = "<<result;
}
else if(choice==3)
{
    result=no1*no2;
    cout<<"Multiplication = "<<result;
}
else if(choice==4)
{
    result=no1/no2;
    cout<<"Division = "<<result;
}
else if(choice==5)
{
    
    result=(int)no1%(int)no2;
    cout<<"Modulus = "<<result;
}
else
{
cout<<"Sorry wrong choice";    
}
getch();
}