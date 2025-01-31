#pragma once
#include <string>


enum class notification_index
{
	welcome_phrase,
	result,

};

void output_notification_with_endl(notification_index notification);

void output_notification_without_endl(notification_index notification);

std::string get_notification(notification_index notification);
