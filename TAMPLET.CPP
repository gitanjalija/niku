#include<iostream.h>
#include<conio.h>

template<class t>
void swap(t &x,t &y)
{
       t t;
       t=x;
       x=y;
       y=t;
}

void main()

{
   clrscr();
   char ch1,ch2;
   cout<<"\n enter two charactters:\n";
   cin>>ch1>>ch2;
   cout<<"\n************************************\n";

   cout<<"\n before swapping:\n";
   cout<<"\nch1: \t"<<ch1;
   cout<<"\nch2: \t"<<ch2;
   swap(ch1,ch2);
   cout<<"\n on swapping:";
   cout<<"\nch1: \t"<<ch1;
   cout<<"\nch2: \t"<<ch2;
   cout<<"\n********************************************\n";

   int a,b;
   cout<<"\n enter two integers:\n";
   cin>>a>>b;
   cout<<"\n**********************************************\n";

   cout<<"\n before swapping:\n";
   cout<<"\na: \t"<<a;
   cout<<"\nb: \t"<<b;
   swap(a,b);
   cout<<"\n on swapping:";
   cout<<"\na: \t"<<a;
   cout<<"\nb: \t"<<b;
   getch();
  }
