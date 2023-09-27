#include<iostream>

int main()
{
    int a = 65;
    while(a <= 90)
    {
        if(a % 4 == 1)
        {
            std::cout << static_cast<char>(a) << "\t";
        }
        else
        {
            std::cout << static_cast<char>(a + 32) << "\t";
        }
        a += 2;
    }
    return 0;
}
