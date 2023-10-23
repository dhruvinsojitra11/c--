#include<iostream>
using namespace std;

class human
{
    protected:
    string name;
    int eng,maths,guj;
    public: 
    void setmarks()
    {
        cout << " enter marks of eng :";
        cin >> eng;
        cout << " enter marks of maths :";
        cin >> maths;
        cout << " enter marks of guj :";
        cin >> guj;
    }

    void setname()
    {
        cout << " ENTER YOUR NAME : : ";
        cin >> name;
    }

};

class result : public human
{
   public:
   int total;
   int percentage;

   void calculate()
    {
        total = eng + maths + guj;
        percentage = (total * 0.3);

        
    }

    void getdata()
    {
        cout << "NAME\tENG\tMATHS\tGUJ\tTOTAL\tPERCENTAGE" << endl;
        cout << name << "\t" << eng << "\t" << maths << "\t" << guj << "\t"  << total << "\t" << percentage << "\t" << endl;
    }
};

int main()
{
    result r;
    r.setname();
    r.setmarks();
    r.calculate();
    r.getdata();
     return 0;

}
