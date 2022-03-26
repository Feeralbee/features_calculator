#include "fractions.h"

Fractions::Fractions()
{
	numerator = 1;
	denominator = 1;
}

Fractions::Fractions(int new_numerator, int new_denominator)
{
	if (new_denominator == 0) {
		throw std::invalid_argument("Invalid argument in denominator");
	}
	const int gcd = greatest_common_divisor(new_numerator, new_denominator);
	numerator = new_numerator / gcd;
	denominator = new_denominator / gcd;
	if (denominator < 0) {
		denominator = -denominator;
		numerator = -numerator;
	}
}

void output_result_of_calculation(Fractions calculation_result)
{
	std::cout << calculation_result;
}

int Fractions::greatest_common_divisor(int numerator, int denumenator)
{
	if (denumenator == 0) {
		return numerator;
	}
	else {
		return greatest_common_divisor(denumenator, numerator % denumenator);
	}
}

int Fractions::get_numerator() const
{
	return numerator;
}

int Fractions::get_denominator() const
{
	return denominator;
}

Fractions Fractions::operator + (const Fractions& rhs) const
{
	return{
		this->numerator * rhs.get_denominator() + rhs.get_numerator() * this->denominator,
		this->denominator * rhs.get_denominator()
	};
}

Fractions Fractions::operator - (const Fractions& rhs) const
{
	return{
		this->numerator * rhs.get_denominator() - rhs.get_numerator() * this->denominator,
		this->denominator * rhs.get_denominator()
	};
}

Fractions Fractions::operator * (const Fractions& rhs) const
{
	return
	{
		this->numerator * rhs.get_numerator(),
		this->denominator * rhs.get_denominator()
	};
}

Fractions Fractions::operator / (const Fractions& rhs) const
{
	if (this->numerator == 0) {
		throw std::domain_error("Division by zero");
	};
	if (rhs.get_numerator() == 0) {
		throw std::domain_error("Division by zero");
	};
	return *this * Fractions(rhs.get_denominator(), rhs.get_numerator());
}

bool Fractions::operator < (const Fractions& rhs) const
{
	return (*this - rhs).get_numerator() < 0;
}

std::istream& operator >> (std::istream& is, Fractions& r)
{
	int first_fraction, second_fraction;
	char arithmetic_action;
	is >> first_fraction >> arithmetic_action >> second_fraction;
	if (is && arithmetic_action == '/') {
		r = Fractions(first_fraction, second_fraction);
	}
	return is;
}

std::ostream& operator << (std::ostream& os, const Fractions& r)
{
	return os << r.get_numerator() << '/' << r.get_denominator();
}


