#include <iostream>
using namespace std;
 
int main()
{
    int a , b;
    int *c=&a;
    int *d=&b;
    
    cin>>a;
    cin>>b;
    cout<<a+b<<endl;
    cout<<(*d-*c);
    
}