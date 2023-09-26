#include<iostream>
using namespace std;

int main ()
{
    int unit,billamt;

    cout << " enter unit:";
    cin >> unit;

    if ( unit<=100)
    {
        billamt=unit * 0.6+50;
    }
    else if( unit >=100 && unit <= 300)
    {
        billamt=60+(unit-100)*0.8+50;
    }
    else if(unit >= 300)
    {
        billamt=220+(unit-300)*0.9+50;
    }
    if(billamt >= 300)
    {
        billamt = billamt + ( billamt * 0.15);
    }

    cout << billamt;
}