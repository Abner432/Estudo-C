#include <iostream> //inclui a biblioteca padrão de entrada e saída
using namespace std; //usa os espaços de nomes incluidos

int main() //inicia o programa
{
    int tempominimo = 0; //cria a variavel tempominimo e dá a ela o valor 0
    int tempo = 0; //cria a variavel tempo e dá a ela o valor 0
    int ciclista1 = 0; //cria a variavel ciclista1 e dá a ela o valor 0
    int ciclista2 = 0; //cria a variavel ciclista2 e dá a ela o valor 0
    int percursototal = 0; //cria a variavel percursototal e dá a ela o valor 0
    for (tempominimo = 0; percursototal <= 2000; tempominimo++) //cria o laço for de tempominimo até percursototal ser igual a 2000 soma 1 a tempominimo
    {
        tempo++; //soma 1 a tempo a cada loop
        ciclista1 += 15; //soma 15 a ciclista1 a cada loop
        ciclista2 += 10; //soma 10 a ciclista2 a cada loop
        percursototal = ciclista1 + ciclista2; //dá a percursototal a soma de ciclista1 e 2 
        if (percursototal == 2000) //checa se percurso total recebeu o valor de 2000
        {
            cout << "deslocamento do ciclista1: " << ciclista1 << " metros" //imprime o valor de ciclista1 e a string
                 << "\n"; //quebra a linha
            cout << "deslocamento do ciclista2: " << ciclista2 << " metros" //imprime o valor de ciclista2 e a string
                 << "\n"; //quebra a linha
            cout << "tempo para se cruzarem: " << tempo << " segundos" //imprime o valor de tempo e a string
                 << "\n"; //quebra a linha
            break; //quebra o laço
        }
    }
    return 0; //encerra o programa
}