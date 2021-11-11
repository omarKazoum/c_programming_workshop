#include <stdio.h>
#include <stdlib.h>

int main()

{//mile en metre
    float mile;
    printf("Bonjour cette application vous aide a convertir la distance du mile au metre\n entrez la distence en mile\n");
    scanf("%2f",&mile);
    float metre=mile/1.609*1000;
    printf("%.2f mile est egale a %.2f metre\n a bientot!",mile,metre);
    return 0;
}
