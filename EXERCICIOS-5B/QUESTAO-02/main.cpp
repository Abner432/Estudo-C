#include <iostream>
#include "vandermonde.hpp"

using namespace std;

int main()
{
    int i, k, l;            //declara i,k e l como int
    short N = 3, num;       //declara N=3 e num como short
    float lambda[3];        //declara lambda[3] como float
    float A[3][3];          //declara A[3][3] como float
    for (i = 0; i < N; i++) //laço de i=0 até i<N
    {
        cout << "insira o " << i + 1 << " termo: "; //exibe a mensagem e os valores de i
        cin >> num;                                 //pede a entrada de um valor para num
        lambda[i] = num;                            //dá a lambda[i] o valor de num
    }
    vander(A, N, lambda); //chama a função
    cout << "\n";         //quebra linha
    cout << "os valores da matriz de Vandermonde e"
         << "\n";           //exibe a mensagem
    for (k = 0; k < N; k++) //laço de k=0 ate k<N
    {
        for (l = 0; l < N; l++) // laço de l=0 até l<N
        {
            cout << A[k][l] << " "; //exibe os valores A[k][l] seguido de um espaço em branco
        }
    }
    return 0; //retorna 0
}
