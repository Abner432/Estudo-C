#include "current.hpp"

float current(float R[], unsigned int N, float V, unsigned short k)
{
    int i;
    float soma=0,div;
    for(i=0;i<N;i++)
    {
        soma+=(1/R[i]);
    }
    div=V*((1/R[k-1])/soma);
    return div;
}
