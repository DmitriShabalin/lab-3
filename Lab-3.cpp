#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	double E = 12, I;
	double t = 0.001, a, b, y;
	double C[4]{ 0.03, 0.03, 0.3, 0.3 };
	double L[4]{ 0.6, 6, 0.6, 6 };
	double R[4]{ 5000,10000,5000,10000 };

	for (size_t i = 0; i < size(C); i++) {
		y = R[i] / (2 * L[i]);
		a = (pow(10, 3) * E * pow(M_E, (-y) * t)) / L[i];
		b = (pow(10, 6) / (L[i] * C[i])) - pow(y, 2);

		if (b > 0) {
			I = (a * sin(sqrt(b) * t)) / sqrt(b);
		}
		else if (b < 0) {
			I = (a * sin(sqrt(-b) * t)) / sqrt(-b);
		}

		cout << "b =" << b << ";  I =" << I << endl;



	}
}
