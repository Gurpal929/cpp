#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
//clrscr();
int x,y,z,smallest;
cout<<"enter 3 numbers:";
cin>>x>>y>>z;
smallest=x;
if(y<smallest)
smallest=y;
if(z<smallest)
smallest=z;
cout<<"the smallest number is=";
cout<<smallest;
getch();
return 0;
}
