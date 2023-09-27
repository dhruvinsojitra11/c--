#include<iostream>

int main()
{
    int a = 1, b;
    while(a <= 10)
    {
        b = a * a;
        std::cout << b << ",";
        a++;
    }
    return 0;
}
