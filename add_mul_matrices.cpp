/*Program Intro
    File:add_mul_matrices.cpp
    Author:Gurpal Singh
    Date:1/09/2020
    Purpose:TO find number in a array

Change History -------------------------------

Date              User               Comments
-------         -------             ---------
01/09/2020     Gurpal Singh         Intial Creation
*/
////////Importers////
#include<iostream>
#include<conio.h>
using namespace std;

int read_matrix(int[10][10],int,int);
int write_matrix(int[10][10],int,int);

int main()
{
    int ch,r1,c1,i,j,m,n,p,q,a[10][10],b[10][10],c[10][10];
    cout<<"***********************";
    cout<<"\n\t\tMENU";
    cout<<"\n[1] ADDITION of two matrices";
    cout<<"\n[2] MULTIPLICATON OF TWO NUMBERS";
    cout<<"\n[0] EXIT";
    cout<<"\n Enter your choice = ";
    cin>>ch;
    if(ch<=2 & ch>0)
    {
        cout<<"choice is valid\n";
    }
    switch(ch)
    {
    case 1:
        cout<<"\nInput rows and columns\n";
        cin>>r1>>c1;
        cout<<"\nEnter matrix 0f A\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                cin>>a[i][j];
        }
         cout<<" Enter matrix 0f B\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                cin>>b[i][j];
        }
        cout<<" *****************Addition of two matrices***************\n";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                cout<<a[i][j]+b[i][j]<<"  ";
            cout<<endl;
        }
    case 2:
        cout<<"\nInput rows and columns of matrix A \n";
        cin>>m>>n;
        cout<<"\nInput rows and columns of matrix B \n";
        cin>>p>>q;
        if(n==p)
        {

        cout<<" Multiplication is possible \n";
        cout<<"Enter elements of matrix A \n";
        read_matrix(a,m,n);
        cout<<"Enter elements of matrix B \n";
        read_matrix(b,p,q);
        cout<<"\n************Multiplication of two numbers***********\n";
        for(i=0;i<m;i++)
          {
          for(j=0;j<n;j++)

          {
              c[i][j]=0;
              c[i][j]=c[i][j]+a[i][j]*b[i][j];
          }
          cout<<"Result of two matrices\n";
          write_matrix(c,m,n);

          }
        }
       /*if statemenr ends*/
       else
        cout<<"multiplication is not possible";
       /*end of else statement*/
       break;
    case 0:
        cout<<"choice is not terminated";
        exit(0);
        break;
    default:
        cout<<"choice is invalide";
    }
     getch();
}
/***Function read matrix***/
int read_matrix(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
    return 0;

}
/***Function writematrix***/
int write_matrix(int a[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
    return 0;

}




