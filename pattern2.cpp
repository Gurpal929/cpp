
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



#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int a=9;
    int b=5;
    int c=0;
    int d=a;
    int e=0;

    while(c <= (a-b)) {

        //prints 98765
        while(d>=b){
            cout << d--;  //d-- , use d, then decrement
        }
        d++;
        //print 6789
        while(d++ < a){
            cout << d;
        }

        d--;

        cout << endl; //control goes to next line

        c++;
        d=d-c;


        e=c;
        while(e-->0){
        cout << " ";
            }
            while(e-->5)
                cout<<" ";
    }

    return 0;
}


/**

987656789
 8765678
  76567
   656
    5

loop1   d   b   cout    new     a
1       9   5   9       8
2       8   5   8       7
3       7
4       6
5       5

loop2   d   d++ count   a   d++ <= a
1       5   6   6       9   1 (1-true, 0-false)
2       6   7   7       9   1
3       7   8   8       9   1
4       8   9   9       9   1
5           10

**/
