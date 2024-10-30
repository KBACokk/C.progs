#include <stdio.h>
int main () {
        int m = 0;
        char string[500];
        int cnt = 0;
        int max_d = 0;
    int indexes[50], max_indexes[50];
    int max_length = 0, new_length = 0, j = 0, i = 0;

    printf("Enter: ");
    fgets(string, sizeof(string), stdin);
        for (int k=0; k < sizeof(string); k++){
                if (string[k] != '\0') {
                        m++;
                        if (string[k] == 'a') {
                                cnt++;
                                if (cnt > max_d) {
                                        max_d = cnt;
                                        /* printf ("cnt = %d\n ",cnt);
                                        printf ("max = %d\n ",max_d);*/ }}}
                 if (string[m] == ' ') {
                        if (cnt == 0) {continue;}
                        if (max_d < cnt) {max_d = cnt;}
                        cnt = 0;
                        /*printf ("New d = %d\n ",cnt);*/ }}
        printf ("Max count = %d\n",max_d);
}