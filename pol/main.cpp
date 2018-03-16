#include "polynomial.h"
#include <iostream>
using namespace std;

int main() {
	polymonial polA;
	cout << "Enter polymonial A:" << endl;
	cin >> polA;
	cout << "A = " << polA << endl;

	polymonial polB;
	cout << "Enter polymonial B:" << endl;
	cin >> polB;
	cout << "B = " << polB << endl;

	polymonial C = polA * polB;
	cout << "C = A*B = " << C << endl;
	system("PAUSE");
}