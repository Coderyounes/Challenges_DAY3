#include <stdio.h>
#include <ctype.h>

int main() {
    int i;
    char phrase[100];
    printf("Entree la phrase: ");
    scanf("%s", phrase);

    for (i = 0; phrase[i] != '\0'; i++) {
        printf("%c", tolower(phrase[i]));
    }
    printf("\n");
    return (0);
}