#include <iostream>
#include <random>
// Pseudorandom Generation
// Fixed Seed
int main() {
    std::random_device device;
    std::default_random_engine engine{device()};
    return 0;
}