#include<iostream>

int main()
{
    int a=1,sum=0;
    while(a<=10)
    {
        sum=sum+a;
        std::cout << a << ",";
        a++;
    }
    std::cout << "\nthe sum is : " << sum << "\n";
    return 0;
}
