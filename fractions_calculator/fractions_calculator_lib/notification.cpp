#include "notification.h"

#include <iostream>

void output_string_with_endl(notification_index notification)
{
	std::cout << get_notification(notification) << std::endl;
}

void output_string_without_endl(notification_index notification)
{
	std::cout << get_notification(notification);
}

std::string get_notification(notification_index notification)
{
	std::string message = " ";
	if (notification == notification_index::welcome_phrase)
	{
		message = "Hi! This is fraction calculator. Example of data entery: 1/2(first fraction) /(arithmetic action) 1/2(second fraction)";
	}
	else if (notification == notification_index::result)
	{
		message = "Result is: ";
	}
	return message;
}