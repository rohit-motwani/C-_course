#include <iostream>

using namespace std;

typedef struct employee        // [typedef ----> typedef is used to write struct employee as ep]
{
    int eid;
    char favchar;
    float salary;
    
}ep;

int main()
{
    ep Vismay;
    Vismay.eid=1;
    Vismay.favchar='P';
    Vismay.salary=500000;

    ep Dipesh;
    Dipesh.eid=2;
    Dipesh.favchar='A';
    Dipesh.salary=400000;

    ep Mayur;
    Mayur.eid=3;;
    Mayur.favchar='A';
    Mayur.salary=450000;

    ep Lay;
    Lay.eid=4;;
    Lay.favchar='R';
    Lay.salary=300000;

    ep Rohit;
    Rohit.eid=5;
    Rohit.favchar='T';
    Rohit.salary=250000;

    cout<<"Information of Vismay"<<endl;
    cout<<"The value is "<<Vismay.eid<<endl;
    cout<<"The value is "<<Vismay.favchar<<endl;
    cout<<"The value is "<<Vismay.salary<<endl<<"\n";

    cout<<"Information of Dipesh"<<endl;
    cout<<"The value is "<<Dipesh.eid<<endl;
    cout<<"The value is "<<Dipesh.favchar<<endl;
    cout<<"The value is "<<Dipesh.salary<<endl<<"\n";

    cout<<"Information of Mayur"<<endl;
    cout<<"The value is "<<Mayur.eid<<endl;
    cout<<"The value is "<<Mayur.favchar<<endl;
    cout<<"The value is "<<Mayur.salary<<endl<<"\n";

    cout<<"Information of Lay"<<endl;
    cout<<"The value is "<<Lay.eid<<endl;
    cout<<"The value is "<<Lay.favchar<<endl;
    cout<<"The value is "<<Lay.salary<<endl<<"\n";

    cout<<"Information of Rohit"<<endl;
    cout<<"The value is "<<Rohit.eid<<endl;
    cout<<"The value is "<<Rohit.favchar<<endl;
    cout<<"The value is "<<Rohit.salary<<endl;
    

    return 0;


}