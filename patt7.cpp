/*WAP to print below patten
A
BC
DEF
GHIJ
KLMNO

*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,num;
char ch='A';
cout<<"Enter number of lines:\n";
cin>>num;
for(i=1;i<=num;i++)
{ 
    for(j=1;j<=i;j++)
    {
        cout<<ch;
        ch++;
    }
 cout<<"\n";
}
getch();

}