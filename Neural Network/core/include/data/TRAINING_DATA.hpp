#pragma once

struct Example {
	double a;
	double b;
	double answer;
};

const Example data[] {
	{1, 1, 2},
	{1, 2, 3},
	{1, 3, 4},
	{1, 4, 5},
	{1, 5, 6},
	{2, 2, 4},
	{2, 3, 5},
	{2, 4, 6},
	{2, 5, 7},
	{3, 3, 6},
	{3, 4, 7},
	{3, 5, 8},
	{4, 4, 8},
	{4, 5, 9},
	{5, 5, 10},
	{10, 10, 20},
	{12, 12, 24},
	{14, 14, 28},
	{15, 15, 30},
	{16, 16, 32},
	{18, 18, 36},
	{20, 20, 40}
};

constexpr int DATA_SIZE =
    sizeof(data) / sizeof(data[0]);
