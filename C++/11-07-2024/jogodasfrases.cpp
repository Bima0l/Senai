#include <iostream>
using namespace std;

int main()
{
    int tamanhomaximodovetor=100;
    int cordovestido, diadoaniversario, mesdoaniversario;
    string resultadodacordovestido, resultadododiadoaniversario, resultadodomesdoaniversario;

    string corvestido[tamanhomaximodovetor]={
    "Preto",
    "Branco",
    "Vermelho",
    "Roxo",
    "Amarelo",
    "Azul",
    "Bege",
    "Marrom",
    "Verde",
    "Cinza"};

    string corvetor[tamanhomaximodovetor]={
        "Classico",
        "Romantico",
        "Sertanejo",
        "Minimalista",
        "Futurista",
        "Casual",
        "Academico",
        "Vintage",
        "Elegante",
        "Punk"};
 
 string diavetor[tamanhomaximodovetor]={
        "Simplicidade refinada que perdura.",
        "O amor e o tecido que une cada peca.",
        "Jeans e camisa xadrez: a essencia do sertao.",
        "Linhas limpas, beleza descomplicada.",
        "Materiais tecnologicos moldam o meu amanha.",
        "Descontracao com um toque de personalidade.",
        "Classicos literarios inspiram o meu guarda-roupa.",
        "Revivendo o glamour de decadas passadas.",
        "Estilo que exala confianca e classe.",
        "Moda que desafia convencoes e estereotipos."};

string mesvetor[tamanhomaximodovetor]={

        "Audrey Hepburn",
        "Zooey Deschanel",
        "Marilia Mendonca",
        "Phoebe Philo",
        "Lady Gaga",
        "Jennifer Aniston",
        "Emma Watson",
        "Dita Von Teese",
        "Grace Kelly",
        "Debbie Harry"};

cout << "Venha conferir o seu estilo da moda aleatorio em uma frase!" << endl;

    cout << "Escolha uma cor para o vestido da cartegoria abaixo:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << "." << corvestido[i] << endl;
    }

    cout << "Digite o numero correspondente de 1 a 10: ";
    cin >> cordovestido;

    if (cordovestido >= 1 && cordovestido <= 10)
    {
        resultadodacordovestido = corvetor[cordovestido - 1];
    }
    else
    {
        cout << "Numero invalido para a cor do vestido. Por favor, para de ser bobao e escolhe um numero de 1 a 10!" << endl;
        return 1;
    }

    cout << "Escolha um numero da sorte?(1-10): ";
    cin >> diadoaniversario;

    if (diadoaniversario >= 1 && diadoaniversario <= 10)
    {
        resultadododiadoaniversario = diavetor[diadoaniversario - 1];
    }
    else
    {
        cout << "Numero invalido. Por favor, escolha um numero entre 1 e 10." << endl;
        return 1;
    }

    cout << "Se voce tivesse que apostar em um numero, qual seria? (1-10): ";
    cin >> mesdoaniversario;

    if (mesdoaniversario >= 1 && mesdoaniversario <= 10)
    {
        resultadodomesdoaniversario = mesvetor[mesdoaniversario - 1];
    }
    else
    {
        cout << "Numero invalido. Por favor, escolha um numero entre 1 e 10." << endl;
        return 1;
    }

    cout << "Sua frase da moda é:" << endl;
    cout << "Escolhi me vestir " << resultadodacordovestido << " lembrando que " << resultadododiadoaniversario << " Enquanto " << resultadodomesdoaniversario << " estava ao meu lado" << endl;

    return 0;
}