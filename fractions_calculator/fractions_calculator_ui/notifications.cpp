#include "notifications.h"

#include <iostream>

void output_string(notification_index notification)
{
	std::cout << get_notification(notification) << std::endl;
}

std::string get_notification(notification_index notification)
{
	std::string message = " ";
	if (notification == notification_index::welcome_phrase)
	{
		message = "Hi! This is fraction calculator. Example of data entery: 1/2(first fraction) /(arithmetic action) 1/2(second fraction)";
	}
	return message;
}