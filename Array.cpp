//WAP to take user inputs in an array and display them
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int a[10];
//To take input from user
for(int i=0;i<10;i++)
{
  cout<<"Enter "<<i+1<<" number\n";
  cin>>a[i];
}
//To ptint numbers present in an array
for(i=0;i<10;i++)
cout<<i+1<<" number-> "<<a[i]<<"\n";

getch();

}
