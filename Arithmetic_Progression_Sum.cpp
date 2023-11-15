#include <iostream>

using namespace std;

float arithemtic(int num, float comdif, float firstterm) {
	float sum = 0;

	for (int i = 0; i < num; i++) { // goes through number search through set of num
		sum = sum + firstterm; // gives us the first number which will be the start of our progression
			firstterm = firstterm + comdif; //	
	}
	return sum; // bring sum to main function 
}

int main() {
	int num;
	float comdif, firstterm;

	cout << "Input amount of terms: " << endl;
	cin >> num;

	cout << "Input common difference: " << endl;
	cin >> comdif;

	cout << "Input the first term in sequence: " << endl;
	cin >> firstterm;

	float sum = arithemtic(num, comdif, firstterm);

	cout << "The sum is " << sum << endl;

	return 0;

}

