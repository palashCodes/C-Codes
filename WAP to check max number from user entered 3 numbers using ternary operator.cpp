/*
WAP to check max number from user entered 3 numbers using ternary operator
*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

float no1,no2,no3,result;
cout<<"Enter three numbers";
cin>>no1>>no2>>no3;
//      Condition       true                          false
result=(no1>no2)?( (no1>no3)?(no1):(no3) ) : ( (no2>no3)?(no2):(no3) );
                  //con1      true false        con2     true  false
cout<<"Maxmimum no is "<<result;
getch();
}