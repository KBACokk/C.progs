#include <stdio.h>
void main() {
        int a;
        printf("Введите год: ");
        scanf("%d",&a);
        if (a%400 == 0){
        printf("Год високосный\n");
}
        else if (a%100 == 0){
                printf("Год не високосный\n");
}
        else if (a%4 == 0){
                printf("Год високосный\n");
}
        else printf("Год не високосный\n");
}