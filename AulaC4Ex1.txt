// Loja.C
#include <stdio.h>
void main() 
{
    float valor = 50;
    printf ("Qual o valor total da compra: ");
    scanf ("%f", &valor);
    if (valor >= 50)
    {
        printf("Voce ganhou um brinde!!");
    }
}