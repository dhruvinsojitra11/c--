#include<iostream>

int main()
{
    int i=1, j, k=65;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            std::cout << static_cast<char>(k) << "  ";
            k++;
            j++;
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
}
