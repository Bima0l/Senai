
#include<stdio.h>

void batalha (int turnos){
    
    for(int i= 1; i<=turnos; i++){
        printf("Turno %d:\n", i);
        printf("Guerreiro ataca!\n");
    }
    printf("Guerreiro vence!");
        return turnos;
        
}
    
        int main()
{

int valor=5;

printf ("exercicio 1 :\n");
batalha(valor);

return 0;
}