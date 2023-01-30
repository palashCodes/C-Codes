//C++ program to calculate the price after applying the discount
#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float P1,P2,P3,P4,P5,ttl;
cout<<"enter the prices of five apparals you are buying\n";
cin>>P1>>P2>>P3>>P4>>P5;
ttl=(P1+P2+P3+P4+P5);
cout<<"the sum of the purchase is "<<ttl<<" dollars\n";
/*
>500    50% off 
>400    40% off 
>200    20% off
<200    pls buy more to get a discount

*/
if(ttl>500)
{
cout<<"your bill amount after discount is:- "<<(ttl/2)<<" $\nyou got a discount of 50%";
}
else if(ttl>400)
{
cout<<"your bill amount after discount is:- "<<(ttl-((2*ttl)/5))<<" $\nyou got a discount of 40%";
}
else if(ttl>200)
{
cout<<"your bill amount after discount is:- "<<(ttl-((ttl)/5))<<" $\nyou got a discount of 20%";
}
else
{
cout<<"your bill amount is same as before which is:- "<<(ttl)<<" $\nyou didnt get any discount pls buy something more to avail discount";
}
getch();    
}