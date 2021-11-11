#include <stdio.h>
#include <stdlib.h>

int main()
{
    /***
    Écrivez un programme en C pour trouver la somme et la moyenne de quatre nombres. Prenez les entrées de l'utilisateur final.

    Explication :

    Soit trois nombres a, b et c alors, Somme = (a+b+c) et, Moyenne = somme/3
    **/
    int a,b,c,d;
    printf("Bonjour ce programme vous aide a calculer la somme et la moyenne de qutre de votre choix\n pour commencer entrez le premier nombre\n");
    scanf("%d",&a);
    printf("\maintenant entrez le deuxieme nombre\n");
    scanf("%d",&b);
    printf("\maintenant entrez le troisieme nombre\n");
    scanf("%d",&c);
    printf("\maintenant entrez le quatrieme nombre\n");
    scanf("%d",&d);
    printf("\ndonc dans ce cas la somme est: %d et la moyenne est: %d\n",(a+b+c+d),((a+b+c+d)/4));
     return 0;
}
