#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
float princ;
cout<<"input the money used\n";
cin>>princ;
float RRRR;
cout<<"input the interest\n";
cin>>RRRR;
int tim;
cout<<"input the time the money is used in years\n";
cin>>tim;
float res=((pow(((RRRR/100)+1),tim))*princ)-princ;
cout<<"the value of CI is "<<res;
getch();
}
