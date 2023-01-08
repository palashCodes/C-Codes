//WAP program to check whether the given character is an alphabet or not

#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
 
char ch;
cout<<"Enter character :\n";
cin>>ch;

if( (ch>='a' && ch<='z')  || (ch>='A' && ch<='Z') )
cout<<"Yes Its an alphabet";
else
cout<<"Sorry is is not an alphabet";

getch();
}