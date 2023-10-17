#include<iostream>
using namespace std;

class object
{
    int l,w,h;

    public:
    void setdata(int a,int b,int c)
    {
        l = a;
        w = b;
        h = c;
    }

    int getdata()
    {
        return l * w * h;
    }
    
    object operator++()
    {
        object o;
        o.l = ++l;
        o.w = ++w;
        o.h = ++h;

        return o;
    }
    object operator++(int)
    {
        object m;
        m.l = l++;
        m.w = w++;
        m.h = h++;

        return m;
    }
};


int main()
{
    object o1, o2;
    o1.setdata(3,3,3);
    cout << "volume of the object is : " << o1.getdata() << endl;

    o2.setdata(5,5,5);
    cout << "volume of the object is : " << o2.getdata() << endl;

    ++o1;
    cout << "after volume for object o1 is : "<< o1.getdata() << endl;

    o2++;
    cout << "after volume for object o2 is : "<< o2.getdata() << endl;

    return 0;




}