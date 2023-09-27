#include<iostream>
using namespace std;

int main()
{
    int i,n,a=1;
    
    cout << " enter a number:";
    cin >> n;

    for (i=1;i<=n;i++)
    {
        cout << a*i << " ";
        a += a;
    }
}