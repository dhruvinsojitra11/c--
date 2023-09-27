#include<iostream>

int main()
{
    int a;
    std::cout << "Enter Any Number: ";
    std::cin >> a;
    if(a % 15 == 0)
    {
        std::cout << "It is divisible by 5 and 3";
    }
    else
    {
        std::cout << "It is not divisible by 5 and 3";
    }
    return 0;
}
