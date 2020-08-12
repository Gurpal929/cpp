
 /*   File:smallest3
    Author:Gurpal singh
    Date:14/07/2020
    Purpose:find smallest number

Change History -------------------------------

Date              User               Comments
-------         -------             ---------
14/07/2020     Gurpal Singh         Intial Creation
*/
//imports
#include <iostream>
#include <conio.h>
using namespace std;


int main()
{

    int max_num=9;
    int min_num=0;
    int spaces=0;
    int print_max=max_num;
    int loop_counter=0;

     for(int loop_counter=0;loop_counter<=max_num;loop_counter++)
     {

            for(int i=min_num;i<=print_max;i++)
                cout<<" "<<i;

            print_max--;
            for(int i=0;i<=loop_counter+(loop_counter-1);i++)
                cout<<" ";

            for(int i=print_max;i>=0;i--)
            cout<<" "<<i;
            cout<<endl;
     }



   return 0;
}



