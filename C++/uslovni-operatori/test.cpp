#include <iostream>
#include <cstring>
int main() {
    int score = 55;
    std::string result = (score >= 60)
     ? "Success"
     : "Failed";
    std::cout << result; // "Скъсан"


}