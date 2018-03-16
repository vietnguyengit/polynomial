/*

Author: Viet Nguyen

*/
#include "polynomial.h"
#include <iostream>
using namespace std;

polymonial::polymonial() {
	fDegree = 0;
	for (int i = 0; i < MAX_DEGREE; i++) {
		fCoe[i] = 0.0;
	}
}

polymonial& polymonial::operator*(const polymonial& aPol) const {
	polymonial result;
	result.fDegree = this->fDegree + aPol.fDegree;
	for (int i = 0; i <= this->fDegree; i++) {
		for (int j = 0; j <= aPol.fDegree; j++) {
			result.fCoe[i + j] += this->fCoe[i] * aPol.fCoe[j];
		}
	}
	return result;
}

ostream& operator<<(ostream& output, const polymonial& aPol) {
	for (int i = 0; i <= aPol.fDegree; i++) {
		if (aPol.fCoe[i] != 0) {
			output << aPol.fCoe[i] << "x^" << i;
			if (i <= aPol.fDegree - 1) output << " + ";
		}
	}
	return output;
}

istream& operator>>(istream& input, polymonial& aPol) {
	input >> aPol.fDegree;
	while (aPol.fDegree > ((MAX_DEGREE - 1) / 2)) {
		cout << "Degree is too large, should be less than " << ((MAX_DEGREE - 1) / 2) << endl;
		input >> aPol.fDegree;
	}
	for (int i = 0; i <= aPol.fDegree; i++) {
		input >> aPol.fCoe[i];
	}
	return input;
}
