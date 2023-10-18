#include<iostream>
using namespace std;

class list
{
    friend list add(list,list,list,list);
    int j,k;

    public:
    void setdata(int a, int b)
    {
        j=a , k=b;
    }

    int getarea()
    {
        return j * k;
    }
};

list add (list m,list n,list x,list y)
{
    list t;
    t.j = m.j + n.j + x.j - y.j;
    t.k = m.k + n.k + x.k - y.k;

    return t;

}

int main ()
{
    list a,b,c,d,e;

    a.setdata ( 5,6 );
    cout << " area of rectangle a is : " <<  a.getarea() << endl;

    b.setdata ( 7,8 );
    cout << " area of rectangle a is : " <<  b.getarea() << endl;

    c.setdata ( 9,10 );
    cout << " area of rectangle a is : " <<  c.getarea() << endl;

    d.setdata ( 3,4);
    cout << " area of rectangle a is : " <<  d.getarea() << endl;

    e = add (a,b,c,d);
    cout << " area of rectangle e is :" << e.getarea() << endl;

}