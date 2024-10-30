#include <stdio.h>
int main () {
        int a;
        int b;
        int c = 0;
        int sum = 0;
        int m = 1;
        printf ("Введите параметры прямоугольника : ");
        scanf ("%d %d",&a,&b);
        printf ("Вы ввели: %d %d\n", a, b);
        sum = a * b;
        while (sum > 0) {
        printf(" %d ",m);
        if (m % b == 0) { printf ("\n");}
        sum--;
        m++;
}
}