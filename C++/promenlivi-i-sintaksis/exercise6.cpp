#include <iostream>
int main() {
    int num;
    std::cin>>num;
    int firstTwo = num / 100;
    int lastTwo = num % 100;
    bool isPal = lastTwo == firstTwo;
    std::cout<<isPal;
    return 0;
}