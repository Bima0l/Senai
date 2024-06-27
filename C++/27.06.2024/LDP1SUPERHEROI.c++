#include <iostream>
using namespace std;
int main(){
   int personagem;
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

    return 0;
}