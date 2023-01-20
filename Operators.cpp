#include <iostream>

using namespace std;

int main()
{
    int a=6 , b=9;
    char letter='c';
    cout<<"The following are Algaebraic operators."<<endl;
    cout<<"The value of a+b is : "<<(a+b)<<"\n";
    cout<<"The value of a-b is : "<<(a-b)<<"\n";
    cout<<"The value of a*b is : "<<(a*b)<<"\n";
    cout<<"The value of b/a is : "<<(b/a)<<"\n";
    cout<<"The value of a%b is : "<<(a%b)<<"\n";
    cout<<"The value of ++a is : "<<(++a)<<"\n";
    cout<<"The value of --a is : "<<(--a)<<"\n";
    cout<<"The value of a++ is : "<<(a++)<<"\n";
    cout<<"The value of a-- is : "<<(a--)<<"\n"<<endl;

    cout<<"The following are Assignment operators."<<endl;
    cout<<"The value of c is : "<<(a+b)<<endl<<endl;

    cout<<"The following are Comparision operators."<<endl;
    cout<<"The value of a==b is : "<<(a==b)<<endl;
    cout<<"The value of a!=b is : "<<(a!=b)<<endl;
    cout<<"The value of a<b is : "<<(a<b)<<endl;
    cout<<"The value of a>b is : "<<(a>b)<<endl;
    cout<<"The value of a>=b is : "<<(a>=b)<<endl;
    cout<<"The value of a<=b is : "<<(a<=b)<<endl<<"\n";

    cout<<"The following are the logical operators."<<endl;
    cout<<"The value of a==b && a<b is : "<<((a==b) && (a<b))<<endl;
    cout<<"The value of a==b || a<b is : "<<((a==b) || (a<b))<<endl;
    cout<<"The value of !(a==b) is : "<<(!(a==b))<<endl;
    
    return 0;
}