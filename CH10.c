#include <stdio.h>
#include <string.h>

int main() {
    char phrase[100];
    char part[10];
    printf("Entree phrase: ");
    scanf("%s", phrase);
    printf("entree sous-string: ");
    scanf("%s", part);

    if (strstr(phrase, part)) {
        printf("Yes!\n");
    } else {
        printf("No\n");
    }
    return (0);
}