#include<iostream>
using namespace std;

template < class t > 
t sum ( t x , t y )
{
    return x + y;
}


int main()
{
    cout << sum ( 20 , 5) << endl;
    return 0;
}