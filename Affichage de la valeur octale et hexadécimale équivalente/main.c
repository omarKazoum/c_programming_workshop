#include <stdio.h>
#include <stdlib.h>
/**
    �crivez un programme C pour afficher la valeur �quivalente en octal et en hexad�cimal.
    Entrez un nombre entier et affichez sa valeur �quivalente en octal et en hexad�cimal.
*/
int main()
{
    int decNbr,octalN[100],i=0,decNbrBackup;
    printf("Bonjour;\n entrer un numbre en decimal pour r�cuperer ca valeur en octal et en hexadecimal\n");
    scanf("%d",&decNbr);
    decNbrBackup=decNbr;
    while(decNbr!=0){
        octalN[i++]=decNbr%8;
        decNbr=decNbr/8;
    }
    printf("\en octal:");

    for(i=(i-1);i>=0;i--){
        printf("%d",octalN[i]);
    }
    printf("%s","\nen hexadecimal:" );
    //starting to convert the number to hex
    printf("%#02d",decNbrBackup);

    return 0;
}
