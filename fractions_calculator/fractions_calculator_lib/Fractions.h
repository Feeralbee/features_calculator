#pragma once
#include <stdexcept>
#include <sstream>
#include <fstream>
#include <iostream>


class Fractions {
public:
	Fractions();
	Fractions(int new_numerator, int new_denominator);

	int greatest_common_divisor(int a, int b);

	int get_numerator() const;
	int get_denominator() const;

	Fractions operator + (const Fractions& rhs);

	Fractions operator - (const Fractions& rhs);

private:
	int numerator;
	int denominator;
};


Fractions operator * (const Fractions& lhs, const Fractions& rhs);

Fractions operator / (const Fractions& lhs, const Fractions& rhs);

std::istream& operator >> (std::istream& is, Fractions& r);

std::ostream& operator << (std::ostream& os, const Fractions& r);

bool operator < (const Fractions & lhs, const Fractions & rhs);

void output_result_of_calculation(Fractions calculation_result);


