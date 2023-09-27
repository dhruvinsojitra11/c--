#include<iostream>

int main()
{
    float i = 0.5, n, j = 0.5;
    std::cout << "enter n:";
    std::cin >> n;
    std::cout << j;
    while (i <= n)
    {
        j += i * 1;
        std::cout << "\n " << j;
        i++;
    }
    return 0;
}
