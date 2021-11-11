#include <stdio.h>
#include <stdlib.h>
/**
    Écrivez un programme C pour afficher la valeur équivalente en octal et en hexadécimal.
    Entrez un nombre entier et affichez sa valeur équivalente en octal et en hexadécimal.
*/
int main()
{
    int decNbr,octalN[100],i=0,decNbrBackup;
    //salutation et récupération des données
    printf("Bonjour, entrer un numbre en decimal pour récuperer ca valeur en octal et en hexadecimal\n");
    scanf("%d",&decNbr);
    decNbrBackup=decNbr;
    //on commence à calculer la valeur octal du nombre
    while(decNbr!=0){
        octalN[i++]=decNbr%8;
        decNbr=decNbr/8;
    }
    printf("\en octal:");

    for(i=(i-1);i>=0;i--){
        printf("%d",octalN[i]);
    }
    printf("%s","\nen hexadecimal:" );
    //on calcule àa valeur en hex
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
