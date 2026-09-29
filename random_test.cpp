#include <iostream>
#include <random>

int main()
{
    std::random_device device;
    // Seed with a value from device; passing device itself does not compile.
    std::default_random_engine engine{device()};
    std::uniform_int_distribution<int> distribution{1, 6};

    int counts[7] = {0};

    for (int i = 0; i < 1000; ++i)
    {
        int roll = distribution(engine);
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
