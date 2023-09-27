#include<iostream>

int main()
{
   int a=1,b=1;
   while(a<=200)
   {
     std::cout << a*b << "\t";
     a*=2;
     b++;	
   }	
   return 0;
}
