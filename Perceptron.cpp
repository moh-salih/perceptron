#include "Perceptron.h"

#include <cstdlib>
#include <ctime>

Perceptron::Perceptron(int num_inputs, double learning_rate): learning_rate{learning_rate}{
    for(size_t i{}; i < num_inputs; ++i){
        double weight = rng.getRandomDouble(-1, 1);
        weights.push_back(weight);
    }

    
}

int Perceptron::activate(double sum){
    return sum > 0 ? 1:0;
}

int Perceptron::feedForward(const std::vector<double>& inputs){
    double sum = 0;
    for(size_t i{}; i < weights.size(); ++i){
        sum += inputs[i] * weights[i];
    }
    return activate(sum);
}

void Perceptron::train(const std::vector<double>& inputs, int target){
    int output = feedForward(inputs);
    int error = target - output;
    // Update the weights
    for(size_t i{}; i < weights.size(); ++i){
        weights[i] += learning_rate * error * inputs[i];
    }
}

