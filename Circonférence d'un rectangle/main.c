#include <stdio.h>
#include <stdlib.h>
/**
    �crivez un programme pour trouver la circonf�rence d'un rectangle. Prenez la longueur et la largeur du rectangle en entr�e de l'utilisateur.
    La formule pour la circonf�rence d'un rectangle = 2*(longueur + largeur).
*/

int main()
{
    printf("Bonjour cher utilisateur ce programme va vous aider a calculer la circonf�rence d'un rectangle");
    printf("\n quelle est la langeur de du rectangle ?\n");
    float langeur,largeur;
    scanf("%f",&langeur);
    printf("\n quelle est la largeur de du rectangle ?\n");
    scanf("%f",&largeur);
    printf("le circonference est egale a: %f",(langeur+largeur)*2);
    return 0;
}
