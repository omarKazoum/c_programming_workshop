#include <stdio.h>
#include <stdlib.h>

int main()
{
     // °F to °C + sensation
    float f;
    printf("Bonjour cette application vous aide a convertir la temperature Fahrenheit en °C et vous donne la sensation\n SVP entrez la temperature en Fahrenhit\n");
    scanf("%f",&f);
    float tempC= (f-32)/1.8;
    printf("\nca vaut %.2f degree celcius et c'est ",((f-32)/1.8));
    if(tempC<2.0){
        //trés froid

        printf("tres froid");
    }else if(tempC<10){
        printf("froid");
    }else if(tempC<25){
        printf("normal");
    }else if(tempC<35){
        printf("chaud");
    }else{
        printf("tres chaud");
    }

    return 0;
}
