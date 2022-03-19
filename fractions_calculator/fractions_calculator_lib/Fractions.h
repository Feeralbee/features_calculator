#pragma once

#include <stdexcept>
#include <sstream>
#include <fstream>
#include <iostream>


class Fractions {
private:
	int numerator = 0;
	int denominator = 0;
public:
	Fractions();
	Fractions(int new_numerator, int new_denominator);

	int greatest_common_divisor(int a, int b);

	int get_numerator() const;
	int get_denominator() const;

	Fractions operator + (const Fractions& rhs) const;

	Fractions operator - (const Fractions& rhs) const; 
	
	Fractions operator * (const Fractions& rhs) const;

	Fractions operator / (const Fractions& rhs) const;

	bool operator < (const Fractions& rhs) const;

};

std::istream& operator >> (std::istream& is, Fractions& r);

std::ostream& operator << (std::ostream& os, const Fractions& r);

void output_result_of_calculation(Fractions calculation_result);


