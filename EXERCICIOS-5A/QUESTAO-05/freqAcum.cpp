#include "freqAcum.hpp"

void freqAcum(unsigned int freq[], unsigned int N, unsigned int *freqAc)
{
    unsigned int i,j,soma=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<=i;j++)
        {
            soma+=freq[j];
        }
        freqAc[i]=soma;
        soma=0;
    }
}
