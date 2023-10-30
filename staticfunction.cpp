#include<iostream>
using namespace std;

class car
{
    public:
    static int a;
    int i = 0;


    car()
    {
        a++;
    }
    void display()
    {
        cout << " display function call .......... ";
    }

    static void Display()
    {
        cout << " statis is runnung ..........  ";
    }
};

int car :: a = 0;n 

int main()
{
    car c1;
    c1.display();
    car c2;
    c2.display();
    car c3;
    c3.Display();

    cout << " number of time object call " << car :: a << endl;

    return 0;
}