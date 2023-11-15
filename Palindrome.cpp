#include <iostream>

using namespace std;

int main()
{
	int num;
	int reverse;
	int sum = 0;
	int temporary;

	cout << "Enter a number: ";
	cin >> num;
	
	temporary = num; //First storing the number and then putting number into algorithm to check if the number is same when reversed
	while (num > 0)
	{
		reverse = num % 10;
		sum = (sum * 10) + reverse;
		num = num / 10;
	}
	if (temporary == sum) // checks if number after algorithm is same as original number
		cout << "Number is Palindrome";
	else
		cout << "Number is not Palindrome";
	
	return 0;
}