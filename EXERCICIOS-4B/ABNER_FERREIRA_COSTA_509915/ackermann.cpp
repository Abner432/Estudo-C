#include "ackermann.hpp" //inclui  header com o protótipo da função

int ack(int m, int n) //inicia a função ack
{
    if(m==0) //confere se m é igual a 0
    {
        return n+1; //retorna n+1
    }
    else if(m>0 && n==0) //confere se m é maior ou igual a zero e n é zero
    {
        return ack(m-1,1); //retorna a chama da função descrita
    }
    else if(m>0 && n>0) //confere se m e n é maior ou igual a zero
    {
        return ack(m-1,ack(m,n-1)); //retorna a chamada da função descrita
    }
}
