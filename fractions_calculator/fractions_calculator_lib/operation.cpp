#include "operation.h"

void output_result_of_calculation(Fractions calculation_result)
{
	std::cout << calculation_result;
}

int Fractions::Greatest_common_divisor(int a, int b)
{
	if (b == 0) {
		return a;
	}
	else {
		return Greatest_common_divisor(b, a % b);
	}
}

Fractions::Fractions()
{
	numerator = 0;
	denominator = 1;
}

int Fractions::Get_numerator() const
{
	return numerator;
}

int Fractions::Get_denominator() const
{
	return denominator;
}


Fractions::Fractions(int new_numerator, int new_denominator)
{
	if (new_denominator == 0) {
		throw std::invalid_argument("Invalid argument");
	}
	const int gcd = Greatest_common_divisor(new_numerator, new_denominator);
	numerator = new_numerator / gcd;
	denominator = new_denominator / gcd;
	if (denominator < 0) {
		denominator = -denominator;
		numerator = -numerator;
	}
}


Fractions operator + (const Fractions& lhs, const Fractions& rhs)
{
	return{
		lhs.Get_numerator() * rhs.Get_denominator() + rhs.Get_numerator() * lhs.Get_denominator(),
		lhs.Get_denominator() * rhs.Get_denominator()
	};
}

Fractions operator - (const Fractions& lhs, const Fractions& rhs)
{
	return{
		lhs.Get_numerator() * rhs.Get_denominator() - rhs.Get_numerator() * lhs.Get_denominator(),
		lhs.Get_denominator() * rhs.Get_denominator()
	};
}

Fractions operator * (const Fractions& lhs, const Fractions& rhs)
{
	return{
		lhs.Get_numerator() * rhs.Get_numerator(),
		lhs.Get_denominator() * rhs.Get_denominator()
	};
}

Fractions operator / (const Fractions& lhs, const Fractions& rhs)
{
	if (lhs.Get_numerator() == 0) {
		throw std::domain_error("Division by zero");
	};
	if (rhs.Get_numerator() == 0) {
		throw std::domain_error("Division by zero");
	};
	return lhs * Fractions(rhs.Get_denominator(), rhs.Get_numerator());
}

std::istream& operator >> (std::istream& is, Fractions& r)
{
	int n, d;
	char c;
	is >> n >> c >> d;
	if (is && c == '/') {
		r = Fractions(n, d);
	}
	return is;
}

std::ostream& operator << (std::ostream& os, const Fractions& r)
{
	return os << r.Get_numerator() << '/' << r.Get_denominator();
}

bool operator < (const Fractions& lhs, const Fractions& rhs)
{
	return (lhs - rhs).Get_numerator() < 0;
}
