/*WAP to print below patten
1
22
333
4444
55555
666666

*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,num;
cout<<"Enter number of lines:\n";
cin>>num;
for(i=1;i<=num;i++)
{ 
    for(j=1;j<=i;j++)
        cout<<i;
 cout<<"\n";
}
getch();

}