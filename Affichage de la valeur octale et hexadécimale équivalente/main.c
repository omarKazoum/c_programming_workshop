#include <stdio.h>
#include <stdlib.h>
/**
    Écrivez un programme C pour afficher la valeur équivalente en octal et en hexadécimal.
    Entrez un nombre entier et affichez sa valeur équivalente en octal et en hexadécimal.
*/
int main()
{
    int decNbr,octalN[100],i=0,decNbrBackup;
    printf("Bonjour;\n entrer un numbre en decimal pour récuperer ca valeur en octal et en hexadecimal\n");
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
