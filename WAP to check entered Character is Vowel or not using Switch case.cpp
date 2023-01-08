/*
Vowel-a e i o u
Consonants- Other then Vowel
WAP to check entered Character is Vowel or not using Switch case
*/

#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();

char ch;//character variable declaration

cout<<"Enter character:\n";
cin>>ch;
switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
{
    cout<<"Its Vowel";
    break;
}
default:
{
    cout<<"Its consonant";
    break;    
}
}
getch();
}