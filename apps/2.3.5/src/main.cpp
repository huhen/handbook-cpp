#include <iostream>
#include <iomanip>

int main(int, char**) {
    int n, k;
    std::cin >> n >> k;

    int j = 1 - n;

    while (true)
    {
        for (int i = 0; i < 7; ++i)
        {
            if (++j > k) {
                if (i != 0) {
                    std::cout << "\n";
                }
                return 0;
            }

            if (i != 0) {
                std::cout << " ";
            }

            if (j <= 0) {
                std::cout << "  ";
                continue;
            }

            std::cout << std::setw(2) << j;
        }
        std::cout << "\n";
    }
}
