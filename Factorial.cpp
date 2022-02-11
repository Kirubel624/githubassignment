#include <iostream>

void fact()
     {
      long int f=1;
      int c=1,n;
      cout<<"enter number to find its factorial:";
      cin>>n;
      while(c<=n)
      {
                 f=f*c;
                 c+=1;
      }
                 cout<<"\nfactorial of "<<n<<" is :"<<f<<endl;
      }
