#include <iostream>
int main() {
    int num;
    std::cin>>num;//например : 123
    double result;
    result += num % 10; // 3
    num /= 10;//123
    result += num % 10;//2 + 3 = 5
    num /= 10;//1
    result += num; //6
    std::cout << result / 3;//2
    return 0;
}