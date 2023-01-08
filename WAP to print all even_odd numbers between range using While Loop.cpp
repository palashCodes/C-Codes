//WAP to print all even/odd numbers between range using While Loop

#include<conio.h>
#include<iostream.h>
void main()
{

int min,max,i;
cout<<"Enter Range";
cin>>min>>max;


i=min;
cout<<"Even numbers are : \n";
while(i<=max)
{
    if(i%2==0)
    cout<<i<<"\t";
i++;
}

i=min;
cout<<"\nodd numbers are : \n";
while(i<=max)
{
    if(i%2!=0)
    cout<<i<<"\t";
i++;
}


}
