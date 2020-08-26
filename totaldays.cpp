/*Program Intro
    File:totaldays.cpp
    Author:Gurpal Singh
    Date:18/08/2020
    Purpose:TO find  total days till date in a year

Change History -------------------------------

Date              User               Comments
-------         -------             ---------
18/08/2020     Gurpal Singh         Intial Creation
*/
////////Importers////
#include<iostream>
#include<conio.h>
using namespace std;


////Main Function ////
int main()
{

    int day,month,total;
    int days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cout<<"Enter month: ";
    cin>>month;
    cout<<"Enter day: ";
    cin>>day;
    total=day;
    //cout<<total;
    for(int x=0;x<month-1;x++)
    {
        total=day+total+days_per_month[x];
    }
    cout<<"Total Number Of days till date are:"<<total;
    return 0;
    getch();
}

