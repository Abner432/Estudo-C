#include "isDiaDom.hpp" //inclui o header da função
#include <cmath>        //inclui a biblioteca matemática
using namespace std;

bool Dom(float B[3][3], short N) //inicia a função
{
    int s1, s2, s3, d1, d2, d3;                       //declara s1,s2,s3,d1,d2,d3 como int
    s1 = fabs(B[0][1] + B[0][2] + B[1][0] + B[2][0]); //dá a s1 o resultado em módulo da operação descrita
    s2 = fabs(B[1][0] + B[1][2] + B[0][1] + B[2][1]); //dá a s2 o resultado em módulo da operação descrita
    s3 = fabs(B[2][0] + B[2][1] + B[0][2] + B[1][2]); //dá a s3 o resultado em módulo da operação descrita
    d1 = fabs(B[0][0]);                               //dá a d1 o resultado em módulo da operação descrita
    d2 = fabs(B[1][1]);                               //dá a d2 o resultado em módulo da operação descrita
    d3 = fabs(B[2][2]);                               //dá a d3 o resultado em módulo da operação descrita
    if (d1 > s1 && d2 > s2 && d3 > s3)                //confere as condições pedidas
    {
        return true; //retorna verdadeiro
    }
    else //se o if não for atendido vem para cá
    {
        return false; //retorna falso
    }
}
