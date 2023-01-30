  //C++ Program to find factors and store them in array
  #include<iostream.h>
  #include<conio.h>
  void main()
   {
   clrscr();    
   int NN,i,a[100],j;
   cout<<"input a number\n";
   cin>>NN;
   cout<<"\n\n"<<"the factors of "<<NN<<" are:-\n";
    for(i=1;i<=NN;i++)
     {
      if (NN%i==0)
     {
        for(j=0;j<=i;j++)
        {
            a[j]=i;
        }
   cout<<i<<"\n";
     }
     }
    
     cout<<a[0];
  getch();    
  }