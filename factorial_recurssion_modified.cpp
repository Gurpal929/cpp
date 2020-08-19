 /*  File: factorial_recurssion_modified.cpp
    Purpose: to find greatest prime factor of number entered by user
    History:
    Date        User        Comments
    ----------  ----------- ---------------------------------------
    08/18/20   Gurpal Singh
*/

#include <iostream>
#include<conio.h>

using namespace std;

int fact(int); //function prototype
int main()
{
    int num;
    cout<<"Enter a number to find Factorial =";
    cin>>num;
    int facto=fact(num);
    cout<<"Factorial is="<<facto;
    getchar();
    return 0;
}
 int fact(int num)
 {

     //base case
     if(num==1)
     {
         return num;
     }
     else
     {
       num=num*fact(num-1);
     }
 }
