#include<iostream>

int main()
{
    int a;
    std::cout << "enter A:";
    std::cin >> a;
    if(a % 5 == 0)
    {
        std::cout << "its division by 5";
    }
    else
    {
        std::cout << "its not division by 5";
    }
    return 0;
}
