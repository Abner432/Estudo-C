#include <iostream>//inclui a biblioteca padrão de entrada e saída
#include <cmath> //inclui a biblioteca matemática padrão
using namespace std; //usa os espaços de noes incluidos

int main() //inicia o programa
{
    int h, cat1, cat2; //cria as variaveis h,cat1 e cat2 do tipo int
    for (cat1 = 1; cat1 < 500; cat1++) //cria um loop de cat1=1 até cat1=499 somando um a cada repetição
    {
        for (cat2 = 1; cat2 < 500; cat2++) //cria um loop de cat2=1 até cat2=499 somando um a cada repetição
        {
            for (h = 1; h < 500; h++) //cria um loop de h=1 até h=499 somando um a cada repetição
            {
                if (h == sqrt(pow(cat1, 2) + pow(cat2, 2))) //confere se h tem exatamente o valor da operação descrita no if
                {
                    h = sqrt(pow(cat1, 2) + pow(cat2, 2)); //dá a h o valor da operação
                    cout << "terno pitagorico" //exibe a mensagem
                         << "\n"; //quebra linha
                    cout << "hipotenusa:" << h << ", cateto1:" << cat1 << ", cateto2: " << cat2 << "\n"; //imprime o valor de h, cat1, cat2 e as strings
                }
            }
        }
    }
    return 0; //encerra o programa
}