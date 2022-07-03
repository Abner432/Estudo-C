#include <iostream>
#include <string>
#include "ocultarInfo.hpp"

using namespace std;

int main()
{
    string informacoes, retorno; //declara informacoes e retorno como strings
    cout << "insira seu nome, CPF, loguin e senha"
         << "\n";                       //exibe a mensagem
    getline(cin, informacoes);          //pede a entrada de uma string para informacoes
    ocultarInfo(informacoes);           //chama a funcao
    retorno = ocultarInfo(informacoes); //dá o retorno da chamada a retorno
    cout << "\n";                       //quebra linha
    cout << "informacoes ocutadas"
         << "\n";            //exibe a mensagem
    cout << retorno << "\n"; //exibe retorno
    return 0;                //retorna 0
}
