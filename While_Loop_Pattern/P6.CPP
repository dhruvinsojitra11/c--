#include<iostream>

int main()
{
    int i=1,j;
    while(i<=10)
    {
        j=1;
        while(j<=10)
        {
            std::cout << i << "   ";
            j+=2;
        }
        std::cout << std::endl;
        i+=2;    
    }
    return 0;
}
