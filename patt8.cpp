/*WAP to print below patten
A
AB
ABC
ABCD
ABCDE

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
    ch='A';
    for(j=1;j<=i;j++)
    {   
        cout<<ch;
        ch++;
    }
 cout<<"\n";
}
getch();

}