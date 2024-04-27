#include "Perceptron.h"

int main(int argc, char * argv[]){
    std::vector<std::vector<double>> inputs = {
        {0, 0},
        {0, 1},
        {1, 0},
        {1, 1},
    };
    std::vector<int> targets = {0, 0, 0, 1};

    size_t num_inputs = 2;
    double learning_rate = 0.1; 
    Perceptron perceptron(num_inputs, learning_rate);

    std::cout << "Training..." << std::endl;
    for(size_t i{}; i < 100000; ++i){
        int index = i % 4;
        perceptron.train(inputs[index], targets[index]);
    }

    std::cout << "Training complete." << std::endl;
    std::cout << "Testing.." << std::endl;
    for(size_t i{}; i < inputs.size(); ++i){
        int output = perceptron.feedForward(inputs[i]);
        std::cout << "Input: " << inputs[i][0] << ", " << inputs[i][1] << " --> Output: " << output << std::endl; 
    }
    return 0;
}
