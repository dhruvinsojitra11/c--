#include<iostream>

int main()
{
    int i=0,n=1,a;
    while(i<=15)
    {
        a=n+i;
        std::cout << " " << a << "\t";
        n=i;
        i=a;        
    }
    return 0;
}
