//WA C++ Program to Find and Print the Sum of First n Natural Numbers
#include<iostream.h>
#include<conio.h>
void main()
{
int i,num,sum=0;

cout<<"Enter number";
cin>>num;

for(i=1;i<=num;i++)
{
 sum=sum+i;
}
cout<<"Sum of "<<num<<" numbers is "<<sum;

getch();
}

/* Working
num=6


i=1	sum=0	

i	sum	sum=sum+i	i++
1	0	sum=0+1=1	i-->1+1=2
2	1	sum=1+2=3	i-->2+1=3
3	3	sum=3+3=6	i-->3+1=4
4	6 	sum=6+4=10	i-->4+1=5
5	10	sum=10+5=15	i-->5+1=6
6	15	sum=15+6=21	i-->6+1=7
7	false
*/