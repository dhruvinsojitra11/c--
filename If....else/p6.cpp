#include<iostream>

int main()
{
   int a;
   std::cout << "Enter Any year : ";
   std::cin >> a;
   if(a%4==0)
   {
      std::cout << " leap year";
   }
   else
   {
      std::cout << "not leap year";
   }
   return 0;
}
