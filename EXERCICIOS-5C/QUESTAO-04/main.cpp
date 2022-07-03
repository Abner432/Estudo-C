#include <iostream>
#include <string>
#include "encrypt.hpp"

using namespace std;

int main()
{
    string msg, key, cript, descript; //declara as strings msg,key,cript e descript
    cout << "insira a mensagem que deseja criptografar"
         << "\n";      //exibe a mensagem
    getline(cin, msg); //pede uam entrada para msg
    cout << "\n";      //quebra linha
    cout << "insira a chave de criptografia"
         << "\n";              //exibe a mensagem
    getline(cin, key);         //pede uam entrada para key
    encrypt(msg, key);         //chama a funcao
    cript = encrypt(msg, key); //da o valor da chamada a cript
    cout << "\n";              //quebra linha
    cout << "mensagem criptografada"
         << "\n";                   //exibe a mensagem
    cout << cript << "\n";          //exibe cript
    encrypt(cript, key);            //chama a funcao
    descript = encrypt(cript, key); //da o valor da chamada a descript
    cout << "\n";                   //quebra linha
    cout << "mensagem recuperada"
         << "\n";             //exibe a mensagem
    cout << descript << "\n"; //exibe descript
    return 0;                 //retorna 0
}
