#include <iostream>
using namespace std;
int main(){
   int personagem;
   int escolha;
    cout<<"Você é a tinker Bell e terá que escolher qual poder irá precisar para construir seus intens hoje"<<endl;
    cout<<"1-Fogo ou 2-Gelo "<<endl;
    cin>>personagem;
    
    switch(personagem){
        case 1:
        cout<<"Você escolheu fogo! Construiu um grande foguete e salvou as plantações."<<endl;
        break;
        case 2:
        cout<<"Você escolheu gelo! Fez uma máquina de lançar cubos de gelo que salvou sua comunidade."<<endl;
        break;
        
        default:
        cout<<"Chatooooo!"<<endl;
        break;
    }
    
   

    return 0;
}