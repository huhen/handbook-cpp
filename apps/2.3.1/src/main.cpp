#include <iostream>

int main(int, char**) {
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    std::string result{"NO"};

    if (x1 > 0 && x1 <= 8 && y1 > 0 && y1 <= 8 &&
        x2 > 0 && x2 <= 8 && y2 > 0 && y2 <= 8)
    {
        if (x1 == x2 || y1 == y2 ||
            std::abs(x1 - x2) == std::abs(y1 - y2))
        {
            result = "YES";
        }
    }

    std::cout << result << "\n";

    return 0;
}
