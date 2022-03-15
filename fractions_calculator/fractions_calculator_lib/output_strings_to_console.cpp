#include "output_strings_to_console.h"

#include <iostream>

void output_notification_with_endl(notification_index notification)
{
	std::cout << get_notification(notification) << std::endl;
}

void output_notification_without_endl(notification_index notification)
{
	std::cout << get_notification(notification);
}

std::string get_notification(notification_index notification)
{
	std::string notification_message = " ";
	if (notification == notification_index::welcome_phrase)
	{
		notification_message = "Hi! This is fraction calculator. Example of data entery: 1/2(first fraction) /(arithmetic action) 1/2(second fraction)";
	}
	else if (notification == notification_index::result)
	{
		notification_message = "Result is: ";
	}
	return notification_message;
}