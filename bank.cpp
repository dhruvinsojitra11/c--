#include<iostream>
using namespace std;

class bankaccount
{
    private:
    int balance=1500,amount;
 
    public:

    void deposit(int amt)
    {
        
        amount = amt;

        balance = balance + amount;
        cout << "cutrent balance :" << balance ;

    }

    void withdraw(int amt)
    {
        if(amount > 1500)
        
            cout << " not enough balance " << endl;
        
    }

    
};


int main()
{
    int b1;
    bankaccount total;

    cout << " enetr amount you want to deposit: ";
    cin >> b1;

  
    total.deposit(b1);
    total.withdraw(b1);

    return 0;
}
