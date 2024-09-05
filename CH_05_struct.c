#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titre[50];
    char auteur[50];
    int année;
} Livre;

Livre *ajout() {
    
    Livre *tempLivre = malloc(sizeof(Livre));
    
    printf("Entre le nom: ");
    scanf("%[^\n]", tempLivre->titre);
    getchar();
    printf("Entre le auteur: ");
    scanf("%[^\n]", tempLivre->auteur);
    printf("Entre l'anné: ");
    scanf(" %d", &tempLivre->année);

    return tempLivre;
}


int main() {
    Livre *newLivre;
    
    newLivre = ajout(newLivre);

    printf("%s, %s, %d\n", newLivre->titre, newLivre->auteur, newLivre->année);
    return (0);
}