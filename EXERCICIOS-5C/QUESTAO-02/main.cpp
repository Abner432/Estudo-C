#include <iostream>
#include <string>
#include "fibonacci.hpp"

using namespace std;

int main()
{
    int N;          //declara N como int
    string retorno; //declara a string retorno
    cout << "insira o indice da palavra de Fibonacci desejada"
         << "\n"; //exibe a mensagem
    cin >> N;     //pede uma entrada de valor para N
    if (N >= 0)   //confere se o valor inserido e igual ou maior que 0
    {
        cout << "\n";                      //quebra linha
        fibonacci(N);                      //chama a funcao
        retorno = fibonacci(N);            //da o valor de retorno da funcao a retorno
        cout << "a palavra Fibonacci e: "; //exibe a mensagem
        cout << retorno << "\n";           //exibe retorno
    }
    else //se o if nao for atendido vem para ca
    {
        cout << "indice invalido"
             << "\n"; //exibe a mensagem
    }
    return 0; //retorna 0
}
