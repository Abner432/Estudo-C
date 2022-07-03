#include <iostream>
#include <string>
#include <cmath>
#include "encode.hpp"
using namespace std;

int main()
{
    string mensagem, retorno; //declara as strings mensagem e retorno
    int linha;                //declara a variavel linha do tipo inteiro
    cout << "Digite o texto: "
         << "\n";               //exibe a mensagem
    getline(cin, mensagem);     //pede a entrada de uma string para mensagem
    if (mensagem.length() >= 4) //confere se a string inserida tem tamanho igual ou maior que 4
    {
        cout << "\n"; //quebra linha
        cout << "Digite o numero de linhas desejado"
             << "\n";                                                   //exibe a mensagem
        cin >> linha;                                                   //pede a entrada de um valor para linha
        if ((linha >= 2) && (linha <= (ceil(sqrt(mensagem.length()))))) //confere as condições indicadas
        {
            encode(mensagem, linha);           //chama a função
            retorno = encode(mensagem, linha); //dá o valor de retorno a retorno
            cout << "\n";                      //quebra linha
            cout << "mensagem codificada"
                 << "\n";            //exibe a mensagem
            cout << retorno << "\n"; //exibe a string retorno
        }
        else //se o if não for atendido vem para cá
        {
            cout << "Valor invalido"
                 << "\n"; //exibe a mensagem
        }
    }
    else //se o if não for atendido vem para cá
    {
        cout << "Valor do texto invalido"
             << "\n"; //eibe a mensagem
    }
}
