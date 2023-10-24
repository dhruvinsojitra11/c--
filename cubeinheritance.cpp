#include<iostream>
using namespace std;
class base1
{
    public :
    int n;

     void setN()
    {
    cout << " enter n number : " ;
    cin >> n;
    }

     
};

class base2
{
    public:

    int i;


};

class derived : public base1, public base2
{
    public:
    void getcube()
    {
    for ( i = 1; i <= n ; i++)
    {
        cout << i * i * i << " ";
    }
    }
};


int main ()
{
derived d;

d.setN();
d.getcube();

return 0;
}