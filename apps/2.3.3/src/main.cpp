#include <iostream>

int main(int, char**) {
    int yar;
    std::cin >> yar;

    if (yar % 400 == 0 || (yar % 100 != 0 && yar % 4 == 0)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
