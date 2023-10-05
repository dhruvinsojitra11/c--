#include<iostream>
using namespace std;

class triangle
{   
    private:

     int b,h;

    public:

    triangle(int base, int height)
    {
    int   b = base ;
    int    h = height;

        int area = (b * h) / 2;

        cout << "area of traingle :" << area << endl;
        
    }

};

int main()
{
    int x,y;
    
    cout  << "enter x value: "<< endl ;
    cin >> x ;
    cout  << "enter y value: "<< endl ;
    cin >> y ;
    triangle t1(x,y);

    
    return 0;


}

