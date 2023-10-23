#include<iostream>
using namespace std;

class base
{
    
    protected:
    int a;
    public:
    void setdataA()
    {
        cout << "enter a: ";
        cin >> a;
    }


};

 class derived : public base{

    private : 
    int b;

    public:
    void setdataB()
    {
        cout << "enter b: ";
        cin >> b;
    }

    void getdata()
    {
        cout << ": multiplication  of a and b is : " << a * b << endl;
    }

 };

 int main()
 {
    derived d;
    d.setdataA();
    d.setdataB();
    d.getdata();
     return 0;
 }