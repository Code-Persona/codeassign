#include <iostream>
using namespace std;

void Hanoi(int n, char src, char aux, char dest)//three pegs are source, auxiliary and destination
{
	if (n == 1) {
		cout << "Move N number of disks - " << n << " from " << src << " to " << dest<< endl; //moves from first peg to third peg
		return;
	}
	Hanoi(n - 1, src, dest, aux); // first recursive function starts from source to auxiliary
	cout << "Move N number of disks - " << n << " from " << src << " to " << dest << endl; 
	Hanoi(n - 1, aux, src, dest); // next recursive function works as way to move from auxiliary to destination
}
int main() {
	int N;
	cout << "Enter N of disks: ";
	cin >> N; // we get out user input for disks 
	Hanoi(N, 'A', 'B', 'C');//calls back our variables in void function 
	return 0;

}