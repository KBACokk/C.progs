#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);

    int n = 2, flag = 0;
    while (a % n != 0) {
        n++;
        if (n == a) {
            flag = 1;
            printf("Число простое");
            break;
        }
    }
}