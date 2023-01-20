#include <iostream>

using namespace std;

int main()
{
    
    for(int i=4 ; i<=40 ;i++)
    {
        if(i==18)
        {
            break;
        }
        if(i==15)
        {
            continue;
        }
        cout<<i<<endl;
    }


    return 0;
}