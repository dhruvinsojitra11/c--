#include<iostream>
using namespace std;
 
class pet
{
    public:
    virtual void print()
    {
        cout << " sound of animals : ";

    }
};

class cat : public pet 
{
    public:
    void print() override
    {
        cout << " cat meows ";
    }
};

class dog : public pet 
{
    public:
    void print() override
    {
        cout << " dod barks ";
    }
};

class lion : public pet 
{
    public:
    
    void print() override
    {
        cout << " lion roars ";
    }
};

int main()
{
    pet* p;
    dog d;
    cat c;
    lion l;

    p = &d;
    p -> print();

    cout <<  endl;

    p = &l;
    p -> print(); 
    return 0;
}