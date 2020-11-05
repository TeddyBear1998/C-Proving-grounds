#include "Header.h";
#include <iostream>;

bool displayCalculator() {
	// TODO:: Gives the user an option input 2 numbers, then select an action.
	// Make sure division by 0 is not possible.
	double num1, num2 = 0;
	int action = 0;

	std::cout << "\nPlease enter a number: ";
	std::cin >> num1;

	while (num1 == 0) {
		std::cout << "\nNo actions can be done with a 0, please enter another number: ";
		std::cin >> num1;
	}

	std::cout << "\nPlease enter another number: ";
	std::cin >> num2;	

	while (num2 == 0) {
		std::cout << "\nNo actions can be done with a 0, please enter another number: ";
		std::cin >> num2;
	}

	std::cout << "\nThe chosen numbers are: " << num1 << " and " << num2 << "\n";
	
	std::cout << "1.Add\n2.Subtract\n3.Multiply\n4.Divide";
	std::cout << "\nPlease select an action to do with those numbers: ";
	std::cin >> action;
	while (std::cin.fail() || action < 1 || action >= 5) {
		std::cout << "Please enter a valid item selection form the menu: ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> action;
	}
	switch(action) {
		case 1: 
			std::cout << "\nAddition of the numbers: " << num1 + num2;
			break;
		case 2:
			std::cout << "\nSubtraction of the numbers: " << num1 - num2;
			break;
		case 3:
			std::cout << "\nMultiplication of the numbers: " << num1 * num2;
			break;
		case 4: 
			std::cout << "\nDivision of the numbers: " << num1 / num2;
			break;
		default:
			std::cout << "\nA default action has occurred\n";
			std::cout << "\nAddition of the numbers: " << num1 + num2;
	}
	std::cout << "\n";
	system("pause");
	return true;
}