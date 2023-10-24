#include<iostream>
using namespace std;
class base1
{
    protected:
    int a;

    public:

    void setA()
    {
        cout << "enter a : ";
        cin >> a; 
    }
};

class base2 : public base1
{
    protected:
    int b;

    public:

    void setB()
    {
        cout << "enter b : ";
        cin >> b; 
    }
};


 class derived1 : public base2{
    public:

    void multiple()
    {
        cout << "multiplication of a , b and c is : "<< a * b  << endl;
    }
};

class derived2 : public derived1{
    public:

    void add()
    {
        cout << " substraction of a, b and c is : " << a + b  << endl;
    }
};




int main()
{
    derived2 d;
    d.setA();
    d.setB();
    d.multiple();
    d.add();


    return 0;
}