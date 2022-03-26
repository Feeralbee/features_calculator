#include "fractions.h"

#include "gtest/gtest.h"


TEST(fraction_operator_multiplication, pozitive_fraction_multiply_pozitive_fraction)
{
	Fractions first_pozitive_fraction(1, 2);
	Fractions second_pozitive_fraction(4, 5);

	auto result = first_pozitive_fraction * second_pozitive_fraction;

	ASSERT_EQ(result.get_numerator(), 2);
	ASSERT_EQ(result.get_denominator(), 5);
}

TEST(fraction_operator_multiplication, pozitive_fraction_multiply_negative_fraction)
{
	Fractions pozitive_fraction(1, 2);
	Fractions negative_fraction(-4, 5);

	auto result = pozitive_fraction * negative_fraction;

	ASSERT_EQ(result.get_numerator(), -2);
	ASSERT_EQ(result.get_denominator(), 5);
}

TEST(fraction_operator_multiplication, negative_fraction_multiply_pozitive_fraction)
{
	Fractions negative_fraction(-1, 2);
	Fractions pozitive_fraction(4, 5);

	auto result = negative_fraction * pozitive_fraction;

	ASSERT_EQ(result.get_numerator(), -2);
	ASSERT_EQ(result.get_denominator(), 5);
}

TEST(fraction_operator_multiplication, negative_fraction_multiply_negative_fraction)
{
	Fractions first_negative_fraction(-1, 2);
	Fractions second_negative_fraction(-4, 5);

	auto result = first_negative_fraction * second_negative_fraction;

	ASSERT_EQ(result.get_numerator(), 2);
	ASSERT_EQ(result.get_denominator(), 5);
}
