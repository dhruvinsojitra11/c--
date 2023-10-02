#include<iostream>
using namespace std;


    class triangle
    {
        private:
            int base,height;
            int value1,value2,value3;

        public:
            int b=base;
            int h=height;

            int a=value1;
            int d=value2;
            int c=value3;


            int areatriangle(int b,int h)
            {
                return (b * h) / 2;
                
            }

            int perimeter(int a,int d,int c)
            {
                return a+d+c;
            }
    };


int main()
{
    int k,l,m,n,o;
    cout << "enter base:";
    cin >> k;

    cout << "enter height";
    cin >> l;

    cout << " enter value 1:";
    cin >> m;

    cout << " enter value 2:";
    cin >> n;

    cout << " enter value 3:";
    cin >> o;

    triangle mytriangle;
    int resultarea = mytriangle.areatriangle(k,l);
    int res = mytriangle.perimeter(m,n,o);

    cout << "area of triangle :" << resultarea << endl ;
    cout << " area of res :" <<  res ;



    return 0;
}