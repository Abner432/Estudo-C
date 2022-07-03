#include "extremos.hpp"

void extremos(float v[], short N, float &min, float &max)
{
    int j;
    for(j=0;j<N;j++)
    {
        if(v[j]>max)
        {
            max=v[j];
        }
        if(v[j]<min)
        {
            min=v[j];
        }
    }
}
