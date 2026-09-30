#include <iostream>
#include <random>
// Normal Distribution
int main() {
    double mean = 10.0;
    double stdev = 3.0;

    std::normal_distribution<double> d(mean, stdev);
    return 0;
}