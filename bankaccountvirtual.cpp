#include<iostream>
using namespace std;

class bank
{
    public:

    int totalbalance;

    void balance()
    {
        cout << " enter your balance : ";
        cin >> totalbalance;
    }

    virtual void money()
    {
        cout << " welcome to my bank ";
    }

};


class deposit : public bank
{
    int amount;

    void getamlount()
    {
        cout << " entwr amount : ";
        cin >> amount;
    }

    void money() override
    {
        totalbalance = totalbalance + amount;
        cout << " total balance : " << totalbalance << endl;
    }
};

int main()
{
bank * b;
deposit d;
}


