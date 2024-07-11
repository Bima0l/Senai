#include <iostream> 
#include <stack>
using namespace std;

int main()
{
    stack<string> emprestimolivros; // Fila para armazenar as tarefas

    // Adiciona algumas tarefas à lista inicialmente
    emprestimolivros.push("A arte de Ligar o Foda-se");
    emprestimolivros.push("Teto para Dois");
    emprestimolivros.push("Hiptese do Amor");

    // Exibe a lista de afazeres inicial
    cout << "Lista de emprestimos:\n";
    stack<string> listaCopia = emprestimolivros; // Copia a fila para exibição sem alterar a original
    while (!listaCopia.empty())
    {
        cout << listaCopia.top() << endl; // Exibe cada tarefa da lista
        listaCopia.pop();                             // Remove a tarefa exibida da fila
    }

    // Marca algumas tarefas como concluídas
    if (!emprestimolivros.empty())
    {
        cout << "\nLivro Entregue: " << emprestimolivros.top() << endl;
        emprestimolivros.pop();
    }
    else
    {
        cout << "Lista de emprestimos vazia!\n";
    }

    if (!emprestimolivros.empty())
    {
        cout << "Livro Entregue: " << emprestimolivros.top() << endl;
        emprestimolivros.pop();
    }
    else
    {
        cout << "Lista de emprestimos vazia!\n";
    }

 emprestimolivros.push("Assim que Acaba");
    emprestimolivros.push("Assim que Começa");
    emprestimolivros.push("Livro Bonus");
    // Exibe a lista de afazeres após as conclusões
    cout << "\nLista de livros emprestados após algumas entregas:\n";
    listaCopia = emprestimolivros; // Copia a fila novamente para exibição
    while (!listaCopia.empty())
    {
        cout << listaCopia.top() << endl;
        listaCopia.pop();
    }

    return 0;
}