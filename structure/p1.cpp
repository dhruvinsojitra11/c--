#include <iostream>
#include <string>

struct data
{
    int p;
    std::string product;
    int rate, qty, amt, dis, billamt, gst, netbill;
};

int main()
{
    data a[5];
    int i;
    for (i = 0; i < 2; i++)
    {
        std::cout << "enter customer number:";
        std::cin >> a[i].p;
        std::cout << "enter products name:";
        std::cin >> a[i].product;
        std::cout << "enter rate:";
        std::cin >> a[i].rate;
        std::cout << "enter qty:";
        std::cin >> a[i].qty;
    }
    std::cout << "\n\nproducts No.\tProducts Name\trate\tQty.\tAmmount\tdiscount\tbillammount\tGST\tnetbill";
    for (i = 0; i < 2; i++)
    {
        a[i].amt = a[i].rate * a[i].qty;
        a[i].dis = a[i].amt / 100 * 5;
        a[i].billamt = a[i].amt - a[i].dis;
        a[i].gst = a[i].billamt / 100 * 18;
        a[i].netbill = a[i].billamt + a[i].gst;
        std::cout << "\n" << a[i].p << "\t\t" << a[i].product << "\t\t" << a[i].rate << "\t" << a[i].qty << "\t" << a[i].amt << "\t\t" << a[i].dis << "\t\t" << a[i].billamt << "\t\t" << a[i].gst << "\t" << a[i].netbill;
    }
}
