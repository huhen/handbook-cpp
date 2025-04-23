#include <iostream>
#include <cmath>

int main(int, char**) {
    int n;
    std::cin >> n;

    double ln2 = 1;

    for (int k = 2; k <= n; ++k)
    {
        ln2 += std::pow(-1, k + 1) / k;
    }

    std::cout << ln2 << "\n";

    return 0;
}
