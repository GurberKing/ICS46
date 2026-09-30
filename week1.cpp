#include <iostream>
#include <random>
// Pseudorandom Generation
// Fixed Seed
int main() {
    const unsigned int SEED = 123;
    std::default_random_engine engine{SEED};
    std::cout << engine << '\n';
    return 0;
}