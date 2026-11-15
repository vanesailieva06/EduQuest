#include <iostream>
int main() {
    int num;
    std::cin >> num;//1234

    int firstNum = num / 1000;
    int lastNum = num % 10;
    int middle = (num % 1000) / 10;

    int result = lastNum * 1000 + middle * 10 + firstNum;

    std::cout << result;
    return 0;
}