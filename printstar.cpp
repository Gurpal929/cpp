     /*   File:printstar.cpp
            Author:Gurpal Singh
            Date:28/7/2020
            Purpose:to print * in vertical or horizontal

        Change History -------------------------------

        Date              User               Comments
        -------         -------             ---------
        28/07/2020     Gurpal Singh         Intial Creation
        */
        //importers
        #include<iostream>
        #include<conio.h>
        using namespace std;

        //main function
        int main()
        {
            int i,j;
            for(i=1;i<=10;i++)
            {
                for(j=1;j<=i;j++)
                {
                    cout<<"*";
                }
                    cout<<"\n";


            }
            getch();

        }
