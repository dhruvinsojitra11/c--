#include<iostream>

int main()
{
    int a = 1, b;
    std::cout << "Enter a: ";
    std::cin >> b;
    while(a <= b)
    {
        if(a % 2 == 1)
        {
            std::cout << a << "\t";
        }
        else
        {
            std::cout << a * a << "\t";
        }
        a++;
    }
    return 0;
}
