#include <stdio.h>
#include <stdlib.h>
#include <time.h>

        void makeMatrixHand (int n, float **A) {
                for (int i = 0; i < n;i++) {
                        A[i] = (float*)malloc(n * sizeof(malloc));
                }
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                printf ("Введите элемент массива %d x %d > ",i+1,j+1);
                                scanf ("%f", &A[i][j]);
				while (A[i][j] > 0 || A[i][j] < 0) {
					printf ("\nError\n");
					printf ("Привмер Ввода: 21 <Enter> ");
					printf ("Введите элемент массива %d x %d > ",i+1,j+1);
					scanf ("%f", &A[i][j]);
				}
                        }
                }
                printf ("\n        ~~~ Matrix ~~~\n");
                for (int i = 0; i < n; i++) {
                                for (int j = 0; j < n; j++) {
                                        printf (" %f ",A[i][j]);
                                }
                        printf ("\n");
                        }
                printf ("\n");
        }

        void makeMatrixRandom (int n, float **A) {
                for (int i = 0;i < n; i++) {
                        A[i] = (float *)malloc(n * sizeof(malloc));
                }
                srand(time(NULL));
                for (int i = 0;i < n;i++) {
                        for (int j = 0; j < n; j++) {
                                A[i][j] = rand() % 10 + 1;
                        }
                }
                for (int i = 0; i < n; i++) {
                                for (int j = 0; j < n; j++) {
                                        printf (" %f ",A[i][j]);
                                }
                        printf ("\n");
                        }
        }

        int makeNewMatrix (int n, float **A, float *B) {
                for (int i = 0; i < n; i++) {
                        B[i] = A[i][i] + A[i][n-i-1];
                        printf ("%f\n",B[i]);
                }
        }

        int maxCountMatrix (int n, float **A, float *C) {
                int k = 0;
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                C[k] = A[i][j];
                                k = k +1;
                        }
                }
                float max_count = C[0];
                for (int i = 0; i < n*n; i++) {
                        if (C[i] > max_count) {
                                max_count = C[i];
                        }
                }
        //printf ("\nMax_count = %f\n",max_count);
        return max_count;
        }

        void trymat (int n) {
                printf ("%d\n",n);
        }

        int Sravnenie (float *B, float max_count, int n) {
                int finish = 0;
                for (int i = 0; i < n; i++) {
                        if (B[i] < max_count) {
                                finish = finish + 1;
                                printf ("Элемент нового массива - %f меньше максимально элемента %f изначального массива \n",B[i],max_count);                        }
                }
                if (finish > 0) {
                        printf ("\nВсего %d элементов, меньше максимально значения изнач. матрицы\n",finish);
                }
                else {
                        for (int j = 0; j < n; j++) {
                                for (int i = 0; i < n-1; i ++) {
                                        if ( B[i] < B[i+1] ) {
                                                float time_count = B[i+1];
                                                B[i+1] = B[i];
                                                B[i] = time_count;
                                                //printf ("done");
                                        }
                                }
                        }
                printf ("\n ~~~ New spisok ~~~\n");
                for (int j = 0; j < n; j++) {
                        printf ("%f\n",B[j]);
                }
                }
        }

        int main () {
                int n; int r;
                printf ("Введите размер массива > ");
                scanf ("%d",&n);
                printf ("Выберите способ занисения данных в массив:\n 1 > Вручную \n 2 > Рандомом\n");
                printf ("Ваш вариант > ");
                scanf ("%d",&r);
        float **A = (float**)malloc(n * sizeof(float*));
        float *B = malloc(n * sizeof(float));
        float *C = malloc(n*n * sizeof(float));
                if (r == 1) {
                        makeMatrixHand (n, A); }

                if (r == 2) {
                        printf ("\n        ~~~ Matrix ~~~\n");
                        makeMatrixRandom (n, A); }
                printf ("\n");
                makeNewMatrix (n, A, B);
                //maxCountMatrix (n, A, C);
        float max_count = maxCountMatrix (n, A, C);
                printf ("\nMax_count = %f\n", max_count);
                Sravnenie (B,max_count,n);
        }

