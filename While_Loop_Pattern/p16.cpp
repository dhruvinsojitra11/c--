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
           if(i%2==0)
           {
            cout << char(k+32) << " ";
           }
           else
           {
            cout << char(k) << " ";
           }
           k++;
           j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
