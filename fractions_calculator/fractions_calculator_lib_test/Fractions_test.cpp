#include "Fractions.h"

#include "gtest/gtest.h"


TEST(num_and_denum, get_num_and_get_denum)
{
	ASSERT_EQ(Fractions().get_denominator(), 1);
	ASSERT_EQ(Fractions().get_numerator(), 0);
}

TEST(greatest_common_division_test, get_greatest_common_division)
{
	ASSERT_EQ(Fractions().greatest_common_divisor(1, 0), 1);
	ASSERT_EQ(Fractions().greatest_common_divisor(0, 1), 1);

}

TEST (Fraction, get_new_numerator_and_new_denominator)
{
	ASSERT_EQ(Fractions(16, 4).get_numerator(), 4);
	ASSERT_EQ(Fractions(16, 4).get_denominator(), 1);

	ASSERT_EQ(Fractions(-16, -4).get_numerator(), 4);
	ASSERT_EQ(Fractions(-16, -4).get_denominator(), 1);

	ASSERT_EQ(Fractions(-16, 4).get_numerator(), -4);
	ASSERT_EQ(Fractions(-16, 4).get_denominator(), 1);

	ASSERT_EQ(Fractions(16, -4).get_numerator(), -4);
	ASSERT_EQ(Fractions(16, -4).get_denominator(), 1);
}