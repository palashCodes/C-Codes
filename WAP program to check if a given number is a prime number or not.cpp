/* WAP program to check if a given number is a prime number or not */

#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
 
    int num,i,maxlim,nooffact=0;
    cout<<"Enter Number:\n";
    cin>>num;
    maxlim=num/2;
    
    for(i=2;i<=maxlim;i++)
    {
        if(num%i==0)
        {
         nooffact++;
         break;
        }
    }
    if(num==1)
    {
        cout<<"Its neither prime nor composite number";
    }
    else if(nooffact>0)
    {
        cout<<"Not a prime number";
    }
    else
    cout<<"Prime number";
   getch();
}