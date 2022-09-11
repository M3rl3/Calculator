#include <iostream>

class Calculator {
public:
	double operation(double, char, double);
};

double Calculator::operation(double a, char oper, double b) {

	switch (oper) {
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	default:
		return 0.0;		
	}	
}

void main(int argc, char** argv) {

	double i = 0.0;
	double j = 0.0;
	double r = 0.0;
	char operand;

	yes:
	std::cin >> i >> operand >> j;

	Calculator c;
	
	r = c.operation(i, operand, j);
	std::cout << r;

	if ((int)r % 2 == 0) std::cout << "\nResult is even.";
	else std::cout << "\nResult is odd.";

	std::cout << "\nPress any key to continue or press q to quit." << std::endl;
	
	char input;
	std::cin >> input;

	if (input == 'q') {}
	else goto yes;

}