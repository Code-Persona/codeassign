#include <iostream>

using namespace std;

int main() {

	double a;
	double b;

	cout << "Enter a: " endl;
	cin >> a >> endl;
	cout << "Enter b: "endl;
	cin >> b >> endl;

	cout << "Value of numerator: " << a << endl;
	cout << "Value of denominator: " << b << endl;

	double sum1 = a / b;
	double sum2 = a % b;

	cout << "Quotient division: " << sum1 << endl;
	cout << "Remainder division: " << sum2 << endl;

	return 0;
}