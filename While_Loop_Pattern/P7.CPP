#include<iostream>

int main()
{
    int i=1,j,k=1;
    while(i<=5)
    {
        j=1;
        while(j<=5)
        {
            std::cout << k << "  ";
            k++;
            j++;
        }
        std::cout << std::endl;
        i++;    
    }
    return 0;
}
