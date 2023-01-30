//wap to calculate combination Ncr
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();    
int N,R,i,fact=1,fact2=1,j,k,fact3=1;
cout<<"input the value of N: -\n";
cin>>N;
cout<<"now input the value of R (which should be less than N): -\n";
cin>>R;
cout<<"\n\n"<<"the factorial of "<<N<<" is :-\n";
for(i=N;i>=1;i--)
{
fact=fact*i;
}
cout<<fact;
cout<<"\n"<<"the factorial of "<<"("<<N<<"-"<<R<<")"<<" is: -\n";
for(j=(N-R);j>=1;j--)
{
fact2=fact2*j;
}
cout<<fact2;
cout<<"\n"<<"the factorial of "<<R<<" is: - ";
for(k=R;k>=1;k--)
{
fact3=fact3*k;
}
cout<<fact3<<"\n";
float fact4;
fact4=(fact/(fact2*fact3));
cout<<N<<"C"<<R<<" is :-"<<fact4;
getch();
}