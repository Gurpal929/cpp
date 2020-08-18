/*Program Intro
    File:array_traversal.cpp
    Author:Gurpal Singh
    Date:18/08/2020
    Purpose:TO traverse array elements

Change History -------------------------------

Date              User               Comments
-------         -------             ---------
18/08/2020     Gurpal Singh         Intial Creation
*/
////////Importers////

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int n[10],size,i;
cout<<"Enter Size Of  Array= ";
cin>>size;
cout<<"array elementd are=";
for(i=0;i<size;i++)
{
 cin>>n[i];
}
cout<<"array elemenys are=";
for(i=0;i<size;i++)
{
    cout<<"  "<<n[i];
}
getch();


}
