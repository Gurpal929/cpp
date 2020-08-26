/*Program Intro

File Name: struct.cpp
Author: Gurpal Singh
Date:26/08/2020
Purpose:Program to declare the same field name for the diffrenmt datatypes in two
        structures assign some values into the corresponding field & to display the content of structure.


Change History______________________________________________


Date                User              Comments
--------          ----------          ----------------
*///////Importers/////

#include<iostream>
using namespace std;

int main()
{

   struct first
   {
    int a;
    char b;
    float c;
   };
   struct second
   {
     char a;
     float b;
     int c;
   };
   first one;
   second two;
   one.a=10;
   one.b='q';
   one.c=12.2;
   two.a='w';
   two.b=98.3;
   two.c=3;
   cout<<" components of first \n";
   cout<<one.a<<"\t"<<one.b<<"\t"<<one.c<<endl;
   cout<<" components of second \n";
   cout<<two.a<<"\t"<< two.b<<"\t"<<two.c<<endl;
   getchar();
}
