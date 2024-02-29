// C++ program for Sparse Matrix Representation
// using Array
#include<stdio.h>

int main()
{
	// Assume 4x5 sparse matrix
	int matrixA[4][5] =
	{
		{0 , 0 , 3 , 0 , 4 },
		{0 , 0 , 5 , 7 , 0 },
		{0 , 0 , 0 , 0 , 0 },
		{0 , 2 , 6 , 0 , 0 }
	};

	int size = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			if (matrixA[i][j] != 0)
				size++;

	// number of columns in compactMatrix (size) must be
	// equal to number of non - zero elements in
	// sparseMatrix
	int matrixB[3][size];

	// Making of new matrix
	int k = 0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 5; j++)
			if (matrixA[i][j] != 0)
			{
				matrixB[0][k] = i;
				matrixB[1][k] = j;
				matrixB[2][k] = matrixA[i][j];
				k++;
			}

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<size; j++)
			printf("%d ", matrixB[i][j]);

		printf("\n");
	}
	return 0;
}
