//WAP to find number of odd and even numbers in an array
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
if(a[0]%2==0)
{
    r++;
    
}
if(a[1]%2==0)
{
    r++;
    
}
if(a[2]%2==0)
{
    r++;
    
}
if(a[3]%2==0)
{
    r++;
    
}if(a[4]%2==0)
{
    r++;
    
}
if(a[5]%2==0)
{
    r++;
    
}if(a[6]%2==0)
{
    r++;
    
}
if(a[7]%2==0)
{
    r++;
    
}
if(a[8]%2==0)
{
    r++;
    
}
if(a[9]%2==0)
{
    r++;
    
}
cout<<"the number of even numbers in the array are "<<r;
cout<<"\n"<<"the number of odd numbers in array are "<<(10-r);
getch();

}
