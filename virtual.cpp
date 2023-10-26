#include<iostream>
using namespace std;

class pet
{
    public :
    void print()
    {
        cout << "the sound of pet" ;
    }
};
 

class dog : public pet
{
    public:
    void virtual dog()
    {
        cout << "the dod barks";
    }

};

class cat : public pet
{
    public:
    void virtual cat()
    {
        cout << " the cat meows";
    }

};

int main()
{
    pet p;
    dog g;
    cat c;

    return 0;
}