#include<iostream>
using namespace std;

class fock
{
    int l,w,h;

    public:
    void setdata(int a,int b,int c)
    {
        l=a;
        w=b;
        h=c;
    }

    int getarea()
    {
        return l*w*h;
    }

    friend fock operator+(fock m,fock n)
    {
        fock f;
        f.l = m.l + n.l;
        f.w = m.w + n.w;
        f.h = m.h+ n.h;

        return f;
    }

    friend fock operator++(fock k)
    {
        fock f;
        f.l = ++k.l;
        f.w = ++k.w;
        f.h = ++k.h;

        return f;
    }
};

int main()
{
    fock f1,f2,f3,f4;

    f1.setdata(7,8,9);
    cout << "total f1 is : " << f1.getarea() << endl;

    f2.setdata(6,7,8);
    cout << "total f2 is : " << f2.getarea() << endl;

    f3 = f1 + f2;
    cout << " total f3 is :" << f3.getarea() << endl;

    f4 = ++f3;
    cout << " total f4 is : " << f4.getarea() << endl;

    return 0; 
}