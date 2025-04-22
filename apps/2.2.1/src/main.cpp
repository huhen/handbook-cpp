#include <iostream>

int main(int, char **)
{
    const double inch = 2.54;

    double cm;
    std::cin >> cm;

    std::cout << cm / inch << "\n";

    return 0;
}
