#include <iostream>
using namespace std;
int main(){
   int personagem;
   int misterio;
   int escolha;
    cout<<"Escolha seu personagem:"<<endl;
    cout<<"1-Aquaman, 2-Lady Bug e 3-Viúva Negra"<<endl;
    cin>>personagem;
    
    switch(personagem){
        case 1:
        cout<<"Você é o Aquaman"<<endl;
        break;
        case 2:
        cout<<"Você é a Lady bug"<<endl;
        break;
        case 3:
        cout<<"Você é a Viúva Negra"<<endl;
        break;
        default:
        cout<<"Nenhum?, Sério!"<<endl;
        break;
    }
    cout<<"Certo! Vamos resolver o mistério?"<<endl;
    cout<<"1-Sim ou 2-Não"<<endl;
    cin>>misterio;
    if (misterio==1){
        cout<<"Então Bora!!!";
        cout<<"Certo! Vamos para sua jornada!"<<endl;
    }
    else{
        cout<<"Cagão";
    }
    cout<<"Qual caminho você irá trilhar?"<<endl;
    cout<<"1-Mundo dos Doidos ou 2-Planeta Rosa"<<endl;
    cin>>escolha;
    if (escolha==1){
        cout<<"Seu doidin"<<endl;
        cout<<"O mistério esta solucionado, pode ir pro hospício!"<<endl;
        
    }
    else{
        cout<<"Sua Barbiezinha!"<<endl;
        cout<<"O mistério esta solucionado, pode ir sonhador!"<<endl;
    }

    return 0;
}