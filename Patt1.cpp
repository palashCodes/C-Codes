/*WAP to print below patten
*
**
***
****
*****
*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,num,j;
cout<<"Enter number of lines:\n";
cin>>num;
for(i=1;i<=num;i++)
{
    for(j=1;j<=i;j++)
	{
	    cout<<"*";
    } 
    cout<<"\n";
}

getch();

}
