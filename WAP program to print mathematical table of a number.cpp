/* WAP program to print mathematical table of a number*/

#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr(); 
 int i,num;
 cout<<"Enter number->";
 cin>>num;

 for(i=1;i<=20;i++)
{

 cout<<num<<"x"<<i<<"="<<num*i<<"\n";

}
   getch();
}