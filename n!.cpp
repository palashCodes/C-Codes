//WAP to calculate factorial of the given number
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();    
int num,i,fact=1;
cout<<"input a number\n";
cin>>num;
cout<<"\n\n"<<"the factorial of "<<num<<" is:-\n";
for(i=num;i>=1;i--)
{ 
fact=fact*i;
}
cout<<fact;
getch();
}
