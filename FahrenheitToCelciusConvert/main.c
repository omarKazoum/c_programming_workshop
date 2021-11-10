#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f;
    printf("Bonjour cette application vous aide a convertir la temperature Fahrenheit en °C\n SVP entrere la teperature en Fahrenhit\n");
    scanf("%f",&f);
    printf("\nca vaut %.2f degree celcius",((f-32)/1.8));
    return 0;
}
