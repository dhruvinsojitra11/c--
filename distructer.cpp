#include <iostream>
using namespace std;

class engineer

{
    public: 

    engineer()
    {
        cout << " hello engineer \n";
        // count++;
    }

    void softwareengineer()
    {
        cout << " i am doing software programming \n";
    }
    ~engineer()
    {
        cout << " i am in engineering field\n";
    }
};

int main()
{
    engineer e1;
    engineer e2;
    e1.softwareengineer();
    e2.softwareengineer();
    return 0;
}