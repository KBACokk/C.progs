#include <stdio.h>
#include "rhombus.h"
#include <ctype.h>

        int main() {
                int k, c;

                printf("Введите количество ромбов: ");
                //scanf("%d", &k);

                while (scanf("%d", &k) != 1) {
                        while (!isspace(c = getchar()));
                                ungetc(c, stdin);
                                printf("Некорректных ввод, введите натуральное положительное число > ");
                        continue;
                }
                if (k < 1) {
                        printf ("Колличество ромбов меньше одного, расчёт не выполняется \n");
                }
                else {

                Rhombus rhombuses[k];

                for (int i = 0; i < k; i++) {
                        printf("Введите диагонали ромба %d:\n", i + 1);
                        printf ("Первая диагональ > ");
                        while (scanf("%f", &rhombuses[i].d1) != 1) {
                        while (!isspace(c = getchar()));
                                ungetc(c, stdin);
                                printf("Некорректных ввод, введите натуральное положительное число > ");
                        continue;
                        }
                        if ( rhombuses[i].d1 < 1) {  &rhombuses[i].d1 == 0;;}

                        printf ("Вторая диагональ > ");
                        while (scanf("%f",  &rhombuses[i].d2) != 1) {
                        while (!isspace(c = getchar()));
                                ungetc(c, stdin);
                                printf("Некорректных ввод, введите натуральное положительное число > ");
                        continue;
                        }
                        if ( rhombuses[i].d2 < 1) {  &rhombuses[i].d1 == 0;}

                }

                Rhombus min_rhombus;
                int squares_count;

                FindMin (rhombuses, k, &min_rhombus, &squares_count);

                printf("Количество квадратов: %d\n", squares_count);
                printf("Ромб с минимальной площадью: d1 = %.2f, d2 = %.2f\n", min_rhombus.d1, min_rhombus.d2);

                return 0; }
        }