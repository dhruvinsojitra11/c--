#include<iostream>
using namespace std;

class person
{
    private:
        int age;
        string name,city;

    public:
        void setname(string n)
        {
            name = n;
        }

        void setcity(string c)
        {
            city = c;
        }

        void setage(int a)
        {
            age = a;
        }

        void getname()
        {
            cout << "name: "<< name << endl;
        }

        void getcity()
        {
            cout << "city: " << city << endl;
        }

        void getage()
        {
            cout << "age:" << age;
        }
};

int main()
{
    person p1;
    int ages;
    string x,y;

    cout <<" enter name : " ;
    cin >> x;

    cout <<" enter city  : " ;
    cin >> y;

    cout <<" enter age : " ;
    cin >> ages;

    p1.setname(x);
    p1.setcity(y);
    p1.setage(ages);

    p1.getname();
    p1.getcity();
    p1.getage();



    return 0;
}