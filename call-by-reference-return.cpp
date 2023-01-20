#include<iostream>

using namespace std;

int &swapReferenceVar(int &a, int&b)
{
    int temp=a;
    a=b;
    b=temp;
    
    return a;

}

int main()
{
    int a=8 ,b =9;
    cout<<"The value of a and b is "<<a<<" & "<<b<<endl;

    swapReferenceVar(a,b) =766;
    cout<<"The value of a and b is "<<a<<" & "<<b<<endl;


    return 0;
}