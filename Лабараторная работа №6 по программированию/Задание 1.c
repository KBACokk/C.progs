#include <stdio.h>
int main () {
        int mas[10] = {21,1,32,3,90,54,67,7,45,9};
        int mac[10] = {0,-11,-12,-13,14,15,16,17,18,19};
        int c[10];
        int max = 0;
        int neg = 0;
        int sred = 0;
        for (int i = 0;i < 10;i++) {
        c[i] = mac[i] + mas[i]; }
        for (int k = 0;k < 10-2;k = k + 2) {
                if (max < mas[k]) {
                        max = mas[k]; }}
        for (int n = 1; n < 10; n = n + 2) {
        if (mac[n] < 0) {neg = neg + 1;}
}
        for (int i = 0; i < 10;i++) {
                sred = sred + c[i]; }

        printf ("Максимальное реальное число массива: ");
        printf ("%d\n",max);
        printf ("Отрицательных мнимых чисел в массиве рoвно: ");
        printf ("%d\n",neg);
        printf ("Среднее арифмическое всехчисел массива C: ");
        printf ("%d\n",sred/10);
}
