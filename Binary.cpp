#include <iostream>

using namespace std;

int binary(int a[], int L, int m, int n)
{
	if (m >= 1) // size of array sorter
	{
		int mid = L + (m - 1) / 2; //binary search algorith 
		if (a[mid] == n)
			return mid;
		if (a[mid] > n)
		return binary(a, L, mid - 1, n);
		return binary(a, mid + 1, m, n);
	}
	return -1; // to return false value 
	}
int main()
{
	int a, b, c;
	cout << "Enter the number of Element in the Array: " << endl;
	cin >> b;
	int arr[b];
	cout << "Enter the Elements of the Array "<< endl;
	for (int i = 0; i < b; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter the Element to search in Binary Tree: ";
	cin >> a;
	c = binary(arr, 0, b - 1, a);
	if (c == -1)
		cout << "The element is not within thee array" << endl;
	else
		cout << "The element is at index: " << c << endl;
	return 0;
}
