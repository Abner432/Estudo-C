#include "sum.hpp"

void sum(float A[3][4], float *v, const short N, const short M)
{
    int k, l = 0, t;        //declara k,l=0 e t como int
    float soma = 0;         //declara soma=0 como float
    for (k = 0; k < N; k++) //laço de k=0 até k<N
    {
        for (t = 0; t < M; t++) //laço de t=0 até t<M
        {
            soma = soma + A[k][t]; //dá a soma o valor da operação descrita
            v[l] = soma;           //dá a v[l] o valor da operação descrita
            l++;                   //incrementa 1 a l
        }
    }
}
