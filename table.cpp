     /*   File:table.cpp
        Author:Gurpal Singh
        Date:26/7/2020
        Purpose:to print table of 5

    Change History -------------------------------

    Date              User               Comments
    -------         -------             ---------
    26/07/2020     Gurpal Singh         Intial Creation //dfffffdfdddfdfdf

    */
    //importers
    #include<iostream>
    #include<conio.h>
    using namespace std;

    //main function

    int main()
    {
        //declaring variables
        int num1,x;

        //showing a message on screen for user to enter a number

        cout<<"enter an integer ";

        //getting value from user

        cin>>num1;
        //logic to find a number is prime or composite

        for(x=2;x<num1;x++)
        {
                if(num1%x==0)
                {
                cout<<"number is composite";
                getch();
                exit(0);
                }

        else
        {
                 cout<<"number is prime";
                  getch();
                  exit(0);
        }
        }



    }
