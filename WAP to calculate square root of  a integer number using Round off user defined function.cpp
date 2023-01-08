//WAP to calculate square root of  a integer number using Round off user defined function

//Single line comment 

/*
Hi I am Palash
Welcome to C++ trainning with Hiren Sir
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
float round(float var)
{

    int value = (var * 100) + .5;
    return value*1.0/ 100.0;
}
void main()
{
clrscr();

int num;
float result=0.0;
cout<<"Enter the number\n ";
cin>>num;

result=round(sqrt(num));

cout<<"Square of entered number is "<<result;

getch();
}