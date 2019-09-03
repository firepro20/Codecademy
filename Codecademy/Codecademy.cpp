#include <iostream>
#include <vector>

void tenth_power_exercise();

int main()
{
    std::cout << "Hello Codecademy!\n";
	std::cout << "This is a new line\n\n";
	tenth_power_exercise();

}

double tenth_power(int num) {

	return pow(num, 10);
	//base, exponential

}

void tenth_power_exercise() {

	std::cout << tenth_power(0) << "\n";
	std::cout << tenth_power(1) << "\n";
	std::cout << tenth_power(2) << "\n";

}


