/*   File:pattern2.cpp
    Author:Gurpal singh
    Date:14/07/2020
    Purpose:print following pattern
           987656789
            8765678
             76567
              656
               5

Change History -------------------------------

Date              User               Comments
-------         -------             ---------
1/08/2020     Gurpal Singh         Intial Creation
*/
//imports

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,a=0;
    for(i=0;i<=9;i++)
    {
        cout<<" "<<i;
        }
        i--;

        for(i=9;i>=0;i--)
            cout<<" "<<i;



}
