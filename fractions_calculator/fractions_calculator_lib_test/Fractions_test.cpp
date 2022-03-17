#include "Fractions.h"

#include "gtest/gtest.h"


TEST(num_and_denum, get_num_and_get_denum)
{
	Fractions data;
	ASSERT_EQ(data.get_denominator(), 1);
	ASSERT_EQ(data.get_numerator(), 0);
}

TEST(greatest_common_division_test, get_greatest_common_division)
{
	Fractions data;
	ASSERT_EQ(data.greatest_common_divisor(1, 0), 1);
	ASSERT_EQ(data.greatest_common_divisor(0, 1), 1);

}

TEST (Fraction, get_new_numerator_and_new_denominator)
{	Fractions obj;
	Fractions(5, 6);
	ASSERT_EQ(obj.get_numerator(), 5);
	ASSERT_EQ(obj.get_denominator(), 6);
	Fractions data;
	Fractions(-16, -4);
	ASSERT_EQ(data.get_numerator(), -16);
	ASSERT_EQ(data.get_denominator(), -4);
}