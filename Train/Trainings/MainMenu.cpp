#include "Header.h"
#include <iostream>

int displayMenu()
{
    std::cin.clear();    
    int selection = 0;

	std::cout << "1. Account balance\n";
	std::cout << "2. Calendar\n";
	std::cout << "3. Calculation\n";
	std::cout << "4. Display Graph\n";
	std::cout << "5. Quit application\n";

    std::cout << "Please select an item from the menu: ";
    std::cin >> selection;
    while (std::cin.fail() || selection < 1 || selection >= 6) {
        std::cout << "Please enter a valid item selection form the menu: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> selection;
    }

    return selection;

}
