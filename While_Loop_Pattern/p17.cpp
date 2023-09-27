#include<iostream>
using namespace std;

int main()
{
    int i=65,j,k=65;
    while(i<=69)
    {
        j=65;
        while(j<=i)
        {
           if(j%2==0)
           {
            cout << char(k) << " ";
           }
           else
           {
            cout << char(k+32) << " ";
           }
           k++;
           j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
