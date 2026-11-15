#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        std::cout<<i<<std::endl;
        if (i > 1) {
            continue;
        }
        std::cout<<"less than or equal to one"<<std::endl;
    }

    return 0;
}