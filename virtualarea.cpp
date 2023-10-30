#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void print()
    {
        cout << " enter shape name :";
    }
};

class circle : public shape
{
    public:

    int r;
    void print() override
    {
        cout << "enter radius :";
        cin  >> r;

        cout << " area of circle is : " << 3.14 * r * r << endl;

    }
};

class triangle : public shape
{
    public:

    int b,h;
    void print() override
    {
        cout << "enter base :";
        cin  >> b;

        cout << "enter height : ";
        cin >> h;

        cout << " area of triangle is : " << 0.5 * b * h << endl;

    }
};

class square : public shape
{
    public:

    int a;
    void print() override
    {
        cout << "enter side :";
        cin  >> a;

        cout << " area of square is : " << a * a << endl;

    }
};

int main()
{
    shape * myshape;
    circle c;
    triangle t;
    square s;

    myshape = &c;
    myshape -> print(); 

    myshape = &t;
    myshape -> print();

    myshape = &s;
    myshape -> print();


    return 0;
}


// theory
// virtual function
// pure virtual function
// static members
// template