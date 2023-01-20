#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a=5 , b=122;
    cout<<"The value of a without setw is : "<<a<<endl;
    cout<<"The value of b without setw is : "<<b<<endl;

    cout<<"The value of a with setw/iomanip function is : "<<setw(3)<<a<<endl;
    cout<<"The value of b with setw/iomanip function is : "<<setw(3)<<b<<endl;
    
    int c=((((a*b)+10)-50)-b);
    cout<<"The value of c is : "<<c<<endl;

    return 0;
}