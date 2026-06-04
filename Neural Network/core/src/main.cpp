#include <iostream>
#include "neuron/NEURON.hpp"
#include "data/TRAINING_DATA.hpp"
#include <fstream>

int main() {

    Neuron n;


    double learningRate = 0.001;

    for (int epoch = 0; epoch < 1000; epoch++) {
        for (int i = 0; i < DATA_SIZE; i++) {
        
            double guess = n.forward(data[i].a, data[i].b);
            double error = data[i].answer - guess;

            n.w1 += error * data[i].a * learningRate;
            n.w2 += error * data[i].b * learningRate;
            n.bias += error * learningRate;
        }
    }

    std::cout << "w1 = " << n.w1 << '\n';
    std::cout << "w2 = " << n.w2 << '\n';
    std::cout << "bias = " << n.bias << '\n';   

    double a;
    double b;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "AI says: "
          << n.forward(a, b)
          << '\n';

    std::ofstream saveFile("brain.txt");

    saveFile << n.w1 << '\n';
    saveFile << n.w2 << '\n';
    saveFile << n.bias << '\n';

    return 0;
}
