/*program intro
    File:functionovrl.cpp
    Author:Gurpal singh
    Date:9/8/2020
    Purpose:funtion overloading

Change History -------------------------------

Date              User               Comments
-------         -------             ---------
9/08/2020     Gurpal Singh         Intial Creation
*/


///////imports/////
#include<iostream>
#include<conio.h>
using namespace std;

int operate(int a,int b)
{
    return(a*b);

}
float operate(float a, float b)
{

    return(a/b);
}
int main()
{
   int x=1,y=7;
   float n=10,m=5;
   cout<<"mul of two numbers"<<operate(x,y);
   cout<<endl;
   cout<<"div of two numbers"<<operate(n,m);
   cout<<endl;
   getch();
   return 0;


}

