#include<iostream>

using namespace std;

//When to use inline function -----> When ther is less work in the function
// not to use inline function -----> Recursion, static variables,
inline int product(int a,int b)
{
    int const c=a*b;
    return c;
}
int main()
{
    int a , b;
    cout<<"The value of a and b is ";
    cin>>a>>b;
    cout<<"The ptoduct of a nad b is "<<product(a,b)<<endl;
    cout<<"The ptoduct of a nad b is "<<product(a,b)<<endl;
    cout<<"The ptoduct of a nad b is "<<product(a,b)<<endl;
    cout<<"The ptoduct of a nad b is "<<product(a,b)<<endl;
    cout<<"The ptoduct of a nad b is "<<product(a,b)<<endl;
    cout<<"The ptoduct of a nad b is "<<product(a,b)<<endl;
    cout<<"The ptoduct of a nad b is "<<product(a,b)<<endl;
    cout<<"The ptoduct of a nad b is "<<product(a,b)<<endl;
    

    return 0;

}

