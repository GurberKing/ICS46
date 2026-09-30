#include <iostream>
#include <random>
const unsigned int SEED = 46;
int main()
{
    // std::random_device device; SEED가 주어졌기에 Entorpy Source 방식으로 하면 안됨.
    // Seed with a value from device; passing device itself does not compile.
    // std::default_random_engine engine{device()}; SEED가 주어졌기에 Entorpy Source 방식으로 하면 안됨.
    std::default_random_engine engine{SEED};
    double mean = 4.0;
    double stddev = 0.6;
    std::normal_distribution<double> d(mean, stddev);

    int counts[7] = {0};

    for (int i = 0; i < 1000; ++i)
    {
        int roll = d(engine);
        ++counts[roll];
        std::cout << roll << " ";
    }
    std::cout << std::endl << std::endl;

    std::cout << "Frequency of each value (expected ~167 each):" << std::endl;
    for (int value = 1; value <= 6; ++value)
    {
        std::cout << value << ": " << counts[value] << std::endl;
    }

    return 0;
}