#include <iostream>

int main() {
    unsigned int number;
    std::cin >> number;


    // За да намерим правилната позиция отляво надясно без масиви,
    // първо обръщаме числото
    int temp = number;//текуща променлива
    int reversed = 0;
    int digitCount = 0;

    while (temp > 0) {
        reversed = reversed * 10 + (temp % 10);
        temp /= 10;
        digitCount++;
    }

    int oddSum = 0;
    int evenSum = 0;

    // Обхождаме обърнатото число (което съответства на позициите отляво надясно)
    for (int position = 1; position <= digitCount; ++position) {
        int digit = reversed % 10;

        if (position % 2 != 0) {
            oddSum += digit;
        } else {
            evenSum += digit;
        }

        reversed /= 10;
    }

    std::cout << "Odd: " << oddSum << std::endl<<"Even: " << evenSum << std::endl;

    return 0;
}