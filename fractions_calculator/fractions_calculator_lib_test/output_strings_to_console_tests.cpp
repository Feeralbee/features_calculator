#include "output_strings_to_console.h"

#include "gtest/gtest.h"

TEST(notifications, output_messages_to_console)
{
	ASSERT_EQ(get_notification(notification_index::welcome_phrase), "Hi! This is fraction calculator. Example of data entery: 1/2(first fraction) /(arithmetic action) 1/2(second fraction)");
	ASSERT_EQ(get_notification(notification_index::result), "Result is: ");
}
