#include <stdio.h>
#include <stdlib.h>
/***
Ecrivez un programme qui demande la distance en Metre et la transforme en Mile

La formule : Mile = Km*1.609

(tenir en compte la conversion métrique)
**/
int main()
{
    float d;
    printf("Bonjour entrez cette application vous aide a convertir la distence du Mette au Mile\n entrez la distence en Mettre\n");
    scanf("%f",&d);
    printf("%f m est egale a %f miles\n a bientot!",d,(d/1000.0f*1.609f));
    return 0;
}
