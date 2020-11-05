#include "Header.h";
#include <iostream>;
#include <chrono>
#include <ctime>

bool displayCalendar() {
    auto start = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(start);

    std::cout << "\nCurrent date & time: " << std::ctime(&end_time) <<  "\n";
	system("pause");
	return true;
}