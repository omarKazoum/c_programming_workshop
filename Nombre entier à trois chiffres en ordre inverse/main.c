#include <stdio.h>
#include <stdlib.h>
/**
    �crivez un programme C pour afficher un nombre entier � trois chiffres dans l'ordre inverse sans utiliser la boucle. Par exemple, si le nombre entier est 234, son inverse est 432.
*/
int main()
{
    printf("Bonjour on va vous aider a inverser les nombre entier a trois chiffres \n");
    char nbr[3];
    scanf("%s",nbr);
    char temp=nbr[0];
    nbr[0]=nbr[2];
    nbr[2]=temp;
    for(int i=0;i<3;i++){
    	printf("%c",nbr[i]);
    }

    return 0;
}
