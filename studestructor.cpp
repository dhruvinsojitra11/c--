#include <iostream>
using namespace std;


class student
{
    private:
    int m1,m2,m3;

    public:

    int id,marks1,marks2,marks3,total,percentage;
    string name;


    student()
    {
        cout << " id number :";
        cin >> id;
        cout << "name :";
        cin >> name;
        cout << "enter m1:";
        cin >> marks1;
        cout << "enter m2:";
        cin >> marks2;
        cout <<"enter m3:";
        cin >> marks3;


        total = marks1+marks2+marks3;
        percentage = total / 3;
    }

    void data()
    {
        cout << "\n student id is :" << id;
        cout << "\n student name is :" << name;
        cout << "\neng\tsci\tguj\ttotal\tpercentage" << endl;
        cout << "\n" << marks1 << "\t" << marks2 << "\t" << marks3 <<"\t" << total <<"\t" << percentage << endl;
    }

    ~student()
    {
        cout << "best of luck" << endl;
    }

};

int main()
{
    student s1,s2,s3;
    s1.data();
    s2.data();
    s3.data();
    return 0;
}