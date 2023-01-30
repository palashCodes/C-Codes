/*
WAP to print below patten
*
**
***
****
*****
****
***
**
*

*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int num,i,j;
cout<<"enter a number\n";
cin>>num;
for(i=1;i<=num;i++)
{
    for(j=1;j<=i;j++)
	{
	    cout<<"*";
    } 
    cout<<"\n";
}
for(i=1;i<=num;i++)
{
for(j=num;j>i;j--)
{
    cout<<"*";
}
cout<<"\n";
}

    
    
    
getch();    
}
