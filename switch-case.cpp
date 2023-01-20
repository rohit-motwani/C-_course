#include<iostream>

using namespace std;

int main(){

    int marks;
    cout<<"How many marks did you get : ";
    cin>>marks;
    switch (marks)
    {
        case 35:
        cout<<"Fail";
        break;
    case 60:
        cout<<"E grade";
        break;
    case 70:
        cout<<"D grade";
        break;

    case 80:
        cout<<"C grade";
        break;

    case 90:
        cout<<"B grade";
        break;

    case 100:
        cout<<"A grade";
        break;

    default:
       cout<<"No special cases";
        break;
    }


    return 0;
}
