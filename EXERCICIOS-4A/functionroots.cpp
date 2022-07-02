#include "functionroots.hpp"
using namespace std;

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