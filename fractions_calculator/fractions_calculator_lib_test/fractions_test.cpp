#include "fractions.h"

#include "gtest/gtest.h"


TEST(num_and_denum, get_num_and_get_denum)
{
	ASSERT_EQ(Fractions().get_denominator(), 1);
	ASSERT_EQ(Fractions().get_numerator(), 1);
}

TEST (new_num_should_be_pozitive, if_input_pozitive_num_and_denum)
{
	Fractions pozitive_num(16, 4);
	Fractions pozitive_denum(16, 4);

	ASSERT_EQ(pozitive_num.get_numerator(), 4);
	ASSERT_EQ(pozitive_denum.get_denominator(), 1);
}

TEST(new_num_should_be_pozitive, if_input_negative_num_and_denum)
{
	Fractions negative_num(-16, -4);
	Fractions negative_denum(-16, -4);

	ASSERT_EQ(negative_num.get_numerator(), 4);
	ASSERT_EQ(negative_denum.get_denominator(), 1);
}

TEST(new_num_should_be_negative, if_input_negative_num)
{
	Fractions negative_num(-16, 4);
	Fractions pozitive_denum(-16, 4);

	ASSERT_EQ(negative_num.get_numerator(), -4);
	ASSERT_EQ(pozitive_denum.get_denominator(), 1);
}

TEST(new_num_should_be_negative, if_input_negative_denum)
{
	Fractions pozitive_num(16, -4);
	Fractions negative_denum(16, -4);

	ASSERT_EQ(pozitive_num.get_numerator(), -4);
	ASSERT_EQ(negative_denum.get_denominator(), 1);
}
