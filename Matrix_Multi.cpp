#include <iostream>

using namespace std;

int main() {
	int row;
	int col;
	cout << "Enter the number of Columns" << endl;
	cin >> col;
	cout << "Enter the number of rows" << endl;
	cin >> row;

	cout << "Enter elements of the first matrix by rows using enter " << endl;
	int matrix1[row][col];
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			cin >> matrix1[i][j];
		}
	}

	cout << "Elements of the second Matrix by rows " << endl;

	int matrix2[row][col];
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			cin >> matrix2[i][j];
		}
	}

	int result[row][col]; //dot matrix produces matrix with same number of rows as first matrix
	for (int i = 0; i < row; i++) {
		for (int k = 0; k < col; k++) {
			result[i][k] = matrix1[i][k]*matrix2[i][k];
		}
	}

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
}