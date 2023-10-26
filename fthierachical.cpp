#include<iostream>
using namespace std;

class base
{
    protected :
    int n;

    public:

    void setN()
    {
        cout << " enter n number : " ;
        cin >> n;
    }
};

class factorial : public base
{
    protected :
    int fact = 1;

    public:

    void calc()
    {
        for (int i = n; i >= 1 ; i-- )
        { 
            
            fact = fact * i;
        
        }

        cout << " factorial : " << fact << endl;
    }

};

class numbertable : public base{
    public :

    void printtable()
    {
       for  (int i = 1; i <= 10; i++)
        {
                cout << n  << " * " << i << " = " << n * i << "\n";
        }
    }
};

int main()
{
    factorial f;
    f.setN();
    f.calc();

    numbertable n;
    n.setN();
    n.printtable();
}

//15 * 2 = 30
//15 * 3 = 45
//15 * 4 = 60
//15 * 5 = 75
//15 * 6 = 90
//15 * 7 = 105
//15 * 8 = 120
//15 * 9 = 135
//15 * 10 = 150 