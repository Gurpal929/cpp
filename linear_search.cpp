/*Program Intro
    File:linear_search.cpp
    Author:Gurpal Singh
    Date:22/08/2020
    Purpose:TO find  a number in a array

Change History -------------------------------

Date              User               Comments
-------         -------             ---------
22/08/2020     Gurpal Singh         Intial Creation
*/
////////Importers////
#include<iostream>
using namespace std;

int loc(int[],int);

int main()
{
     int num;

    int arr[7]={12,32,67,87,56,34,67};

    cout<<"Enter a number which you want to find from {12,32,67,87,56,34,67}";
    cin>>num;
    int location=loc(arr,num);
    cout<<"Number is present at location= "<<location;
    getchar();
    return 0;

}

int loc(int arr[],int num)
{
    int found=0;
    for(int i=0;i<arr[i];i++)
    {
        if(num=arr[i])
        {
            cout<<"NUmber is present at location"<<i+1;
            found=1;
            break;
            return i+1 ;
        }

    }


}
