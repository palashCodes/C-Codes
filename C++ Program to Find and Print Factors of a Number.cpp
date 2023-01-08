//C++ Program to Find and Print Factors of a Number
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();    
 int NN,i;
 cout<<"input a number\n";
 cin>>NN;
 cout<<"\n\n"<<"the factors of "<<NN<<" are:-\n";
 for(i=1;i<=NN;i++)
 {
 if (NN%i==0)
 {
cout<<i<<"\n";
 }
 }
    
    
    
    

getch();    
}