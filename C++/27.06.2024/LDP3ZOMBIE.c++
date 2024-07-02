#include <iostream>
using namespace std;
int main(){
   int personagem;
   int misterio;
   int escolha;
    cout<<"Escolha seu avatar:"<<endl;
    cout<<"1-Pessoa ou 2-Zombie"<<endl;
    cin>>personagem;
    
    switch(personagem){
        case 1:
        cout<<"Sobrevivente"<<endl;    
        cout<<"Qual caminho?"<<endl;
    cout<<"1-Direita ou 2-Esquerda"<<endl;
    cin>>misterio;
    if (misterio==1){
        
        cout<<"Você bateu de cara com o zombie e...MORREU!"<<endl;
        cout<<"Meus Pêsames!"<<endl;
         break;
    }
    else{
        cout<<"Você bateu de cara com o zombie e...Fez amizade com ele.";
        cout<<"Porém ele te devorou depois, meus Pêsames!"<<endl;
         break;
    }
    
   
      { 
        case 2:
        cout<<"Ameaça"<<endl;
    
        cout<<"Qual caminho?"<<endl;
    cout<<"1-Direita ou 2-Esquerda"<<endl;
    cin>>escolha;
    if (escolha==1){
        cout<<"Você bateu de cara com a pessoa e...devourou ela!"<<endl;
        cout<<"Satisfeito?"<<endl;
        break;
    }
    else{
        cout<<"Você bateu de cara com a pessoa e...Fez amizade com ela.";
        cout<<"Porém você devorou ela depois, eu eim, sabe fazer amizade não?"<<endl;
        break;
    }
            break;

    }

        {
        default:
        cout<<"Para de ser chato!"<<endl;
        break;
    }
}
    return 0;
}