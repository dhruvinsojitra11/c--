#include<iostream>

int main()
{
    int a, n;
    std::cout << "Enter any value ";
    std::cin >> n;
    a = 1;
    while (a <= n)
    {
        std::cout << a << ", ";
        a++;
    }
    return 0;
}
