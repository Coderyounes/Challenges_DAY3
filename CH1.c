#include <stdio.h>


int main() {
    char phrase[10];
    printf("Enter the String: ");
    scanf("%[^\n]", phrase);

    printf("%s\n", phrase);
    return (0);
}