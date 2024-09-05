#include <stdio.h>


int main() {
    int num, rev;

    printf("Entre un nombre supérieur aux 1000: ");
    scanf("%d", &num);

    rev = 0;
    while(num > 0) {
        rev = rev * 10 + num % 10;
        num =  num / 10;
    }

    printf("%d\n", rev);
    return (0);
}