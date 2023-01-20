#include <iostream>

using namespace std;

int sum(int a , int b);

int product(int d , int e);
void g()
{
    cout<<"Hello World";
}
int main()
{
    int num1,num2;
    cout<<"Enter the value "<<endl;
    cin>>num1;
    cout<<"Enter tha value "<<endl;
    cin>>num2;
    cout<<sum(num1,num2)<<endl;
    cout<<product(num1,num2)<<endl;
    g();
    
    return 0;

}
int sum(int a , int b)
{
    int c=a+b;
}                                    //----} when this is placed after int main its a prototype
int product(int d , int e)
{
    int f=d*e;
}