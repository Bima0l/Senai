#include <iostream> 
#include <stack>
using namespace std;
int main(){
    stack<int> pilha;

    pilha.push(5);
    pilha.push(8);
    pilha.push(3);

    int valor1=pilha.top();
    pilha.pop();
    int valor2=pilha.top();
    pilha.pop();

    cout<<"valores retirados da pilha:"<<valor1<<","<<valor2<<endl;

    return 0;
}