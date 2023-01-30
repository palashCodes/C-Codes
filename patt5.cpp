/*WAP to print below patten
1
12
123
1234
12345
123456

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
        cout<<j;
 cout<<"\n";
}
getch();

}