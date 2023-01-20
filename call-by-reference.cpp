#include<iostream>

using namespace std;

void swapReferenceVar(int &a, int&b)
{
    int temp=a;
    a=b;
    b=temp;

    
}

int main()
{
    int a=8 ,b =9;
    cout<<"The value of a and b is "<<a<<" & "<<b<<endl;

    swapReferenceVar(a,b) ;
    cout<<"The value of a and b is "<<a<<" & "<<b<<endl;


    return 0;
}