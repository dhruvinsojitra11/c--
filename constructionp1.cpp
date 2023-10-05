#include<iostream>
using namespace std;

class student
{
    private :
    int mark1,mark2,mark3;

    public:
      
    student()
    {
        void setmarks(int sub1,int sub2,int sub3)
        {
            cout << "enter sub1 marks:" ;
            cin >> sub1;
            cout << "enter sub2 marks:" ;
            cin >> sub2;
            cout << "enter sub1 marks:" ;
            cin >> sub3;
        }

        void total(int sub1,int sub2,int sub3)
        {
            total = sub1+sub2+sub3;
            cout << " total marks: " << total << endl

        }
    }

    

};


int main()
{
   student s1
   int m1, m2, m3;

   s1.setmarks(m1, m2, m3);
   s1.total(m1, m2, m3);
}

