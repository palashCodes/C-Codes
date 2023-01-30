//WAP to demonstrate function for sum of two numbers

#include<iostream.h>
#include<conio.h>
int sum(int,int);        // function prototype/Method signature
int a=10;               //Global variable
void main()
{
   int a, b, res;//Local variable
   cout<<"Enter two numbers: ";
   cin>>a>>b;
   res = sum(a, b);          // function calling
   cout<<"\nResult = "<<res;
   cout<<endl;

   return;
}

int sum(int x, int y)        // function definition
{
   int add;
   add = x+y;
   cout<<"A is in function "<<a;//It will print global variable value of a 
   return add;
}