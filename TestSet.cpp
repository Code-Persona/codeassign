#include <iostream>
#include <cmath>
using namespace std;

/*  int main() {

	int a;
	int b;

	cout << "Enter a: " << endl;
	cin >> a;
	cout << "Enter b: " << endl;
	cin >> b;

	cout << "Value of numerator: " << a << endl;
	cout << "Value of denominator: " << b << endl;

	int sum1 = a / b;
	int sum2 = a % b;

	cout << "Quotient division: " << sum1 << endl;
	cout << "Remainder division: " << sum2 << endl;

	return 0;
}*/

//////////////////////////////////////////////////////////////


int main() {

	int num;
	cout << "Enter a number: " << endl;
	cin >> num;

	if (num = > 90) {
		cout << "You have an A+" << num;
	}
	else if (num < 89 && num > = 80) {
		cout << "You have an A" << num;
	}
	else if (num < 80 && num > = 70) {
		cout << "You have a B" << num;
	}
	else if (num < 69 && num > = 60) {
		cout << "You have a C" << num;
	}
	else if (num < 60 && num > = 50) {
		cout << "You have a D" << num;
	}
	else (num < 49 ) {
		cout << "You have a F" << num;
	}

	return 0;

}