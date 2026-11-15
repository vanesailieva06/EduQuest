#include <iostream>

// Функция за намиране на пиковите дни
// Връща указател към нов динамичен масив с индексите на пиковете
// Чрез указателя countPeaks връщаме броя намерени пикове
int* findPeaks(const double* arr, int size, int* countPeaks) {
    if (arr == nullptr || countPeaks == nullptr || size < 3) {
        if (countPeaks != nullptr) {
            *countPeaks = 0;
        }
        return nullptr;
    }

    // 1. Преброяваме колко пика има (пик = ден, по-голям от предишния и следващия)
    int count = 0;
    for (int i = 1; i < size - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }

    *countPeaks = count; // Записваме броя пикове в променливата от main()

    if (count == 0) {
        return nullptr;
    }

    // 2. Заделяме динамичен масив за индексите на пиковите дни
    int* peakIndices = new int[count];

    // 3. Записваме индексите на пиковете в новия масив с обикновено индексиране
    int index = 0;
    for (int i = 1; i < size - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            peakIndices[index] = i;
            index++;
        }
    }


    return peakIndices; // Връщаме адреса на новия масив
}

int main() {
    int days = 0;
    std::cout << "Enter total number of days: ";
    std::cin >> days;

    if (days < 3) {
        std::cout << "Need at least 3 days to calculate peak profits!" << std::endl;
        return 1;
    }

    // 1. Заделяме динамичен масив за дневните печалби
    double* profits = new double[days];

    std::cout << "Enter profits for " << days << " days: ";
    for (int i = 0; i < days; i++) {
        std::cin >> profits[i]; // Стандартно индексиране
    }

    int peakCount = 0;
    
    // 2. Извикваме функцията, която заделя и връща масива с пиковете
    int* peakIndices = findPeaks(profits, days, &peakCount);

    // 3. Извеждаме намерените пикове
    std::cout << "\n--- Peak Profit Analysis ---" << std::endl;
    std::cout << "Total peaks found: " << peakCount << std::endl;

    if (peakCount > 0 && peakIndices != nullptr) {
        std::cout << "Peak days and values:" << std::endl;
        for (int i = 0; i < peakCount; i++) {
            int dayIndex = peakIndices[i];
            std::cout << "Day " << dayIndex + 1 << ": " << profits[dayIndex] << " profit" << std::endl;
        }
    } else {
        std::cout << "No peak days found." << std::endl;
    }

    // 4. Освобождаваме И ДВАТА динамични масива!
    delete[] profits;
    profits = nullptr;

    delete[] peakIndices; // Освобождаваме масива, заделен във функцията findPeaks
    peakIndices = nullptr;

    return 0;
}