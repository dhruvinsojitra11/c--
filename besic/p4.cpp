#include <iostream>

int main() {
    int a = 8;
    int b = 6;
    int c = 4;
    int d;
    d = a + (b - c) * a / c;
    std::cout << "The value of d is: " << d << std::endl;
    return 0;
}
