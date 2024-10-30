#include <stdio.h>
int main () {
        int a;
        char s = '$';
        int c=0;
        int i = 0;
        int y;
        char o = ' ';
        int m = 1;
        int t = m;
        printf("Введите число: ");
        scanf("%d",&a);
        y = a;
        while (a > 0) {
                c = a + c;
                a--; }
        while (c > 0) {
        printf ("%-1c",s);
        c--;
        i++;
        if (i == y) {
                printf("\n");
                while (t > 0) {
                printf("%c",o);
                t--;}
                m++;
                t = m;
                y--;
                i = 0;}

}
}