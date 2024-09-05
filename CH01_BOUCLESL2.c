#include <stdio.h>

int main() {
    int num, i;

    printf("Entre le numbre: ");
    scanf("%d", &num);

    for (i = 10; i > 0; i--) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return (0);
}