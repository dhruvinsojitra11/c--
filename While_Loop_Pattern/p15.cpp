#include<iostream>

int main()
{
    int i=65,j;
    while(i<=69)
    {
        j=65;    
        while(j<=i)
        {
            std::cout << static_cast<char>(j) << " ";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
}
