//WAP to take user inputs in an array and display sum,avg of them and calculate above average students
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
int sum=0;
for(i=0;i<10;i++)
    sum=sum+a[i];
cout<<"Sum of 10 numbers in an array is "<<sum<<"\n";
cout<<"Avg of 10 numbers in an array is "<<(sum*1.0)/10.0<<"\n";

cout<<"Below are the list of students who got above average marks: \n";
for( i=0;i<10;i++)
{
 if(a[i]>((sum*1.0)/10.0))
 {
     cout<<"Roll number "<<i+1<<"\n";
 }
}




getch();

}
