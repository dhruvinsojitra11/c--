#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string str = " hello world";
    ofstream file ("file1.txt" , ios::app);
    if(file.is_open())
    {
        file << " dhruvin " << endl;
        file << "sojitra " << endl;
        file.close();

    }

    return 0;
}