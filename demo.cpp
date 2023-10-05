#include <iostream>
using namespace std;

class demo
{
    public:
    demo()
    {
        cout << " hello surat" << endl;

    }

    demo(string name)
    {
        cout << " hello .cpp" << name << endl;
    }
};

int main()
{
    demo d1("dhruvin");
    return 0;
}