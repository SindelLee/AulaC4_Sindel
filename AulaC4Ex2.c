// TrabalhoHorasC.
#include <stdio.h>
void main() 
{
    float horas, saldo, min;
    printf("Qual total de horas trabalhadas hoje?  ");
    scanf("%f", &horas);
    min = horas * 60; // transformar em min
    if (min > 480) // se 
    {
        saldo = min - 480; // saldo maior que 480 min
        printf("Minutos adicionados ao BH: %2.f minutos ", saldo); // limitar casas 
    } 
    else // se nao
    {
        saldo = 480 - min;  // saldo menor que 480
        printf("Total retirados do BH: %2.f minutos ", saldo); 
    }
}