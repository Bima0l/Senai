#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> fila;

    fila.push(5);
    fila.push(8);
    fila.push(3);

    int valor1= fila.front();
    fila.pop();
    int valor2= fila.front();
    fila.pop();
    cout<<"Valores retirados da fila:"<<valor1<<","<<valor2<<endl;
    return 0;
}