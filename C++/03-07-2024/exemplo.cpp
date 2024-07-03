#include <iostream> 
using namespace std;
int main(){
    int numero=10;
    if(numero>0){
        cout<< "o numero e positivo"<<endl;
    }else{
 cout<< "o numero e negativo"<<endl;
    }
    int contador=0;
    while (contador<5){
        cout<<"contador:"<<contador<<endl;
        contador++;
    }
    for(int i=0; i<5; i++){
        cout<<"interação do loop for:"<<i<<endl;

    }
    return 0;
}