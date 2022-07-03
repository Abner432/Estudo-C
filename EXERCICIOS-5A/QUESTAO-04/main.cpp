#include <iostream>
#include <iomanip>
#include "current.hpp"

using namespace std;

int main()
{
    unsigned short N,k,i;
    float valor,V=12;
    float result;
    cout<<"insira o tamanho do vetor de resistenca"<<"\n";
    cin>>N;
    float R[N];
    cout<<"\n";
    for(i=0;i<N;i++)
    {
        cout<<"insira o "<<i+1<<" valor de resistencia"<<"\n";
        cin>>valor;
        if(valor>=0)
        {
            R[i]=valor;
        }
        else
        {
            cout<<"insira uma resistencia valida"<<"\n";
            continue;
        }
    }
    cout<<"\n";
    cout<<"insira o indice da resistencia desejada"<<"\n";
    cin>>k;
    if(k>0 && k<=N)
    {
    current(R,N,V,k);
    result=current(R,N,V,k);
    cout<<"\n";
    cout<<"o valor da resistencia do resistor "<<k<<" e: "
        <<fixed<<setprecision(2)<<result<<"\n";
    }
    else
    {
        cout<<"insira um indice valido"<<"\n";
    }
    return 0;
}
