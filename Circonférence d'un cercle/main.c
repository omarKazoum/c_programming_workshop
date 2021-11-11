#include <stdio.h>
#include <stdlib.h>
/**
    Écrivez un programme pour trouver la circonférence d'un cercle. Prenez le rayon du cercle en entrée de l'utilisateur.
    La formule pour, la circonférence du cercle = 2πr ; où r est le rayon.
*/
double PI=3.141592654;
int main()
{
    printf("Bonjour cher utilisateur ce programme va vous aider a calculer la circonférence d'un cercle");
    printf("\n quelle est le rayn de la cercle ?\n");
    float rayon;
    scanf("%f",&rayon);
    printf("le circonference est egale a: %f",2*PI*rayon);
    return 0;
}
