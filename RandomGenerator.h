#ifndef RANDOM_GENERATOR_H
#define RANDOM_GENERATOR_H
#include <random>
#include <iostream>
class RandomGenerator {
public:
    // Constructor to initialize the random number engine with a random seed
    RandomGenerator() : gen(std::random_device{}()) {}

    // Generate a random integer within the specified range [min, max]
    int getRandomInt(int min, int max) {
        std::uniform_int_distribution<int> dis(min, max);
        return dis(gen);
    }

    // Generate a random double within the specified range [min, max]
    double getRandomDouble(double min, double max) {
        std::uniform_real_distribution<double> dis(min, max);
        return dis(gen);
    }

private:
    std::mt19937 gen; // Mersenne Twister engine with random seed
};


#endif //! RANDOM_GENERATOR_H