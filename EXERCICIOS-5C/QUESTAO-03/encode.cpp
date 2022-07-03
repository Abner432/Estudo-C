#include "encode.hpp"
#include <string>
#include <cmath>
using namespace std;

string encode(string mensagem, const short linha)
{
    int tam = mensagem.length();           //declara tam  como int como valot do tamanho de mensagem
    int coluna = ceil(tam / (float)linha); //declara coluna como int com o valor da operação descrita
    int h = 0;                             //declara h como int com valor 0
    char matriz[linha][coluna];            //declara matriz como char de tamanho linha, coluna
    for (int i = 0; i < linha; i++)        //laço de i=0 até i<linha
    {
        for (int j = 0; j < coluna; j++) //laço de j=0 até j<coluna
        {
            if (h < tam) //confere se h é menor que tam
            {
                matriz[i][j] = mensagem[h]; //dá a matriz[i][j] o valor de mensagem[h]
            }
            else //se o if não for atendido vem para cá
            {
                matriz[i][j] = ' '; //dá a matriz[i][j] uma string vazia
            }
            h++; //soma 1 a h
        }
    }
    h = 0;                           //zera o valor de h
    for (int i = 0; i < coluna; i++) //laço de i=0 até i<coluna
    {
        for (int j = 0; j < linha; j++) //laço de j=0 até j<linha
        {
            mensagem[h] = matriz[j][i]; //dá a mensagem[h] o valor de matriz[j][i]
            h++;                        //soma 1 a h
        }
    }
    return mensagem; //retorna mensagem
}
