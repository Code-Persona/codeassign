#include <iostream>
using namespace std;

bool TriNum(int num) //Bool to check if the number is traingle or not
{
	if (num < 0)
		return false;

	int sum = 0;
	for (int i = 1; sum <= num; i++) //A triangle number is the sum of first number
	{
			sum = sum + i;
			if (sum == num)
				return true;	
	}
	return false;
}

int main()
{
	int num;

	cout << "Enter a number: " << endl;
	cin >> num;
	if (TriNum(num)) {
		cout << "The number is a triangular number." << endl;
	} else{
		cout << "The number is not a triangle number." << endl;
	}

	return 0;
}