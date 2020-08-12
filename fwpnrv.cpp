
 /*   File:fwpnrv.cpp
    Author:Gurpal singh
    Date:8/8/2020
    Purpose:find smallest number

Change History -------------------------------

Date              User               Comments
-------         -------             ---------
8/08/2020     Gurpal Singh         Intial Creation
*/
//imports
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void greeting(int x); //function prottype
int main(void)
{
 system("CLS");
 greeting(5);     //function call arguement 5
 int number;
 do
 {
     cout<<"please enter value(1-10):\n";
     cin>>number;
}
while((number<1)||(number>10));
 greeting(number);   // arguement is a variable
 return 0;

}

///////funtion definitionon//////

void greeting(int x)    //formal arguement is x
{

    int i;  //declaring local variable
    for(i=0;i<=x;i++)

    {
        cout<<"Hi";

    }
    cout<<endl;
    return;
}
