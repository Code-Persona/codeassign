#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int reverse(int n, int t)
{
    if (n == 0)
        return t;

    t = (t * 10) + (n % 10);

    return reverse(n / 10, t);
}


int main()
{
    cout << "Enter the Number to check " << endl;
    int n;
    cin >> n;

    int t = reverse(n, 0);

    if (t == n)
        cout << "The number is palindrome " << endl;
    else
        cout << "not palindrome " << endl;
    return 0;
}