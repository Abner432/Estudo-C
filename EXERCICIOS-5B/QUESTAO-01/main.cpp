#include <iostream>
#include "sum.hpp"

using namespace std;

int main()
{
    const short N = 3, M = 4; //declara N=3 e M=4 como short constante
    int i, j, num;            //declara i,j e num como int
    float A[N][M];            //declara a matriz A[N][M] como float
    float v[12];              //declara o vetor V[12]
    for (i = 0; i < N; i++)   //laço de i=0 até  i<N
    {
        for (j = 0; j < M; j++) //laço de j=0 até j<M
        {
            cout << "insira o elemento " << j + 1 << " da linha " << i + 1 << "\n"; //exibe a mensagem e os valores de i e j
            cin >> num;                                                             //pede uma entrada para num
            A[i][j] = num;                                                          //dá a A[i][j] o valor de num
        }
    }
    sum(A, v, N, M); //chama a função
    cout << "\n";    //quebra linha
    cout << "valor da soma dos elementos"
         << "\n";                //exibe a mensagem
    for (int t = 0; t < 12; t++) //laço de t=0 até t<12
    {
        cout << v[t] << " "; //exibe o valor de v[t] e um espaço em branco
    }
    return 0; //retorna 0
}
