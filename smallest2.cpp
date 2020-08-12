/**

    File:smallest2.cpp
    Author:Gurpal Singh
    Date:14/7/2020
    Purpose:to find smallest integer

Change History -------------------------------

Date              User               Comments
-------         -------             ---------
14/07/2020     Gurpal Singh         Intial Creation
*/

//imports
#include<iostream>
#include<conio.h>
#include<stdio.h>



//main function
int main()
{

    //define variables
    int x,y,z,smallest;

    //get input values from user
    std::cout<<"enter three numbers";
    std::cin>>x>>y>>z;

    //comapre values,store smallest in a variables
    smallest=x;
    if(y<smallest) smallest=y;
    if(z<smallest)  smallest=z;


    //print output with smallest value
    std::cout<<"smallest number is=";
    std::cout<<smallest;
    getch();
    return 0;
}

