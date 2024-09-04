#include <stdio.h>
#include <string.h>

int main() {
    char phrase[10];
    char phrase2[10];
    printf("Enter the String: ");
    scanf("%[^\n]", phrase);
    getchar();
    printf("Enter phrase2: ");
    scanf("%[^\n]", phrase2);

    if (strcmp(phrase, phrase2) == 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return (0);
}