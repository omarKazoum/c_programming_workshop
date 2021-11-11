#include <stdio.h>
#include <stdlib.h>
/**
    Écrivez un programme C pour afficher un nombre entier à trois chiffres dans l'ordre inverse sans utiliser la boucle. Par exemple, si le nombre entier est 234, son inverse est 432.
*/
int main()
{
    printf("Bonjour on va vous aider a inverser les nombre entier a trois chiffres \n");
    char nbr[3];
    scanf("%s",nbr);
    char temp=nbr[0];
    nbr[0]=nbr[2];
    nbr[2]=temp;
    printf("\n%s",nbr);
    return 0;
}
