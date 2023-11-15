#include <iostream>
#include <cmath>

using namespace std;

float factorial(int n) {

	float f = 1;

	for (int i = 1; i <= n; i++) {
		f = f * i;
	}
	return f;
}
int main() {
	float a, b, c,d;
	int n;
	cout << "Enter N: ";
	cin >> n;
	a = factorial(2 * n);
		b = factorial(n + 1);
		c = factorial(n);
		d = a / (b * c);
		cout << "the catlan number is: " << d << endl;
}