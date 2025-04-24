#include <iostream>
#include <string>

using namespace std;

int main(int, char**) {
    string j, s;
    getline(cin, j);
    getline(cin, s);

    int n = 0;
    for (char c : s) {
        if (j.find(c) != string::npos) {
            ++n;
        }
    }

    std::cout << n << "\n";

    return 0;
}
