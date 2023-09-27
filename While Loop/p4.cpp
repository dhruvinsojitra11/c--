#include<iostream>

int main()
{
    int a, n;
    std::cout << "Enter any value ";
    std::cin >> n;
    a = n;
    while (a >= 1)
    {
        std::cout << a << ", ";
        a--;
    }
    return 0;
}
