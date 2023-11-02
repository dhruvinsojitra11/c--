#include <iostream>
using namespace std;

class solid
{
    private:
    float radius,length,width,height,base;

    public:       

    solid()
    {
        //  radius =r;
        //  length =l;
        //  width =w;
        //  height =h; 
        //  base = b;
    }
    
    { 
        void area(float r)
        radius = r;
        float result = 3.14 * radius * radius;
        cout << " area of circle : " << result << endl;
    }

    void area (float b , float h)
    {
        base = b;
        height = h;

        float result = (0.5 * base * height);
        cout << "area of triangle: " << result << endl;
    }

     void area (float l,float w)
     {
        width = w;
        length = l;
         
         float result = (width * length);
        cout << " area of rectangle : " << result << endl;

     }
};

int main ()
{
    float r,b,h,l,w;
         cout << " enter radius: ";
        cin >> r;

        cout << "enter base :";
        cin >> b;
        cout << "enter height : ";
        cin >> h;
        cout << " enter length : ";
        cin >> l;
        cout << " enter width : ";
        cin >> w;

        solid s1;
        s1.area(r);
        s1.area(b,h);
        s1.area(l,w);
    

    return 0;
}