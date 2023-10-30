#include <iostream>
using namespace std;

template <class t>
t greatest(t x, t y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout << "Greatest Value is: " << greatest(a,b) << endl;
    //cout << "Greatest Value is: " << greatest(18, 2332) << endl;
    return 0;
}