#include <stdio.h>
#include <stdlib.h>

int main()
{
    const sexeFim=2,sexeMasc=1;
    char name[20],prenom[20],PhoneNbr[15];
    int sexe=-1,age;
    //dire bonjour et demmander le nom
    printf("Salut, j'amerai faire votre connaissance\n entrez votre nom\n");
    scanf("%s",&name);
    //demnder le prenom
    printf("entrer votre prenom\n");
    scanf("%s",&prenom);
    //demander l'age
    printf("quel age avez vous\n");
    scanf("%d",&age);
    //demander le sexe
    printf("vous etes un homme ou bien une femme \n(entrer 1 pour homme ou 2 pour une femme)\n");
    scanf("%d",&sexe);
    //demmander le num de telephone
    printf("quel est votre numero de telephone\n");
    scanf("%s",&PhoneNbr);
    //manitenet on commence a imprimmer les donner sur l'ecran
    printf("je suis ravi de faire votre connasace pour recapituler votre nom est %s et votre prenom est %s et vous avez %d ans vous etes %s votre numero de telephone est %s ",name,prenom,age,(sexe==sexeFim?"une femme":"un homme"),PhoneNbr);
    return 0;
}
