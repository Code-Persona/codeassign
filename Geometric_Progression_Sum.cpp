#include <iostream>

using namespace std;

float geometric(int num, float comrat, float firstterm) {
	float sum = 0;

	for (int i = 0; i < num; i++) { // goes through number search through set of num
		sum = sum + firstterm; // gives us the first number which will be the start of our progression
			firstterm = firstterm * comrat; //different from amicable, its the multiplication of the common dif to get the sum	
	}
	return sum; // bring sum to main function 
}

int main() {
	int num;
	float comrat, firstterm;

	cout << "Input amount of terms: " << endl;
	cin >> num;

	cout << "Input common ratio: " << endl;
	cin >> comrat;

	cout << "Input the first term in sequence: " << endl;
	cin >> firstterm;

	float sum = geometric(num, comrat, firstterm);

	cout << "The sum is " << sum << endl;

	// basically our code is getting the difference of a ratio of a number and multiplying them
	return 0;

}

