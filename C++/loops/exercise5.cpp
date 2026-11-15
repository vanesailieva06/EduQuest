#include <iostream>
#include <cmath>

int main() {
    double result;
    std::cin >> result; // Прочитаме първото число

    char op;
    while (std::cin >> op && op != '=') { // Четем оператор, докато не срещнем '='
        double nextNum;
        std::cin >> nextNum; // Прочитаме следващото число

        if (op == '+') {
            result += nextNum;
        } else if (op == '-') {
            result -= nextNum;
        } else if (op == '*') {
            result *= nextNum;
        } else if (op == '/') {
            if (nextNum != 0) {
                result /= nextNum;
            }
        } else if (op == '%') {
            // За оператора % използваме std::fmod, тъй като работим с double
            if (nextNum != 0) {
                result = std::fmod(result, nextNum);
            }
        }
    }

    std::cout << result << std::endl;

    return 0;
}