#include <stdio.h>

typedef struct perssone {
    char nom[100];
    char prenom[100];
    int age;
} Personne_t;

int main() {
    Personne_t newPerson;

    printf("Entree Nom: ");
    scanf("%s", newPerson.nom);
    getchar();
    printf("Entree Prenom: ");
    scanf("%s", newPerson.prenom);
    printf("Entree age: ");
    scanf("%d", &newPerson.age);

    printf("%s %s %d\n", newPerson.nom, newPerson.prenom, newPerson.age);
    return (0);
}