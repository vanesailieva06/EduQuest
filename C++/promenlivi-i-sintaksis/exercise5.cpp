#include <iostream>

int main() {
    int totalMinutes;
    std::cin >> totalMinutes;

    int totalHours = totalMinutes / 60;
    int remainingMinutes = totalMinutes % 60;

    int totalDays = totalHours / 24;
    int remainingHours = totalHours % 24;

    int years = totalDays / 365;
    int remainingDays = totalDays % 365;

    std::cout << "Years: " << years << std::endl;
    std::cout << "Days: " << remainingDays << std::endl;
    std::cout << "Hours: " << remainingHours << std::endl;

    return 0;
}