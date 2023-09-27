#include<iostream>

int main()
{
    int i = 1, j = 1;
    while(i <= 5)
    {
        while(j <= 5)
        {
            std::cout << j << " ";
            j++;
        }
        i++;
    }
    return 0;
}
