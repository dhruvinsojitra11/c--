#include<iostream>
#include<math.h>
using namespace std;

int main()

{
    double a = 1.7654;
    double result,result1,result2,result3;

    result = ceil(a);
    result1 = floor(a);
    result2 = round(a);
    result3 = abs(-100);

    cout << result << endl;
    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;
    return 0;
}