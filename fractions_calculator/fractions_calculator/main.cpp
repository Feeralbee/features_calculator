#include "operation.h"
#include "output_strings_to_console.h"

#include <iostream>


int main() {

	output_notification_with_endl(notification_index::welcome_phrase);

	try {
		Fractions first_fraction;

		Fractions second_fraction;

		char arithmetic_action;

		Fractions calculation_result;

		std::cin >> first_fraction >> arithmetic_action >> second_fraction;

		if (arithmetic_action == '+')
		{
			calculation_result = first_fraction + second_fraction;
		}

		else if (arithmetic_action == '-')
		{
			calculation_result = first_fraction - second_fraction;
		}

		else if (arithmetic_action == '*')
		{
			calculation_result = first_fraction * second_fraction;
		}

		else if (arithmetic_action == '/')
		{
			calculation_result = first_fraction / second_fraction;
		}

		output_notification_without_endl(notification_index::result);

		output_result_of_calculation(calculation_result);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}