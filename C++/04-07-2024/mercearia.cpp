#include <iostream> 

void adicionarProduto(std::string produtos[], int quantidades[], int tamanho, std::string produto, int quantidade)
{
    produtos[tamanho] = produto;      
    quantidades[tamanho] = quantidade; 
}


void removerProduto(std::string produtos[], int quantidades[], int tamanho, std::string 
produto, int quantidade)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (produtos[i] == produto) 
        {
            quantidades[i] -= quantidade; 
            if (quantidades[i] <= 0)      
            {
                for (int j = i; j < tamanho - 1; j++) 
                {
                    produtos[j] = produtos[j + 1];       
                    quantidades[j] = quantidades[j + 1]; 
                }
                tamanho--; 
            }
            std::cout << "Produto '" << produto << "' removido do estoque.\n"; 
            break;                                                             
        }
    }
}


void exibirEstoque(std::string produtos[], int quantidades[], int tamanho)
{
    std::cout << "Estoque atual:\n";
    for (int i = 0; i < tamanho; i++) 
    {
        std::cout << produtos[i] << ": " << quantidades[i] << " unidades\n"; 
}

int main()
{
    const int maxProdutos = 100;       
    std::string produtos[maxProdutos]; 
    int quantidades[maxProdutos];     
    int tamanho = 0;                   

    
    adicionarProduto(produtos, quantidades, tamanho, "Macas", 50);
    tamanho++;
    adicionarProduto(produtos, quantidades, tamanho, "Paes", 100);
    tamanho++;
    adicionarProduto(produtos, quantidades, tamanho, "Leite", 30);
    tamanho++;

    exibirEstoque(produtos, quantidades, tamanho);

  
    removerProduto(produtos, quantidades, tamanho, "Maças", 5);
    removerProduto(produtos, quantidades, tamanho, "Paes", 5);
    removerProduto(produtos, quantidades, tamanho, "Leite", 5);

    exibirEstoque(produtos, quantidades, tamanho);

    return 0;
}
