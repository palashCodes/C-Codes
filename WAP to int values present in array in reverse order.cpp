//WAP to int values present in array in reverse order
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int a[10],r=0;
//To take input from user
for(int i=0;i<10;i++)
{
  cout<<"Enter "<<i+1<<" number\n";
  cin>>a[i];
}
clrscr();
cout<<a[9]<<"\n";
cout<<a[8]<<"\n";
cout<<a[7]<<"\n";
cout<<a[6]<<"\n";
cout<<a[5]<<"\n";
cout<<a[4]<<"\n";
cout<<a[3]<<"\n";
cout<<a[2]<<"\n";
cout<<a[1]<<"\n";
cout<<a[0]<<"\n";
getch();

}
