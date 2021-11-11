#include <stdio.h>
#include <stdlib.h>
/**
    Écrivez un programme pour trouver la circonférence d'un rectangle. Prenez la longueur et la largeur du rectangle en entrée de l'utilisateur.
    La formule pour la circonférence d'un rectangle = 2*(longueur + largeur).
*/

int main()
{
    printf("Bonjour cher utilisateur ce programme va vous aider a calculer la circonférence d'un rectangle");
    printf("\n quelle est la langeur de du rectangle ?\n");
    float langeur,largeur;
    scanf("%f",&langeur);
    printf("\n quelle est la largeur de du rectangle ?\n");
    scanf("%f",&largeur);
    printf("le circonference est egale a: %f",(langeur+largeur)*2);
    return 0;
}
