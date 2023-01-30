//WAP to find HCF of given two numbers

#include<iostream.h>
#include<conio.h>
void main()//entry point of any program
{
 clrscr();//clear output screen
 //DEclaration
 int num1,num2,limit,hcf=0;
 cout<<"Enter number : ";
 cin>>num1>>num2;
 limit=num1>num2?num1:num2;
 
 for(int i=2;i<=limit;i++)
 {
    if(num1%i==0 && num2%i==0)
    {
        hcf=i;
    }
 }

     cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<hcf<<"\n";

 getch();
}