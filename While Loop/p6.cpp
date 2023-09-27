#include<iostream>

int main()
{
    int a, n;
    std::cout << "Enter any odd value ";
    std::cin >> n;
    a = n;
    while(a <= 20)
    {
        std::cout << a << ", ";
        a += 2;
    }
    return 0;
}
