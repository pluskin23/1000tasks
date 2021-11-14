#include <cmath>
#include "Util.h"
#include <iostream>

int main() {
	setlocale(0, "rus");

	int a, b;

	std::cin >> a, b;

	std::cout << perimeterSquare(a, b);
}