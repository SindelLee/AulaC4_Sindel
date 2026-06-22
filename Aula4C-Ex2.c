#include <stdio.h>

int main() {
    int horas;

    printf("Quantas horas voce trabalhou hoje? ");
    scanf("%d", &horas);
    
    

    if (horas > 8) {
        printf("Adicionado ao banco de horas: %d horas\n", horas - 8);
        
        
        printf("Retirado do banco de horas: 0 horas\n");
        
    } else {
        
        printf("Adicionado ao banco de horas: 0 horas\n");
        printf("Retirado do banco de horas: %d horas\n", 8 - horas);
    }

    return 0;
}