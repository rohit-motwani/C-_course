#include <iostream>

using namespace std;

int main()
{
    int a=6;
    // int* is a pointer
    // What is pointer? ----> Pointer is data type wich stores the address of the other data types
    int* b=&a;

    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address value of a at b is "<<b<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a from pointer b is "<<*b<<endl;


    //Pointer to Pointer
    int** c=&b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The address value of a from pointer to pointer c is "<<**c<<endl;



    return 0;

}