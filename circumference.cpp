#include <iostream>
using namespace std;

class circle
{
    private:
        int radius;

    public:
        // circle(int radius);
        int r = radius;


    void area(int r)
    {
        cout << 3.14 * r * r;
    }

    void circur(int r)
    {
        cout << 2*3.14*r <<endl ;
    }
};

int main()
{
    int r1;
    cout << "enter radius: ";
    cin >> r1;

    circle circle1;
    circle1.area(r1);
    circle1.circur(r1);
    return 0;


}


    

