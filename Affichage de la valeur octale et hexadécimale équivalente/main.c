#include <stdio.h>
#include <stdlib.h>
/**
    �crivez un programme C pour afficher la valeur �quivalente en octal et en hexad�cimal.
    Entrez un nombre entier et affichez sa valeur �quivalente en octal et en hexad�cimal.
*/
int main()
{
    int decNbr,octalN[100],i=0,decNbrBackup;
    //salutation et r�cup�ration des donn�es
    printf("Bonjour, entrer un numbre en decimal pour r�cuperer ca valeur en octal et en hexadecimal\n");
    scanf("%d",&decNbr);
    decNbrBackup=decNbr;
    //on commence � calculer la valeur octal du nombre
    while(decNbr!=0){
        octalN[i++]=decNbr%8;
        decNbr=decNbr/8;
    }
    printf("\en octal:");

    for(i=(i-1);i>=0;i--){
        printf("%d",octalN[i]);
    }
    printf("%s","\nen hexadecimal:" );
    //on calcule �a valeur en hex
    char hex[200];
    i=0;
    while(decNbrBackup!=0){
        int rest=decNbrBackup%16;
        if(rest<10){
            hex[i++]=rest+48;
        }else{
             hex[i++]=rest+55;
        }
        decNbrBackup/=16;
    }
    for(;i>=0;i--){
        printf("%c",hex[i]);
    }
    return 0;
}
