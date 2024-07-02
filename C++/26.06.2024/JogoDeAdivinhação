#include <iostream>
#include <cstdlib>

using namespace std;

int
main ()
{
  int numeroSecreto = rand () % 100 + 1;
  int tentativas = 10;
  int palpite;

  do
	{

	  cout << "Tentativa" << tentativas << ": Digite um número de 1 a 100: ";
	  cin >> palpite;

	  if (palpite < numeroSecreto)
		{
		  cout << "baixo" << endl;

		}
	  else if (palpite > numeroSecreto)
		{
		  cout << "alto" << endl;
		}
	  tentativas--;
	}
  while (palpite != numeroSecreto && tentativas > 0);
  if (palpite == numeroSecreto)
	{
	  cout << "Você acertou o número com " << 10-
		tentativas << "tentativas(s)!" << endl;
	}
  else
	{
	  cout << "Você não conseguiu adivinhar bobão o numero com " << 10 -
		tentativas << "tentativa(s)!" << endl;
	}
  return 0;
}