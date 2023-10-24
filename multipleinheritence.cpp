#include<iostream>
using namespace std;
class base1
{
    protected:
    int n1;

    public:

    void setA()
    {
        cout << "enter n1 : ";
        cin >> n1; 
    }
};

class base2
{
    protected:
    int n2;

    public:

    void setB()
    {
        cout << "enter n2 : ";
        cin >> n2; 
    }
};

class derived : public base1, public base2{
    public:

    void multiple()
    {
        cout << "multiplication of n1 and n2 is : "<< n1 * n2 << endl;
    }
};


int main()
{
    derived d;
    d.setA();
    d.setB();
    d.multiple();

    return 0;
}