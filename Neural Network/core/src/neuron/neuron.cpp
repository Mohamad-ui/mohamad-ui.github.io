#include "neuron/NEURON.hpp"
#include <random>

Neuron::Neuron() {
	static std::random_device rd;
	static std::mt19937 gen(rd());

	std::uniform_real_distribution<double> dist(-1.0, 1.0);

	w1 = dist(gen);
	w2 = dist(gen);
	bias = dist(gen);

}

double Neuron::forward(double a, double b) {
	return a * w1 + b * w2 + bias;
}
