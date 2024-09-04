#include <stdio.h>


int main() {
    char phrase[10];
    int count = 0, i;

    printf("Enter the String: ");
    scanf("%[^\n]", phrase);

    for (i = 0; phrase[i] != '\0'; i++) {
        count++;
    }
    printf("%d\n", count);
    return (0);
}
