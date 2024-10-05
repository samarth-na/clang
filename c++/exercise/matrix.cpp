#include <iostream>
#include <vector>
using namespace std;

int matrixmultiplication() {
	int matrixA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	int matrixB[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int ans[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			ans[i][j] = 0;
			for (int k = 0; k < 3; k++) {
				ans[i][j] += matrixA[i][k] * matrixB[k][j];
			}
			cout << ans[i][j] << "\n";
		}
	}
	return 0;
}

/*{1, 2, 3, 4}, */
/*{5, 6, 7, 8},*/
/*{9, 10, 11, 12},*/
/*{13, 14, 15, 16}*/

void splitMatrix(int mat[4][4], int smallmat0[2][2], int smallmat1[2][2], int smallmat2[2][2],
				 int smallmat3[2][2]) {
	int length = 2;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			smallmat0[i][j] = mat[i][j];
			smallmat1[i][j] = mat[i + length][j];
			smallmat2[i][j] = mat[i][j + length];
			smallmat3[i][j] = mat[i + length][j + length];
		}
	}
}

void printMatrix(int matrix[2][2]) {
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {
	int topLeft[2][2], topRight[2][2], bottomLeft[2][2], bottomRight[2][2];

	int matrix_4x4[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

	splitMatrix(matrix_4x4, topLeft, topRight, bottomLeft, bottomRight);

	printMatrix(topLeft);
	printMatrix(topRight);
	printMatrix(bottomLeft);
	printMatrix(bottomRight);

	return 0;
}
