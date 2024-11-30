#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	void makeMatrixHand(int n, float **A) {
		for (int i = 0; i < n; i++) {
	        	for (int j = 0; j < n+1; j++) {
	        		printf("Введите %d x %d элемент матрицы > ", i + 1, j + 1);
	        		scanf("%f", &A[i][j]);
	    		}
		}
		printf("\n       ~~~ Matrix ~~~\n");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n+1; j++) {
     				printf("%f ", A[i][j]);
		}
		printf("\n");
		}
	}

	void makeMatrixRandom(int n, float **A) {
		srand(time(NULL));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n+1; j++) {
				A[i][j] = rand() % 10 + 1;
			}
		}
		printf("\n      ~~~ Matrix ~~~ \n");
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n+1; j++) {
				printf("%f ", A[i][j]);
			}
			printf("\n");
		}
	}

	int main() {
		int n, a;

		printf("Введите размер матрицы > ");
		scanf("%d", &n);

	float **A = (float **)malloc((n+1) * sizeof(float *));
		for (int i = 0; i < n; i++) {
			A[i] = (float *)malloc((n+1) * sizeof(float));
		}

		printf("Выберите способ заполнения матрицы: \n1 > Вручную\n2 > Рандомом\nВаш вариант > ");
		scanf("%d", &a);
		printf("\n");

		if (a == 1) {
	        	makeMatrixHand(n, A);
		}
		else if (a == 2) {
	        	makeMatrixRandom(n, A);
		}
		else {
			printf("Некорректный выбор!\n");
		}

		/* Освобождение памяти
		for (int i = 0; i < n; i++) {  free(A[i]);  }
		free(A);
			*/
		float det, x1,x2,x3;
		if (n == 1) {
			det = A[0][0];
		}
		if (n == 2) {
			det = A[0][0] * A[1][1] - A[1][0] * A[0][1];
		}
		if (n == 3) {
			det = A[0][0] * A[1][1] * A[2][2] +
			      A[0][1] * A[1][2] * A[2][0] +
			      A[1][0] * A[2][1] * A[0][2] -
			      A[0][2] * A[1][1] * A[2][0] -
			      A[1][0] * A[0][1] * A[2][2] -
			      A[0][0] * A[2][1] * A[1][2];
		}
		printf ("%f\n",det);
		if (n == 1) {
			x1 = A[0][1] / A[0][0];
			printf ("  x1 = %f\n",x1);
		}
		if (n == 2) {
			x1 = (A[0][2] * A[1][1] - A[0][1] * A[1][2]) / det;
			x2 = (A[0][0] * A[1][2] - A[0][2] * A[1][0]) / det;
		printf ("  x1 = %f\n  x2 = %f\n",x1,x2);
		}
		if (n == 3) {
			x1 = ((A[0][3] * A[1][1] * A[2][2] + A[0][1] * A[1][2] * A[2][3] + A[1][3] * A[2][1] * A[0][2]) -
			     (A[0][2] * A[1][1] * A[2][3] + A[0][1] * A[1][3] * A[2][2] + A[0][3] * A[1][2] * A[2][1])) / det;


			x2 = ((A[0][0] * A[1][3] * A[2][2] + A[1][0] * A[2][3] * A[0][2] + A[0][3] * A[1][2] * A[2][0]) -
			     (A[0][2] * A[1][3] * A[2][0] + A[0][3] * A[1][0] * A[2][2] + A[0][0] * A[1][2] * A[2][3])) / det;

			x3 = ((A[0][0] * A[1][1] * A[2][3] + A[0][1] * A[1][3] * A[2][0] + A[1][0] * A[2][1] * A[0][3]) -
	                     (A[0][3] * A[1][1] * A[2][0] + A[0][1] * A[1][0] * A[2][3] + A[0][0] * A[2][1] * A[1][3])) / det;

			printf ("  x1 = %f\n  x2 = %f\n  x3 = %f\n",x1,x2,x3);
		}
}

