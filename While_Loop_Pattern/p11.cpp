#include<iostream>

int main()
{
    int i=1,j;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            std::cout << i << " ";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
}
