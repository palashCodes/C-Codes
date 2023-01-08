/*
Vowel-a e i o u
Consonants- Other then Vowel
WAP to check entered Character is Vowel or not using If else
*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

char ch;//character variable declaration

cout<<"Enter character:\n";
cin>>ch;

if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
{
cout<<"Its Vowel";
}
else
{
cout<<"Its Consonants";
}

getch();
}