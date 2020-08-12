#include<iostream>
using namespace std;

int main (void)
{

    int day,month,year;
    char ch;
    cout<<"Enter date as dd/mm/yy: ";
    cin>>day>>ch>>month>>ch>>year;
    cout<<day<<' '<<month<<' '<<year;

    switch(month)
    {
        case 1:cout<<"jan";
        break;
           case 2:cout<<"feb";
        break;
           case 3:cout<<"mar";
        break;
           case 4:cout<<"apr";
        break;
           case 5:cout<<"may";
        break;
           case 6:cout<<"jun";
        break;
           case 7:cout<<"jul";
        break;
           case 8:cout<<"aug";
        break;
           case 9:cout<<"sept";
        break;
           case 10:cout<<"oct";
        break;
           case 11:cout<<"nov";
        break;
           case 12:cout<<"dec";
        break;
           default:
            cout<<"invalid number";
    }
    cout<<day<<","<<year<<'\n';

    return 0;
}
