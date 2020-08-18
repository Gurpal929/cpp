     /*program intro
    File:gcdr.cpp
    Author:Gurpal Singh
    Date:15/08/2020
    Purpose:to find factorial of a number using recursion

Change History -------------------------------

Date              User               Comments
-------         -------             ---------
15/08/2020     Gurpal Singh         Intial Creation
*/
#include<iostream>
#include<conio.h>
using namespace std;

int gcd(int ,int );
int main()
{
    int a,b,r;
   cout<<"enter two number=";
   cin>>a>>b;
   r=gcd(a,b);
   cout<<"HCF of two numbers is="<<r;
   getch();

}
int gcd(int a,int b)
{
    if(a==0)
        return(b);
    else if(b==0)
         return(a);
    else
        return(gcd(b,a%b));


}
