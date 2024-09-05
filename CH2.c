#include <stdio.h>


int main() {
    char phrase[10];
    int i;

    printf("Enter the String: ");
    scanf("%[^\n]", phrase);

    for (i = 0; phrase[i] != '\0'; i++)
        ;
    printf("%d\n", i);
    return (0);
}
