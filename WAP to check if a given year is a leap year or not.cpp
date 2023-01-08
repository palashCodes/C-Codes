//WAP to check if a given year is a leap year or not

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int year;
cout<<"Enter year\n";
cin>>year;

if( (year%4==0 && year%100!=0) || year%400==0)
{
    cout<<year<<" is leap year";
}
else
{
    cout<<"Not leap year";
}
getch();
}