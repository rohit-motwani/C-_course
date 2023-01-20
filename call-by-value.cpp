#include<iostream>

using namespace std;

void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int* c, int*d)
{
    int temp = *c;
    *c = *d;
    *d = temp;
}
int main()
{
    int a=5 ,b=6;
    cout<<"The value of a and b is "<<a<<" & "<<b<<"\n";
    swap(a,b);
    cout<<"The value of a and b is "<<a<<" & "<<b<<endl<<endl;

     int c=7 ,d=11;
    cout<<"The value of c and d is "<<c<<" & "<<d<<"\n";
    swapPointer(&c,&d);
    cout<<"The value of c and d is "<<c<<" & "<<d<<endl;
    
    return 0;

}