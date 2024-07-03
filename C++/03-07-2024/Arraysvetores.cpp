#include <iostream> 
using namespace std;
int main(){
    int numeros[5];
    for(int i=0; i<5; i++){
        cin>> numeros[i];

    }
cout<<"elementos do array:"<<endl;
for(int i=0;i<5;i++){
    cout<<numeros[i]<<" ";
}
return 0;
}