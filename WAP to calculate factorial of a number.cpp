/* WAP to calculate factorial of a number */

#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   unsigned long num, fact=1;
   cout<<"Enter a number: ";
   cin>>num;
   
   while(num)
   {
      fact = fact*num;
      num--;
   }
   cout<<"The factorial of the number is "<<fact;
   getch();
}