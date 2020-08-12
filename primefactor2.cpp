   /*   File:primefactor2.cpp
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
            int num;
            int prime_flag=1;
            int largest_prime_factor=0;
            cout<<"enter a number to find greatest prime factor for:";
            cin>>num;
            for(int i=1;i<num;i++)
                   //cout<<"number id divisible by"<<i;
            {
                if(num%i==0)
                {
                    cout<<i<<" x "<<num/i<<",";

                    for(int j=2;j<=i/2;j++){
                        if(i%j==0){
                            cout<<" but "<< i <<" is not prime ";

                            cout<<" ,greatest prime number still is "<<largest_prime_factor;
                                prime_flag=0;
                            }
                        }
                        if(prime_flag){
                            cout<<" and "<<i<<" is prime ";
                            if(largest_prime_factor<i){
                                cout<<" ,greatest prime factor now is "<<i;
                                largest_prime_factor=i;
                            }else{
                            cout<<" , greatest prime factor still is "<<largest_prime_factor;
                            }
                        }//end prime flag condition
                        cout<<"\n";
                    }//end modulus condition
                    //reset prime flag
                    prime_flag=1;



                        }//end for loop
                        if(largest_prime_factor>0){
                            cout<<" , greatest prime factor of  "<<num<<" is "<<largest_prime_factor<<"\n";
                        }
            getch();
            return 0;
        }
