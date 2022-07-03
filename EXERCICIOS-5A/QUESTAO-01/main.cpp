#include <iostream>     //inclui a biblioteca de entrada e saída
#include "extremos.hpp" //inclui a biblioteca interna
using namespace std;    //usa os espaços de nome padrão

int main() //inicia a função principal
{
    float min, max;    //declara min e max como float
    short N, i, valor; //declara N,i e valor como short
    cout << "insira a quantidade de valores Reais deseja insirir"
         << "\n"; //exibe a mensagem
    cin >> N;     //pede a entrada de um valor para N
    float v[N];   //declara v como uma array float de N posições
    if (N > 0)    //confere se N é maior que zero
    {
        for (i = 0; i < N; i++) //laço de i=0 até i<N
        {
            cout << "insira os valor que deseja"
                 << "\n"; //exibe a mensagem
            cin >> valor; //pede a entrada de um avlor para valor
            v[i] = valor; //dá a v[i] o valor de  valor
        }
        extremos(v, N, min, max);                    //chama a função
        cout << "o valor maximo e: " << max << "\n"; //exibe a mensagem e o valor de max
        cout << "o valor minimo e: " << min << "\n"; //exibe a mensgaem e o valor de min
    }
    else //caso o if não seja atendido
    {
        cout << "insira uma quantidade valida"
             << "\n"; //exibe a mensagem
    }
    return 0; //retorna 0
}
