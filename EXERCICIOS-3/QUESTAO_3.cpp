#include <iostream> //inclui a biblioteca padrão de entrada e saída
#include <cmath> //inclui a biblioteca matemática padrão
using namespace std; //usa os espaços de nomes incluidos

int main() //inicia o programa
{
    int n, px = 0, x; //cria as variaveis n,x e px, dando a px o valor 0
    cout << "insira o grau do polinomio" //exiibe a mensagem
         << "\n"; //quebra linha
    cin >> n; //pede a entrada de um valor para n
    cout << "insira o valor de x" //exiibe a mensagem
         << "\n"; //quebra linha
    cin >> x; //pede a entrada de um valor para x
    for (n; n > 0; n--) //cria um laço de n até n ser 1, diminuindo 1 de seu valor
    {
        int a[n]; //cria a array a com n posições
        cout << "insira o valor do coeficiente a " << n << "\n"; //imprime a string junto com o valor de n
        cin >> a[n]; //pede uma entrada para a array a na posição n
        px += a[n] * (pow(x, n)); //dá a px o valor da operação a cada vez que o loop for feito
    }
    cout << "resultado de seu polinomio" //exiibe a mensagem
         << "\n"; //quebra linha
    cout << px << "\n"; //imprime o valor de px e quebra linha
    return 0; //encerra o programa
}