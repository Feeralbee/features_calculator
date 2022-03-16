#include "Fractions.h"

#include "gtest/gtest.h"


TEST(num_and_denum, get_num_and_get_denum)
{
	Fractions obj;
	ASSERT_EQ(obj.get_denominator(), 1);
	ASSERT_EQ(obj.get_numerator(), 0);
}

TEST()
{
	
}