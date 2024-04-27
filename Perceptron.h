#ifndef PERCEPTRON_H
#define PERCEPTRON_H
#include <vector>
#include "RandomGenerator.h"
static RandomGenerator rng;

class Perceptron{
private:
    std::vector<double> weights;
    double learning_rate;
    int activate(double sum);
public:
    int feedForward(const std::vector<double>& inputs);
    Perceptron(int num_inputs, double learning_rate);
    void train(const std::vector<double>& inputs, int target);
};


#endif //! PERCEPTRON_H