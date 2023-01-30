//WAP to calculate npr
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
cout<<"\n\n"<<"the factorial of "<<"(n-r)"<<" is :-\n";
for(j=(N-R);j>=1;j--)
{
fact2=fact2*j;
}
cout<<fact2;
cout<<"\nNPR= "<<(fact/fact2);

getch();
}