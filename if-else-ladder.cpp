#include<iostream>

using namespace std;

int main()
{
    int marks;

    cout<<"What is your marks : "<<endl;
    cin>>marks;
    

    if (marks>0  && marks<=35)
    {
        cout<<"You're fail";
    }
    else if (marks>35  && marks<=60)
    {
        cout<<"You got E grade";
    }
    else if (marks>60 && marks<=70)
    {
        cout<<"You got D grade";
    }
    else if (marks>70 && marks<80)
    {
        cout<<"You got C grade";
    }
    else if (marks>80 && marks<=90)
    {
        cout<<"You got B grade";
    }
    else if (marks>90 && marks<=100)
    {
        cout<<"You got A grade";
    }
    return 0;
}