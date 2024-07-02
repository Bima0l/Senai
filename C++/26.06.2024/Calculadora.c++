#include <iostream>
using namespace std;

int main ()
{
  
  char operacao;
 float num1, num2, resultado;

cout <<"Digite o primeiro numero"<<endl;
cin>>num1;
cout <<"Digite a operacao"<<endl;
cin>>operacao;
cout <<"Digite o segundo numero"<<endl;
cin>>num2;
  
  
if (operacao == '+') 
 { 
resultado = num1 + num2;
  
} 
  else if (operacao == '-')
  
  {
	
resultado = num1 - num2;
  
}
  
else if (operacao == '*')
  
  {
	
resultado = num1 * num2;
  
}
  
else if (operacao == '/')
  if(num2 !=0)
  {
	
resultado = num1 / num2;
  
} else{
    cout<<"Operacao invalida";
    return 0;
}
cout<<"Resultado ="<< resultado;
  
return 0;

}
