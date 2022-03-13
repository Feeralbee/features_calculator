#include "operation.h"
#include "notification.h"

#include <iostream>


int main() {

	output_string_with_endl(notification_index::welcome_phrase);

	try {
		Fractions first_fraction;
		Fractions second_fraction;
		char arithmetic_action;
		std::cin >> first_fraction >> arithmetic_action >> second_fraction;
		switch (arithmetic_action) {
		case '+': 
			output_string_without_endl(notification_index::result);

			std::cout << first_fraction + second_fraction; 
			break;
		case '-': 
			output_string_without_endl(notification_index::result);

			std::cout << first_fraction - second_fraction; 
			break;
		case '*': 
			output_string_without_endl(notification_index::result);

			std::cout << first_fraction * second_fraction; 
			break;
		case '/': 
			output_string_without_endl(notification_index::result);

			std::cout << first_fraction / second_fraction; 
			break;
		}
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}