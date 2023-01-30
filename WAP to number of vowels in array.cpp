//WAP to number of vowels in array
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

char a[10];
int r=0;
//To take input from user
for(int i=0;i<10;i++)
{
  cout<<"Enter "<<i+1<<" character\n";
  cin>>a[i];
}
for(i=0;i<10;i++)
{
    if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='u'  || a[i]=='o' ||
    a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O'  || a[i]=='U'
    )
    {
    r++;
    }
}
if(r>=1)
{
    cout<<"Number of vowels are :\t"<<r;
}
else
{
    cout<<"Sorry no vowels present";
}
getch();

}
