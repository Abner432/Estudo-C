#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

 void sorteio ( short *v, short n)
 {
     short i ,j ,k;
     for(k=0; k< 10*n; k++)
     {
         i=rand()%n;
         j=rand()%n;
         swap(v[i],v[j]);
     }
 }

int main()
{
    const short numBolas = 75;
    string letras = "BINGO";
    short bolas[numBolas], i;

    srand(time(0));

    for(i=0;i<numBolas;i++)
    {
        bolas[i]=i+1;
    }
    sorteio (bolas,numBolas);
    for(i=0;i<numBolas;i++)
    {
        cout<<"precione ENTER para sortear";
        cin.ignore();
        cout<<letras[(bolas[i]-1)/15]<<"-"<<bolas<<"\n";
    }
    return 0;
}
