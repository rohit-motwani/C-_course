#include <iostream>

using namespace std;

int main()

//What is an array ----> It is a continuos block in memory
{
    int marks[8] = {40 , 50 , 60 , 70 , 80 , 90 , 55 , 78};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;
    cout<<marks[6]<<endl;
    cout<<marks[7]<<endl;

    for(int i=0; i<8; i++)
    {
        cout<<"The value of marks["<<i<<"] "<<marks[i]<<endl;
    }

    int b=0;
    while (b<8)
    {
       cout<<"The value of marks["<<b<<"] "<<marks[b]<<endl;
       b++;
    }
    
    int a=0;
    do
    {
        cout<<"The value of marks["<<a<<"] "<<marks[a]<<endl;
        a++;
    } while (a<8);

    int* p=marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;

    cout<<*p++<<endl;
    cout<<*(++p)<<endl;
    
    return 0;

}

