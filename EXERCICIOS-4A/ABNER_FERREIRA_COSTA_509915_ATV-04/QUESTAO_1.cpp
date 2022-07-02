#include <iostream> //inclui a biblioteca de entrada e saida
#include <cmath> //incli a bibloteca matemática
#include <iomanip> //inclui a biblioteca de manipulação de entrada e saída
using namespace std; //usa os espaços de nome padrão

bool roots(float &a, float &b, float &c); //protiyipa a função roots do tipo bool

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
bool roots(float &a, float &b, float &c) //cria a função bool e dá os argumentos descritos
{
  float raizdel, delta; //declara raizdel e delta como float
  delta = (pow(b, 2)) - (4 * a * c); //dá a delta o valor dá operação descrita
  if (delta >= 0) //confere se delta é maior ou igual a zero
  {
    raizdel = sqrt(delta); //dá a raizdel o valor dá operação descrita
    //exibe a mensagem e o valor de raizdel com duas casas decimais
    cout << "raiz valida de valor: " << fixed << setprecision(2) << raizdel << "\n";
    return true; //retorna verdadeiro
  }
  else //caso o if não seja atendido
  {
    cout << "raiz complexa ou imaginaria" //exibe a mensagem
         << "\n"; //quebra linha
    return false; //retorna falso
  }
}