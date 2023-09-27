#include<iostream>

int main()
{
    int a=65;
    while(a<=90)
    {
        std::cout << static_cast<char>(a) << "=" << a << "\t ";
        a++;
    }
    return 0;
}
