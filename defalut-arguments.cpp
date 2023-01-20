#include <iostream>

using namespace std;

float moneyRecieved(int Currentmoney, float factor=2.04 )
{
    return Currentmoney*factor;
}

int main()
{
    int money;
    cout<<"How much money did you submitted "<<endl;
    cin>>money;
    cout<<"The money you recieved after 1 year is "<<moneyRecieved(money)<<endl;
    cout<<"The money for vip recieved after 1 year is "<<moneyRecieved(money,2.08);

}