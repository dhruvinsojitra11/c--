#include<iostream>

int main()
{
   int a=5,b;
	while(a>=1)
	{
		b=a;
		while(b<=5)
		{
			std::cout << b << " ";
			b++;
		}
	        std::cout << std::endl;
		a--;
	}
	return 0;
}
