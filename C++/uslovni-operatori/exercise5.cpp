#include <iostream>

using namespace std;

int main() {
    int hh, mm;   // Текущо време
    int chh, cmm; // Време за прибавяне

    cout << "Current time:";
    cin >> hh >> mm;

    cout << "Added time:";
    cin >> chh >> cmm;

    // Превръщаме цялото време в общ брой минути
    int totalMinutes = (hh * 60 + mm) + (chh * 60 + cmm);

    // Пресмятаме новия час и минути
    int newMinutes = totalMinutes % 60;
    int totalHours = totalMinutes / 60;
    int newHours = totalHours % 24; // Гарантира, че часът е между 0 и 23

    // Извеждане с форматиране на водещи нули
    cout << "The new time is: ";

    if (newHours < 10) {
        cout << "0";
    }
    cout << newHours << ":";

    if (newMinutes < 10) {
        cout << "0";
    }
    cout << newMinutes << endl;

    return 0;
}