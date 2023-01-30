/*WAP to print below patten

     *
    **
   ***
  ****
 *****
  ****
   ***
    **
     *
*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,num;
cout<<"Enter number of lines:\n";
cin>>num;
//For row initialization
for(i=1;i<num;i++)
{
    for(j=num;j>=i;j--)
	{
	    cout<<" ";
    } 
    for(j=1;j<=i;j++)
	{
	    cout<<"*";
    } 
    cout<<"\n";
}
for(i=1;i<=num;i++)
{
    for(j=1;j<=i;j++)
	{
	    cout<<" ";
    } 
    for(j=num;j>=i;j--)
	{
	    cout<<"*";
    } 
    
    cout<<"\n";
}
getch();

}