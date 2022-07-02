#include <iostream> //inclui a biblioteca de entrada e saida
#include "functionroots.hpp"
using namespace std; //usa os espaços de nome padrão

int main() //inicia a função principal
{
  float a, b, c; //declara a,b e c como float
  cout << "escreva o valor de A do delta" //exibe a mensagem
       << "\n"; //quebra linha
  cin >> a; //pede a entrada de um valor para a
  cout << "escreva o valor de B do delta" //exibe a mensagem
       << "\n"; //quebra linha
  cin >> b; //pede a entrada de um valor para b
  cout << "escreva o valor de C do delta" //exibe a mensagem
       << "\n"; //quebra linha
  cin >> c; //pede a entrada de um valor para c
  roots(a, b, c);
}