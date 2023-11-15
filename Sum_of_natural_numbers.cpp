#include <iostream>

using namespace std;

int main() {
	cout << "Enter a number of natural numbers to sum up" << endl;
	int n;
	cin >> n;
	float result = (n * (n + 1)) / 2;
	cout << "The sum is: " << result << endl;
	return 0;
}