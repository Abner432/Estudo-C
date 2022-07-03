#include "encrypt.hpp"
#include <string>
using namespace std;

string encrypt(string msg, string key)
{
    int i, j;              //declara i e j como int
    int tam1 = msg.size(); //declara tam1 como int com valor do taanho de msg
    int tam2 = key.size(); //declara tam2 como int com valor do taanho de key
    string novamsg;        //declara a string novamsg
    if (tam2 < tam1)       //confere se tam2 é menor que tam1
    {
        while (tam2 < tam1) //laço que se repetirá até que tam2 deixe de ser menor que tam1
        {
            key += key;        //concatena key com ela mesma
            tam2 = key.size(); //dá uma novo valor a tam2
            if (tam2 >= tam1)  //confere se tam2 é maior ou igual a tam1
            {
                break; //quebra o laço
            }
        }
        for (j = 0; j < tam1; j++) //laço de j=0 até j<tam1
        {
            novamsg += msg[j] ^ key[j]; //dá a novamsg o valor de msg[j]^key[j] concatenando os resultados
        }
    }
    else //se o if não for atendido ve para cá
    {
        for (i = 0; i < tam1; i++) //laço de i=0 até i<tam
        {
            novamsg += msg[i] ^ key[i]; //dá a novamsg os valores de msg[i]^key[i] concatenando os resultados
        }
    }
    return novamsg; //retorna novamsg
}
