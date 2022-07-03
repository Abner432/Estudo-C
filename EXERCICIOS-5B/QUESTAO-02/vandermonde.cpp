#include "vandermonde.hpp"
#include <cmath>
using namespace std;

void vander(float A[3][3], short N, float *lambda)
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
                A[i][j]=pow(lambda[j],i);
        }
    }
}
