#include<iostream>
int main()
{
    int i=65,j,k=65;
    while(i<=69)
    {
        j=65;
        while(j<=i)
        {
            std::cout << static_cast<char>(k) << " ";
            k++;
            j++;
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
}
