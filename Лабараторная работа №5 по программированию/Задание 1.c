#include <stdio.h>
int main () {
        int dec;
        printf("Введите число: ");
        scanf("%d",&dec);
        int  i = 8;
        int k = 0;
        int n = 0;
        while (i > 0) {
        if ((dec & 1) == 1) {k++;}
        else  {n++;}
        i--;
        dec = dec >> 1; }
        printf("Колличество едениц: %d\n",k);
        printf("Количество нулей: %d\n",n);
}