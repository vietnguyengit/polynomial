/*

Author: Viet Nguyen

*/
#ifndef POL_POLYNOMINAL_H_
#define POL_POLYNOMINAL_H_
#define MAX_DEGREE 20 + 1

#include <iostream>

class polymonial {
private:
	int fDegree;
	double fCoe[MAX_DEGREE];
public:
	polymonial();
	polymonial& operator*(const polymonial&) const;
	friend std::ostream& operator<<(std::ostream&, const polymonial&);
	friend std::istream& operator>>(std::istream&, polymonial&);
};

#endif POL_POLYNOMINAL_H_
