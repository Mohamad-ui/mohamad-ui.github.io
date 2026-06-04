#pragma once

class Neuron {
public:
	double w1;
	double w2;
	double bias;

        Neuron();

	double forward(double a, double b);
	
};

