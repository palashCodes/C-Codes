
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a = 0 ;
start :
cout << "\n" << ++a ;
if(a < 10)
   goto start ;
   
getch();

}
