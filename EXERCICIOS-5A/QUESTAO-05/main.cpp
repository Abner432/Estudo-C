#include <iostream>
#include "freqAcum.hpp"

using namespace std;

int main()
{
    unsigned int N=100,i,valor;
    unsigned int freq[N];
    unsigned int freqAc[N];
    for(i=0;i<N;i++)
    {
        cout<<"insira a "<<i+1<<" frequencia"<<"\n";
        cin>>valor;
        freq[i]=valor;
    }
    freqAcum(freq,N,freqAc);
    cout<<"\n";
    for(i=0; i<N; i++)
    {
        cout<<"os valores sao: "<<freqAc[i]<<"\n";
    }
    return 0;
}
