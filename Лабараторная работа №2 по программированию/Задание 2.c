#include <stdio.h>
void main() {
        float a;
        char b;
        printf("%c",b);
        printf("Input temperature: ");
        scanf("%f %c",&a,&b);
        if (b == 'F' || b == 'f'){
        a = (a-32)*5/9;
        printf("Output temperature:%fC\n", a);S
}       else if (b == 'C' || b == 'c'){
        a = (a/9*5)+32;
        printf("Output temperature:%fF\n",a);
}       else printf("Output Error\n");
}