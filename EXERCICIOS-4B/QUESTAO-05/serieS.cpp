#include "serieS.hpp" //inclui o header com o protótipo da função

double serieS(int n) //inicia a função
{
    if(n==1) //confere se n é igual a 1
    {
        return 2; //retorna 2
    }
    if(n>1) //confere se n é maior que 1
    {
        return (((double)(n*n+1)/n)+serieS(n-1)); //retorna a operação descrita
    }
}
