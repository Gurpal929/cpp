/*program intro
    File:factr.cpp
    Author:Gurpal Singh
    Date:15/08/2020
    Purpose:to find factorial of a number using recussion

Change History -------------------------------

Date              User               Comments
-------         -------             ---------
15/08/2020     Gurpal Singh         Intial Creation
*/
#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n)
{

    if(n==0)
    return(1);
    else
    return(n*fact(n-1));

}
int main()
{
    int a;
    cout<<"enter a number=";
    cin>>a;
    fact(a);
    cout<<"Factorial of given number is="<<fact(a);
    getch();
}
