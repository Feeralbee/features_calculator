#include "gtest/gtest.h"
#include "notification.h"

TEST(get_notifications_tests, get_notifications)
{
	ASSERT_EQ(get_notification(notification_index::welcome_phrase), "Hi! This is fraction calculator. Example of data entery: 1/2(first fraction) /(arithmetic action) 1/2(second fraction)");
}
