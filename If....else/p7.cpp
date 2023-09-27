#include<iostream>

int main()
{
    int a, b, c;
    std::cout << "Enter a value :";
    std::cin >> a;
    std::cout << "Enter b value :";
    std::cin >> b;
    std::cout << "Enter c value :";
    std::cin >> c;
    
    if(a > b)
    {
        if(a > c)
        {
            std::cout << " " << a << " is big";
        }
        else
        {
            std::cout << " " << c << " is big";
        }
    }
    else
    {
        if(b > c)
        {
            std::cout << " " << b << " is big";
        }
        else
        {
            std::cout << " " << c << " is big";
        }
    }
    
    return 0;
}