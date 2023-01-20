#include <iostream>

using namespace std;

int product(int d,int e)
{
    static  int f=d*e;
    f= f + 1;
    return f;
}

int main()
{
    int d,e;
    cout<<"The value of d and e is ";
    cin>>d>>e;
    cout<<"The product of d and e is "<<product(d,e)<<endl;
    cout<<"The product of d and e is "<<product(d,e)<<endl;
    cout<<"The product of d and e is "<<product(d,e)<<endl;
    cout<<"The product of d and e is "<<product(d,e)<<endl;
    cout<<"The product of d and e is "<<product(d,e)<<endl;
    cout<<"The product of d and e is "<<product(d,e)<<endl;
    cout<<"The product of d and e is "<<product(d,e)<<endl;
    

    return 0;
}