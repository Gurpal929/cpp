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

            int a,i,j,b=2;
            cout<<"enter a number";
            cin>>a;
            for(i=1;i<=a/2;i++)
            {
            if(a%i==0)
            {
                cout<<i<<'\t';
                for(j=1;j<=i;j++)
                {
                    if(i%j>0)
                    {
                        b=i;
                    }
                    if(b%3==0)
                        b=3;
                    else if(b%2==0)
                        b=2;
                    else if(b%5==0)
                        b=5;
                }
            }

            }
            cout<<c<<"largest prime factor:"<<b;
            getch();
        }
