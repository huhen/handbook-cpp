#include <iostream>

int main(int, char**) {
    int m, yar;
    std::cin >> m >> yar;

    int n;

    if (m == 2) {
        n = (yar % 400 == 0 || (yar % 100 != 0 && yar % 4 == 0)) ? 29 : 28;
    } else if (m < 8) {
        n = m & 1 ? 31 : 30;
    } else {
        n = m & 1 ? 30 : 31;
    }

    std::cout << n << "\n";

    return 0;
}
