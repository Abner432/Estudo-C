#include "serieS.hpp" //inclui o header com o prot�tipo da fun��o

double serieS(int n) //inicia a fun��o
{
    if(n==1) //confere se n � igual a 1
    {
        return 2; //retorna 2
    }
    if(n>1) //confere se n � maior que 1
    {
        return (((double)(n*n+1)/n)+serieS(n-1)); //retorna a opera��o descrita
    }
}
