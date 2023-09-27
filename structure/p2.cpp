#include <iostream>

struct student
{
    int NO, SCI, GUJ, ENG, TOTAL, PER;
};

int main()
{
    student stu[3];
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter " << i + 1 << " student marks: " << std::endl;
        std::cout << "enter sci marks --->";
        std::cin >> stu[i].SCI;
        std::cout << "enter GUJRATI marks --->";
        std::cin >> stu[i].GUJ;
        std::cout << "enter ENGLISH marks --->";
        std::cin >> stu[i].ENG;
        stu[i].TOTAL = stu[i].SCI + stu[i].GUJ + stu[i].ENG;
        stu[i].PER = stu[i].TOTAL / 3;
    }
    std::cout << "\nNO.\tsci\tguj\teng\ttotal\tper\n";
    for (int i = 0; i < 3; i++)
    {
        std::cout << i + 1 << "\t" << stu[i].SCI << "\t" << stu[i].GUJ << "\t" << stu[i].ENG << "\t" << stu[i].TOTAL << "\t" << stu[i].PER << std::endl;
    }
}
