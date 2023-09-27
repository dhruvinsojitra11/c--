#include<iostream>

int main()
{
    int b=65;
    while(b<=90)
    {
        std::cout << static_cast<char>(b) << ", ";
        b++;
    }
    return 0;
}
