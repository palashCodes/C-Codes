/*WAP to print below patten
    *
   ***
  *****
 *******
*********
*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,num,j,k;
cout<<"Enter number of lines:\n";
cin>>num;
for(i=1;i<=num;i++)
{
    for(j=num;j>=i;j--)
	{
	    cout<<" ";
    } 
    for(j=1;j<=i;j++)
	{
	    cout<<"*";
    } 
    for(k=2;k<=i;k++)
	{
	    cout<<"*";
    } 
    
    cout<<"\n";
}

getch();

}
