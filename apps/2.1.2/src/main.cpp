#include <iostream>
#include <fstream>

int main(int, char**) {
    int a, b;

    std::ifstream inFs("input.txt");
    inFs >> a >> b;
    // std::cin >> a >> b;

    std::ofstream outFs("output.txt");
    outFs << a + b << "\n";
    // std::cout << a + b << "\n";

    return 0;
}
