#include "recursiveMultplication.hpp" //inclui o header com o protótipo da função recursiveMultiplication

int recursiveMultiplication (int num1,int num2) //inicia a função recursiveMultplication
{
    if(num1==0 or num2==0) //confere se num1 ou num2 é igual a zero
    {
        return 0; //retorna 0
    }
    else if(num1==1) //confere se num1 é igual a 1
    {
        return num2; //returna num2
    }
    else if(num2==1) //confere se num2 é igual a 1
    {
        return num1; //retorna num1
    }
    return num1 + recursiveMultiplication (num1,num2-1); //retorna num1 mais a chamada da função descrita
}
