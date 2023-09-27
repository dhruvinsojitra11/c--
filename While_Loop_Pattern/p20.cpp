#include<iostream>

int main()
{
    int i=1,j,k=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            std::cout << k%2==1 << " ";
            k++;
            j++;
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
}
