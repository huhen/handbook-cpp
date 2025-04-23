#include <iostream>

int main(int, char**) {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a > b) {
        std::swap(a, b);
    }
    if (b > c) {
        std::swap(b, c);
    }

    if (c >= a + b) {
        std::cout << "UNDEFINED\n";
    } else if (a * a + b * b == c * c) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}
