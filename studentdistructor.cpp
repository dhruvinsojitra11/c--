#include<iostream>
using namespace std;

class student
{
    private:
    int roll_no;
    string student_name;

    public:
    int rno;
    string name;


    void input()
    {
        cout << "enter roll number : ";
        cin >> rno;

        cout << "enter a name: ";
        cin >> name;


    }

    student()
    {
        rno = roll_no;
        name = student_name;

    }

    void display()
    {   
        cout << endl;
        cout << " roll number of student: " << rno << endl ;
        cout << " enetr student name: " << name << endl;
    }

    ~student()
    {
        cout << " my self dhruvin sojitra " << endl;
    }



};

int main()
{
    student std;
    std.input();
    std.display();
    return 0;
}                                             