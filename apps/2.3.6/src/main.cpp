#include <iostream>

int main(int, char**) {
    int n;
    std::cin >> n;

    int sum = 0;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    std::cout << sum << "\n";

    return 0;
}
