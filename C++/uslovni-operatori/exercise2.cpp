#include <iostream>

int main() {
    int firstNum, secondNum, thirdNum, forthNum;
    std::cin>>firstNum>>secondNum>>thirdNum>>forthNum;
    int diff = INT_MAX;
    int closeNum = 0;

    if (abs(firstNum - secondNum) <= diff) {
        diff = abs(firstNum - secondNum);
        closeNum = secondNum;
    }
    if (abs(firstNum - thirdNum) <= diff) {
        diff = abs(firstNum - thirdNum);
        closeNum = thirdNum;
    }
    if (abs(firstNum - forthNum) <= diff) {
        diff = abs(firstNum - forthNum);
        closeNum = forthNum;
    }
    std::cout<<closeNum;
    return 0;
}