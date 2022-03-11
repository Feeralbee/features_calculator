#pragma once
#include <string>


enum class notification_index
{
	welcome_phrase,

};

void output_string(notification_index notification);

std::string get_notification(notification_index notification);
