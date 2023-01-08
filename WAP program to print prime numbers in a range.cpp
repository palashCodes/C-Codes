/* WAP program to print prime numbers in a range */

#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
 
    int min,max,i,j,maxlim,nooffact=0;
    cout<<"Enter range:\n";
    cin>>min>>max;
    for(i=min;i<=max;i++)
    {
	maxlim=i/2;
	nooffact=0;
	//cout<<"maxlimit"<<maxlim<<"\n";
    	for(j=2;j<maxlim;j++)
    	{
        	if(i%j==0)
        	{
        	 nooffact++;
        	 break;
        	}
    	}
    //	cout<<"Nooffact "<<nooffact<<"\n";
    //	cout<<"i="<<i<<"\n";
    if(nooffact<=0)
    {
        cout<<i<<"\t";
    }
    }
   
   getch();
}