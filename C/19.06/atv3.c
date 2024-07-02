#include <stdio.h>


char habilidade() {
    char aceitar = 's';
    while (aceitar=='s'){
    printf("Quer ficar poderoso?\n");
    scanf("%s", &aceitar);
    printf ("Ficou totoso\n");

}
return aceitar;
}

int main() 
{
habilidade();
return 0;

}
    
    