#include<iostream>
using namespace std;

int main ()
{
    int n;

    cout << "enter number:";
    cin >> n;

    if(n % 5 == 0 && n % 7 == 0)
    {
        cout << n << " divisible by 5 & 7";
    }
    else
    {
        cout << n << " not divisible by 5 & 7";
    }
}