#include <iostream>
#include <climits>
#include <cmath>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;
    int maxNum = INT_MIN;

    for (int i = 0; i < n; ++i) {
        int currentNum;
        std::cin >> currentNum;

        sum += currentNum;

        if (currentNum > maxNum) {
            maxNum = currentNum;
        }
    }

    // Сумата на останалите елементи е общата сума минус най-големия елемент
    int sumOfOthers = abs(sum - maxNum);

    if (maxNum == sumOfOthers) {
        std::cout << "Yes" << std::endl;
        std::cout << "Sum = " << maxNum << std::endl;
    } else {
        int diff = std::abs(maxNum - sumOfOthers);
        std::cout << "No" << std::endl;
        std::cout << "Diff = " << diff << std::endl;
    }

    return 0;
}