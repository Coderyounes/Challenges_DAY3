#include <stdio.h>

int main() {
    char phrase[100];
    char c;
    int i, counteur = 0;
    printf("Entre la phrase: ");
    scanf("%[^\n]", phrase);

    printf("Entre Char: ");
    scanf(" %c", &c);

    for (i = 0; phrase[i] != '\0'; i++) {
        if (phrase[i] == c) {
            counteur++;
        }
    }
    printf("total num de %c on %s is : %d\n", c, phrase, counteur);

    return (0);
}