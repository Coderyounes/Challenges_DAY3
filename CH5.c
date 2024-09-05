#include <stdio.h>


int main() {
    char phrase[10];
    int count = 0, i, j;

    printf("Enter the String: ");
    scanf("%[^\n]", phrase);

    for (i = 0; phrase[i] != '\0'; i++)
        ;

    for (j = i; j >= 0; j--) {
        printf("%c", phrase[j]);
    }
    printf("\n");
    return (0);
}
