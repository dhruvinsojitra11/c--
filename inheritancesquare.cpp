#include<iostream>
using namespace std;

class topley
{
    protected:
    int num;
    public:
    void setnum()
    {
        cout << " ENTER NUMBER : ";
        cin >> num;
    }
    
};

class square : public topley
{
    public:

    void loop()
    {
        for (int i = 1;i <= num ; i++)
        {
            cout << i * i << "-";
        }
    }
};

int main()
{
    square s;
    s.setnum();
    s.loop();

    return 0;
}


