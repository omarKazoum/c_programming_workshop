#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/**
Ecrivez un programme C pour trouver la distance entre deux points donnes.

La formule de distance est derivee du theorème de Pythagore. Pour trouver la distance entre deux points (x1, y1) et (x2, y2), il suffit d'utiliser les coordonnees de ces paires ordonnees et d'appliquer la formule. Formule de distance

Supposons que nous ayons deux points M et N, dont les coordonnees sont respectivement (x1, y1) et (x2, y2). Leur distance peut être representee par MN et peut être calculee selon la formule ci-dessous,

Le premier point (M):- (x1, y1) Deuxième point (N) : (x2, y2) Distance (MN):- √((x2-x1)² + (y2-y1)²) Exemple:- M = (4, 8) N = (12, 14) Alors la distance entre M et N est MN = √((12-4)² + (14-8)²) = √(64 + 36) = √(100) = 10
*/
int main()
{   //difinition des variables
    float xA,xB,yA,yB;
    printf("Bonjour;\n cette outils vous aide a calculer la disance entre deux point dont on sait les cordonnes dans l'espace\n");
    printf("par exemple le point A et B\n entrez le cordonne X de A\n");
    scanf("%f",&xA);
    printf("entrez le cordonne Y de A\n");
    scanf("%f",&yA);

    printf("entrez le cordonne X de B\n");
    scanf("%f",&xB);

    printf("entrez le cordonne Y de B\n");
    scanf("%f",&yB);
    //√((x2-x1)² + (y2-y1)²);
    float distance=sqrt((pow(xB-xA,2)+pow(yB-yA,2)));

    printf("\nalors dans ce cas la distance entre les deux points est %f",distance);

    return 0;
}
