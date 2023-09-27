#include<iostream>

int main()
{
    int a=65;
    while(a<=90)
    {
        std::cout << static_cast<char>(a) << "=" << static_cast<char>(a+32) << "\t ";
        a++;
    }
    return 0;
}
