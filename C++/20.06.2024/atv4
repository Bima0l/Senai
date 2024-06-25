#include <iostream>
#include <cstdlib>

using namespace std;

int
main ()
{
  int numeroSecreto = rand () % 100 + 1;
  int tentativas = 8;
  int palpite;

  do
	{

	  cout << "Tentativa" << tentativas << ": Digite um numero: ";
	  cin >> palpite;

	  if (palpite < numeroSecreto)
		{
		  cout << "Muito Baixo!" << endl;

		}
	  else if (palpite > numeroSecreto)
		{
		  cout << "Muito alto!" << endl;
		}
	  tentativas--;
	}
  while (palpite != numeroSecreto && tentativas > 0);
  if (palpite == numeroSecreto)
	{
	  cout << "Parabens! Vocce acertou o numero com" << 8 -
		tentativas << "tentativas(s)!" << endl;
	}
  else
	{
	  cout << "Voce nao conseguiu adivinhar o numero com" << 8 -
		tentativas << "tentativa(s)!" << endl;
	}
  return 0;
}