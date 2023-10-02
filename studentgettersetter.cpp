#include <iostream>
using namespace std;

class student
{
    private:

        int maths,sci,eng,guj,total;

    public:

        int m=maths,s=sci,e=eng,g=guj,t=total;
    
    void gettotal(int m,int s,int g,int e)
    {
        t=m+s+e+g;
        cout << "total marks: " << t << endl;
    }

};


int main()
{  
        student s1[5];

        int maths[5],sci[5],guj[5],eng[5];

        for (int i=0;i<=4;i++)

{
        cout << "enter maths:" ;
        cin >> maths[i];

        cout << "enter sci:" ;
        cin >> sci[i];

        cout << "enter guj:" ;
        cin >> guj[i];

        cout << "enter eng:" ;
        cin >> eng[i];
}

for(int i=0;i<=4;i++)
{

    s1[i].gettotal(maths[i],sci[i],guj[i],eng[i]);

}
    return 0;
}