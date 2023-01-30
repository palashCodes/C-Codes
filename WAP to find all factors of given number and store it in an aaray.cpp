//WAP to find all factors of given number and store it in an aaray

#include<iostream.h>
#include<conio.h>
void main()//entry point of any program
{
 clrscr();//clear output screen
 //DEclaration
 int num,a[100],j=0;
 cout<<"Enter number : ";
 cin>>num;
 for(int i=1;i<=num;i++)
 {
    if(num%i==0)
    {
        a[j]=i;
        j++;
    }
 }
 for(i=0;i<j;i++)
 {
     cout<<a[i]<<"\n";
 }
 getch();
}