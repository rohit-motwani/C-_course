#include <iostream>

using namespace std;

union money
{
    int chaddi;
    char watch;
    float dollars;

};

int main()
{
    union money c1;
    c1.chaddi=18;
    // c1.watch='f';     //this would give error value because union can only give/provide one of all of them
    cout<<c1.watch;

    return 0;


}

