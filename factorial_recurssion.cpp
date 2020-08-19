 /*  File: factorial_recurssion.cpp
    Purpose: to find greatest prime factor of number entered by user
    History:
    Date        User        Comments
    ----------  ----------- ---------------------------------------
    08/18/20   Gurpal Singh
*/

#include <iostream>
#include<conio.h>

using namespace std;

int fact(int,int); //function prototype
int main()
{
    int num,num2;
    cout<<"Enter a number to find Factorial =";
    cin>>num;
    int facto=fact(num,num);
    cout<<"Factorial is="<<facto;
    getchar();
    return 0;
}
 int fact(int num,int num2)
 {

     //base case
     if(num2==1)
     {
         return num;
     }
     else
     {
          num2=num-1;
         num=num*num2;

        fact(num,num2);
        return num;
     }
 }
