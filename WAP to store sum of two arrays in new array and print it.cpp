//WAP to store sum of two arrays in new array and print it
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

int a[5],b[5],c[5];

//To take input from user
for(int i=0;i<5;i++)
{
  cout<<"Enter "<<i+1<<" number for array1\n";
  cin>>a[i];
}

for(int j=0;j<5;j++)
{
  cout<<"Enter "<<j+1<<" number for array2\n";
  cin>>b[j];
}

for(i=0;i<5;i++)
{
    c[i]=a[i]+b[i];
}

cout<<"Sum of array1 and array2 is stored in array3 which is: \n";
for(i=0;i<5;i++)
{
    cout<<c[i]<<"\n";
}

getch();

}
