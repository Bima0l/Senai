
#include <iostream>
using namespace std;
int main(){
int nota=60;
cout<<"Digite sua nota:";
cin>>nota;
if (nota==100){
    cout<<"Aluno ou aluna pft!!!";
    
}
else if (nota<=99&&nota>=60){
    cout<<"Você passou!";
}   
else if (nota<=59&&nota>=40){
    cout<<"Recuperação";
}
else{
    cout<<"Você reprovou";
}
    return 0;
}