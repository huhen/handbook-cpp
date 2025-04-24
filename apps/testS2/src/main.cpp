#include <iostream>
#include <string>

using namespace std;

static int64_t getResult(const string& s, size_t& pos) {
    int64_t result = 0;
    int64_t currentNumber = 0;
    bool isPositive = true;

    while (pos != s.size()) {
        char c = s[pos++];

        if (isdigit(c)) {
            currentNumber = currentNumber * 10 + (c - '0');
            continue;
        }

        if (currentNumber != 0) {
            result += isPositive ? currentNumber : -currentNumber;
            currentNumber = 0;
            isPositive = true;
        }

        if (c == ' ') {
            continue;
        }
        if (c == ')') {
            break;
        }

        if (c == '(') {
            int64_t subResult = getResult(s, pos);
            result += isPositive ? subResult : -subResult;
            isPositive = true;
            continue;
        }

        if (c == '-') {
            isPositive = !isPositive;
            continue;
        }
    }

    return result + (isPositive ? currentNumber : -currentNumber);
}

int main(int, char**) {
    string s;
    getline(cin, s);

    size_t start = 0;
    int64_t result = getResult(s, start);

    std::cout << result << "\n";

    return 0;
}
