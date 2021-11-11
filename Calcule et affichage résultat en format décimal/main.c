#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**
    a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en format décimal, et en soignant l’interface homme/machine.
     (a/b donne le quotient de la division, a%b donne le reste de la division)
    */

    int a,b;
    printf("bonjour!\n entrez un nombre a\n");
    scanf("%d",&a);
    printf("maintent entrez un autre nombre b\n");
    scanf("%d",&b);
    printf("voici le resultat:\n");
    printf("a+b=%d\n",a+b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("a%b=%d\n",a%b);
    orintf("a bientot!")
    return 0;
}
