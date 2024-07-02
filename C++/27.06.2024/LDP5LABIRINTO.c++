#include <iostream>
using namespace std;
int main(){
   int personagem;
   int misterio;
   int escolha;
   int medio;
   int dificil;
   int muito;
    cout<<"Estamos em um labirinto super complicado, escolha um nível"<<endl;
    cout<<"1-Muito fácil, 2-Fácil, 3-Médio, 4-Díficil e 5-Muito Díficil"<<endl;
    cin>>personagem;
    
    switch(personagem){
        case 1:
        cout<<"Nível 1"<<endl;
        cout<<"Qual caminho?"<<endl;
    cout<<"1-Direita ou 2-Esquerda"<<endl;
    cin>>misterio;
    if (misterio==1){
        
        cout<<"Você passou pelo labirinto parabêns!"<<endl;
    
         break;
    }
    else{
        cout<<"Você bateu de cara e se perdeu! Não achou o final."<<endl;
        
         break;
    }
       
        case 2:
        cout<<"Nível 2"<<endl;
        cout<<"Qual caminho?"<<endl;
    cout<<"1-Direita ou 2-Esquerda"<<endl;
    cin>>escolha;
    if (escolha==1){
        cout<<"Você bateu de cara com uma pessoa, comemorou e se perdeu!"<<endl;
        
        break;
    }
    else{
        
        cout<<"Você encontrou alguém, porém passou reto e achou a saída!"<<endl;
        break;
    }
      
        case 3:
        cout<<"Nível 3"<<endl;
        cout<<"Qual caminho?"<<endl;
    cout<<"1-Direita ou 2-Esquerda"<<endl;
    cin>>medio;
    if (medio==1){
        cout<<"Você estava andando e ficou preso em um arbusto, infelizmente não chegou ao final"<<endl;
        
        break;
    }
    else{
        
        cout<<"Você encontou alguém e ela te mostrou a saída, deu sorte em!"<<endl;
        break;
        case 4:
        cout<<"Nível 4"<<endl;
        cout<<"Qual caminho?"<<endl;
    cout<<"1-Direita ou 2-Esquerda"<<endl;
    cin>>dificil;
    if (dificil==1){
        cout<<"Você estava andando, veio muita chuva, sem água e sem comida. Porém sobreviveu e conseguiu sair."<<endl;
        
        break;
    }
    else{
        
        cout<<"Você infelizmente desistiu e chorou até cansar. Resumindo não achou a saída."<<endl;
     
        break;
        case 5:
        cout<<"Nível 5"<<endl;
        cout<<"Qual caminho?"<<endl;
    cout<<"1-Direita ou 2-Esquerda"<<endl;
    cin>>muito;
    if (muito==1){
        cout<<"Você estava andando calmamente, até começar a se desesperar e ficar doidinho da cabeça. Você não achou a saída!"<<endl;
        
        break;
    }
    else{
        
        cout<<"Você infelizmente desistiu e chorou, mas se acalmou e saiu tranquilamente do labirinto!"<<endl;
        break;
    }
        break;
    }
    {
        default:
        cout<<"Nenhum?"<<endl;
        break;
    }

}
 }
    return 0;
}
