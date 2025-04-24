#include <iostream>
#include <vector>

using namespace std;

int main(int, char**) {
    size_t n;
    cin >> n;

    int a;
    vector<int> va;
    while (va.size() != n) {
        cin >> a;
        va.push_back(a);
    }

    size_t dist = 0;
    size_t posible;

    for (size_t i = 0; i != va.size(); ++i) {
        for (size_t j = va.size() - 1; j != i; --j) {
            posible = j - i + 1;
            if (posible < dist) {
                break;
            }

            bool isValid = true;
            for (size_t step = 0; step < posible / 2; ++step) {
                if (va[i + step] != va[j - step]) {
                    isValid = false;
                    break;
                }
            }

            if (isValid) {
                dist = posible;
            }
        }

        posible = va.size() - i;
        if (posible < dist) {
            break;
        }
    }

    std::cout << dist << "\n";

    return 0;
}
