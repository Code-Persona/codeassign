#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//(-b+-√(b²-4ac))/(2a)

	double a, b, c, discriminant;

	cout << "Enter terms for a, b, c" << endl;
	cin >> a >> b >> c; // entering constant terms

	discriminant = (b * b) - (4 * a * c); //numerator but only right side and were avoiding using square roots for simplicity sake
	if(discriminant < 0)
		{
		cout << "Roots are not real, i numbers" << endl;
		return 0;
		}

	double x1, x2;
	x1 = ( - b + sqrt(discriminant)) / (2 * a);
	x2 = ( - b - sqrt(discriminant)) / (2 * a);
	
	cout << endl << "First root is: " << x1 << endl;
	cout << endl << "Second root is: " << x2 << endl;

	return 0;
}