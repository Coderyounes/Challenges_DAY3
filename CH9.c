#include <stdio.h>

int main() {
    char phrase[10] = "he llo";
    int i, count = 0;
    for (int i = 0; phrase[i]; i++)
        if (phrase[i] != ' ')
            phrase[count++] = phrase[i];
        phrase[count] = '\0';
    printf("%s\n", phrase);
    return (0);
}