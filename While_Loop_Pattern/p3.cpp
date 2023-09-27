#include<iostream>

int main()
{
    int i=5,j;
    while(i>=1)
    {
        j=5;
        while(j>=1)
        {
            std::cout << i << " ";
            j--;
        }
        std::cout << std::endl;
        i--;
    }
    return 0;
}
