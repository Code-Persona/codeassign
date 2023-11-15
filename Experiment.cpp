#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int num;
	cout << "Enter a number: ";
	cin >> num;

	int factorial = 1;

	for (int i = 1; i <= num; i++) {
		factorial = factorial * i;
	}
		cout << num <<" factorial is: " << factorial;

	return 0;

}