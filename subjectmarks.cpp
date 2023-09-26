#include<iostream>
using namespace std;

int main()
{
    int maths,guj,eng,total,percent;

    cout << " enter your maths marks: ";
    cin >> maths;

    cout << " enter your guj marks: ";
    cin >> guj;

    cout << "enetr your eng marks: ";
    cin >> eng;

    total=maths+guj+eng;
    percent=total * 0.3;

    cout << "total marks: " << total << endl;
    cout << "percentage:  " << percent;
}