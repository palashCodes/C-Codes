//WAP to print even numbers using Do while
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int min,max,i;
cout<<"Enter range: ";
cin>>min>>max;
i=min;
do
{
if(i%2==0)
cout<<i<<"Even number\n";
i++;
}
while(i<=max);


getch();
}