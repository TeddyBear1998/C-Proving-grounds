#include "Header.h"
#include <cstdlib>

bool fetchResult(int option) {

	bool return_type = true;

	switch (option) {
		case 1: 
			return_type = accountManager();
			break;	
		case 2: 
			return_type = displayCalendar();
			break;
		case 3: 
			return_type = displayCalculator();
			break;
		case 4:
			return_type = displayGraph();
			break;
		case 5:
			return_type = exitProgram();
			break;
		default :			
			displayMenu();
	}

	return return_type;
}