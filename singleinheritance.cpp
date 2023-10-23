#include<iostream>
using namespace std;
class base
{
    private:
    int a = 10;
    protected:
    int b = 20;
    public:
    int c = 30;
};

class derived : public base
{
    int b;
    public:
    void getter()
    {
         cout << " enter value of a: " << a;
         cout << " enter value of b: " << b;
         cout << " enter value of c: " << c;
        

        
    }

};

int main()
{
    derived d;
    d.getter();
    return 0;
}
