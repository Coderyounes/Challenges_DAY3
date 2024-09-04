#include <stdio.h>
#include <string.h>

int main() {
    char phrase[100];
    char phrase2[100];
    printf("Enter the String: ");
    scanf("%[^\n]", phrase);
    getchar();
    printf("Enter the phrase2: ");
    scanf("%[^\n]", phrase2);

    strcat(phrase, phrase2);

    printf("%s\n", phrase);
    return (0);
}