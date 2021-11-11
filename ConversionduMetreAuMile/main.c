#include <stdio.h>
#include <stdlib.h>
/***
Ecrivez un programme qui demande la distance en Metre et la transforme en Mile

La formule : Mile = Km*1.609

(tenir en compte la conversion métrique)
**/
int main()
{
    float mettre;
    printf("Bonjour cette application vous aide a convertir la distance du Mette au Mile\n entrez la distence en Mettre\n");
    scanf("%2f",&metter);
    float mille=mettre/1000.0*1.609;
    printf("%f m est egale a %f miles\n a bientot!",mettre,mille);
    return 0;
}
