#include <stdio.h>

typedef struct perssone {
    char nom[100];
    char prenom[100];
    int notes[5];
} Personne_t;

int main() {
    int i, j;
    Personne_t newPerson;

    printf("Entree Nom: ");
    scanf("%s", newPerson.nom);
    getchar();
    printf("Entree Prenom: ");
    scanf("%s", newPerson.prenom);
    for (i = 0; i < 5; i++) {
        printf("Enter les notes: ");
        scanf("%d", &newPerson.notes[i]);
    }

    printf("%s %s ", newPerson.nom, newPerson.prenom);

    for (j = 0; j < 5; j++) {
        printf("%d ", newPerson.notes[j]);
    }
    printf("\n");
    return (0);
}