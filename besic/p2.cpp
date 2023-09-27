#include<iostream>

int main()
{
  int a=10;
  int b;
  b=50;
  std::cout << "Ans 1 : " << b << std::endl;
  b=a;
  b=a+a;
  b=b+50;
  std::cout << "Ans 2 : " << a+50+b << std::endl;
  std::cout << "Ans 3 : " << b+a << std::endl; 
  return 0;
}
