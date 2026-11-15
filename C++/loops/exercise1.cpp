#include <iostream>

int main() {
    int i;
    std::cin>>i;
    int minNumber = INT_MAX;//2 000 000
    int maxNumber = INT_MIN;//-2 000 000
    while (i != 0) {
        if (i < minNumber) {
            minNumber = i;
        }
        if (i > maxNumber) {
            maxNumber = i;
        }
        std::cin>>i;

    }
    std::cout<<"Max: "<<maxNumber<<std::endl<<"Min: "<<minNumber;
    return 0;
}