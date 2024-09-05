#include <stdio.h>


int main() {
    int i, num, result = 0;

    printf("Entre nombre: ");
    scanf("%d", &num);
    
    for (i = 0 ; i <= num; i++) {
        result += i;
    }
    printf("%d\n", result);
    return (0);
}