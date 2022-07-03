#include <iostream>     //inclui a biblioteca de entrada e saida
#include "isDiaDom.hpp" //inclui a biblioteca interna

using namespace std; //usa os espaços de nome padrão

int main() //inicia a função principal
{
    bool resultado;         //declara resultado como bool
    int N = 3, i, j, num;   //declara N=3, i, j e num como int
    float B[3][3];          //declara a matriz B[3][3] como float
    for (i = 0; i < N; i++) //laço de i=0 até i<N
    {
        for (j = 0; j < N; j++) //laço de j=0 até j<N
        {
            cout << "insira o " << j + 1 << " termo da linha " << i + 1 << ": "; //exibe as mensagens e os valores de j e i
            cin >> num;                                                          //pede a entrada de um valor para num
            B[i][j] = num;                                                       //dá o valor de num para B[i][j]
        }
    }
    Dom(B, N);             //chama a função
    resultado = Dom(B, N); //dá o resultado da chamada a resultado
    cout << "\n";          //quebra linha
    if (resultado == true) //confere se resultado é true
    {
        cout << "e diagonalmente dominante"
             << "\n"; //exibe a mensagem
    }
    else if (resultado == false) //confere se resultado é false
    {
        cout << "nao e diagonalmente dominante"
             << "\n"; //exibe a mensagem
    }
    return 0; //retorna 0
}
