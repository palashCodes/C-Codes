/* WAP program to print numbers in decending order */

#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr(); 
int num;
cout<<"Enter number-> ";
cin>>num;

//for(initialization;condition;incr/dec opr)
for(int i=num;i>=1;i--)
{
 cout<<i<<"\n";
}
    
   getch();
}