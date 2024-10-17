#include <iostream>

int main()
{

    int a = 3, b = 5;
    std::cout << "Áûכמ a = " << a << " b = " << b << std::endl;
    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "a = " << a << " b = " << b << std::endl;
    a = 3;
    b = 5;

    a = a - b;
    b = a + b;
    a = -a + b;

    std::cout << "a = " << a << " b = " << b << std::endl;
    a = 3;
    b = 5;

    a ^= b ^= a ^= b;
    std::cout << "a = " << a << " b = " << b << std::endl;
    return 0;
}
