#include <iostream>
#include <iomanip>
#include "normalizeByMax.hpp"

using namespace std;

int main()
{
    short N,i,j,valor;
    cout<<"insira o tamanho de vetor que deseja"<<"\n";
    cin>>N;
    float v[N];
    if(N>0)
    {
        for(i=0; i<N;i++)
        {
            cout<<"insira os valores do vetor"<<"\n";
            cin>>valor;
            v[i]=valor;
        }
        normalizeByMax(v,N);
        for(j=0;j<N;j++)
        {
            cout<<"os novos valores sao: "
                <<fixed<<setprecision(2)<<v[j]<<"\n";
        }
    }
    return 0;
}
