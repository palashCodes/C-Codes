#include <conio.h>
#include <iostream.h>
#include <math.h>
void main()
{
clrscr();
float M1;
cout<<"ENTER THE MARKS OF THE PHYSICS TEST OUT OF 50\n";
cin>>M1;
float M2;
cout<<"ENTER THE MARKS OF THE CHEMISTRY TEST OUT OF 50\n";
cin>>M2;
float M3;
cout<<"ENTER THE MARKS OF THE MATH TEST OUT OF 50\n";
cin>>M3;
float M4;
cout<<"ENTER THE MARKS OF THE CS TEST OUT OF 50\n";
cin>>M4;
float M5;
cout<<"ENTER THE MARKS OF THE ENGLISH TEST OUT OF 50\n";
cin>>M5;
cout<<"THE PERCENTAGE OBTAINED BY THE STUDENT IS \n"<<((M1+M2+M3+M4+M5)/250)*100<<"%";
getch();
}