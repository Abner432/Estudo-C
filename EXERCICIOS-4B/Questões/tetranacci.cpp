#include "tetranacci.hpp" //inclui o header com o protoipo da função

int tetra(int n) //inicia a função tetra com int n como argumento
{
    if(n==1||n==2||n==3) //confere se n é igual a 1,2 ou 3
    {
        return 0; //retorna 0
    }
    if(n==4) //confere se n é igual a 4
    {
        return 1; //retorna 1
    }
    else //se os ifs não forem atendidos
    {
        return tetra(n-1)+tetra(n-2)+tetra(n-3)+tetra(n-4); //retorna o descrito
    }
}
