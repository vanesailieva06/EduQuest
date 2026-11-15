#include <iostream>

int main() {
    double weight;
    char service;//услугата
    std::cin>>weight;
    std::cin>>service;

    double servicePrice = 0;
    if (service == 'S') {
        servicePrice = 2.5 + 0.5 * weight;
    }else if (service == 'E') {
        servicePrice = 5 + 1.2 * weight;
    }else if (service == 'V') {
        servicePrice = 10 + 2 * weight;
    }else {
        std::cout<<"Invalid service";
    }

    if (weight > 10) {
        servicePrice += 5;
    }

    std::cout<<"The price of the service: "<<servicePrice<<std::endl;
    std::cout<<"hello";
    return 0;
}