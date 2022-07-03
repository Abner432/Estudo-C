#include "normalizeByMax.hpp"

void normalizeByMax(float *v,short N)
{
    int i,maior=v[0];

    for(i=0;i<N;i++)
    {
        if(fabs(v[i])>fabs(maior))
        {
            maior=(v[i]);
        }
    }
    for(i=0;i<N;i++)
    {
        v[i]=v[i]/maior;
    }
}
