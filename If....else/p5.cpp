#include<iostream>

int main()
{
  int eng, guj, eco, Total, persentage;
  std::cout << "Enter your eng marks :";
  std::cin >> eng;
  std::cout << "Enter your guj marks :";
  std::cin >> guj;
  std::cout << "Enter your eco marks :";
  std::cin >> eco;
  Total = eng + guj + eco;
  std::cout << "Total marks is :" << Total << std::endl;
  persentage = (Total * 100) / 300;
  std::cout << "persentage is :" << persentage << std::endl;
  if (persentage > 33)
  {
    std::cout << "student is pass";
  }
  else
  {
    std::cout << "student is fail";
  }
  return 0;
}
