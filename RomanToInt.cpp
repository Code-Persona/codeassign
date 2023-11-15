#include <iostream>
using namespace std;

int value(char roman) { //need function value, we will use a swith case to convert variables
	switch (roman)
	{
	case 'I':return 1;
	case 'V':return 5;              //objectives 1. loop through the string from right to left
	case 'X':return 10;				//use p to keep track of previous value
	case 'L':return 50;				//we will compare current value and p
	case 'C':return 100;			//if current value is small subtract it
	case 'D':return 500;			//if current value equal or large add it
	case 'M':return 1000;
	}
}

int RomToInt(string A)
{
	int i, n; 
	int p = 0;
	int result = 0;

	n = A.length()-1;

	for (i = n; i>=0; i--)
	{
		if (value(A[i]) >= p)
			result = result + value(A[i]);
		else
			result = result - value(A[i]);

	p = value(A[i]);
	}
	return result;
	}

int main() {

	string s;
	int num;
	cin >> s;
	num = RomToInt(s);
	cout << num << endl;
	return 0;
}