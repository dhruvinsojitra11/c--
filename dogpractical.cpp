#include<iostream>
using namespace std;

class dog
{
    public:
    int breed;

    dog(int breed)
    {
        this -> breed = breed;
    }

    void describe()
    {
        cout << "breed of dog is : " << breed << endl;
    }
};

int main()
{
    dog husky(60);
    husky.describe();
    dog shihTzu(40);
    shihTzu.describe();
    dog lebra(30);
    lebra.describe();

    return 0;
}