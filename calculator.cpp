#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

  char op;
using namespace std;

void sum()
   {

    int sum = 0;
    int n;
    int numberitems;
    cout << "Enter the number of items: \n";
    cin >> numberitems;

    for(int i=0;i<numberitems;i++)
    {
        cout<< "Enter number "<<i<<":\n\n" ;
        cin>>n;
        sum+=n;
    }
    cout<<"sum is: "<< sum<<endl<<endl;

    }
void diff()
    {
     int diff;
     int n1,n2;
     cout<<"enter the two numbers you want to find the difference of:\n\n";
     cout<<"enter first number:";
     cin>>n1;
     cout<<"\nenter second number:";
     cin>>n2;
     diff=n1-n2;
     cout<<"\ndifference is:"<<diff<<endl<<endl;
     }
    void pro()

    {
     int pro=1;
     int n;
     int numberitems;
     cout<<"enter number of items:\n";
     cin>>numberitems;
     for(int i=0;i<=numberitems;i++)
     {
             cout<<"\nenter item "<<i<<":";
             cin>>n;
             pro*=n;
     }

     cout<<"product is:"<<pro<<endl<<endl;

     }


      void div()
     {
      int div;
      int n1;
      int n2;
      cout<<"enter 2 numbers to find their quotient\n\n";
      cout<<"enter numerator:";
      cin>>n1;
      cout<<"\nenter denominator:";
      cin>>n2;
      div=n1/n2;
      cout<<"\nquotient is:"<<div<<endl<<endl;
      }

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
      
      void expo()
     {
          long double res=1,p;
     double e=2.718281828;
     cout<<"enter power of exponential function:";
     cin>>p;
     for(int i=1;i<=p;i++)
     {
      res=e*res;
     }
      cout<<" e^ "<<p<<" is :"<<res<<endl;

           }
           
      void cosf()
    {
     double cosf;
     double n1;
     cout<<"enter number you want to find cosine of:\n\n";
     cin>>n1;
     cosf=cos(n1);
     cout<<"\nCosine of number is:"<<cosf<<endl<<endl;
     }
void sinf()
    {
     double sinf;
     double n1;
     cout<<"enter number you want to find sine of:\n\n";
     
     cin>>n1;
     sinf=sin(n1);
     cout<<"\Sine of number is:"<<sinf<<endl<<endl;
     }

           void power()
     {
     long int p;
     int res=1,n;
     cout<<"enter number:";
     cin>>n;
     cout<<"\nenter power:";
     cin>>p;
     for(int i=1;i<=p;i++)
     {
      res=n*res;
     }
      cout<<n<<"\n power "<<p<<" is :"<<res<<endl;
     }
void sq()
     {
     float s;
     int n;
     cout<<"enter number to find its square root:";
     cin>>n;
     s=sqrt(n);
     cout<<"\nsquare root of "<<n<<" is :"<<s<<endl;
     }
      int main()
{


    system("cls");
    do
    {

    system("pause");
    system("cls");
    cout<<"***which operation you want to perform***\n";
    cout<<"press a for exit\n";
    cout<<"press b for addition operation\n";
    cout<<"press c for subtraction operation\n";
    cout<<"press d for multiplication operation\n";
    cout<<"press e for division operation\n";
    cout<<"press f for power calculation \n";
    cout<<"press g for square root calculation\n";
    cout<<"press h for factorial calculation\n";
    cout<<"press i for exponential calculation\n";
    cout<<"press j for cosine calculation\n";
    cout<<"press k for sine calculation\n";
    cout<<"Please select an option:";
    cin>>op;
    switch(op)
    {
              case 'b':
              sum();
              break;
              case 'c':
              diff();
              break;
              case 'd':
              pro();
              break;
              case 'e':
              div();
              break;
              case 'f':
              power();
              break;
              case 'g':
              sq();
              break;
              case 'h':
              fact();
              break;
              case 'i':
              expo();
              break;
              case 'j':
              cosf();
              break;
              case 'k':
              sinf();
              break;
              case 'a':
              exit(0);
              default:
              cout<<"invalid input"  ;
              system("cls");
    }
    }

    while(op!='0');

                    getch();
                    }



