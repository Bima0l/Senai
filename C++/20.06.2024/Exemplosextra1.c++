
#include <iostream>

void batalha(int turnos) {
    for (int i = 1; i <= turnos; i++) {
        std::cout << "Turno " << i << ":\n";
        std::cout << "Guerreiro ataca!\n";
    }
    std::cout << "Guerreiro vence!";
}

int main() {
    int valor = 5;

    std::cout << "Exercício 1 :\n";
    batalha(valor);

    return 0;
}