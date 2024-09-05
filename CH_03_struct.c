#include <stdio.h>

typedef struct cordonnes_s {
    int longeur;
    int largeur;
} cordonnes_t;


int calcAirrec(cordonnes_t dimension) {
    return dimension.longeur * dimension.largeur;
}

int main() {
    int result;

    cordonnes_t dimension;
    printf("Entee longeur: ");
    scanf("%d", &dimension.longeur);
    printf("Entee largeur: ");
    scanf("%d", &dimension.largeur);

    result = calcAirrec(dimension);

    printf("le Air de rectangle: %d\n", result);

    return (0);
}