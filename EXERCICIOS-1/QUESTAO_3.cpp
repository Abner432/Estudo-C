#include <iostream>  // inclui a biblioteca padrão de entrada e saida.
using namespace std; // usa os espaços de nomes padrão do C++.

int main(){ //cria a função principal main.
int num; //cria a variavel num como um inteiro.
for (num=0;num<=15;num++){ //cria o laço, lê e valor de num somando 1 ao valor parando em 15.
cout << "0 a 15 em decimal"; //exibe a mensagem escrita.
cout << dec << num << endl; //imprime os valores de num na base decimal.
}
for (num=0;num<=15;num++){ //cria o laço, lê e valor de num somando 1 ao valor parando em 15.
cout << "0 a 15 em octal"; //exibe a mensagem escrita.
cout << oct << num << endl; //imprime os valores de num na base octal.
}
for (num=0;num<=15;num++){ //cria o laço, lê e valor de num somando 1 ao valor parando em 15.
cout << "0 a 15 em hexadecimal"; //exibe a mensagem escrita.
cout << hex << num << endl; //imprime os valores de num na base hexadecimal.
}
return 0; //retorna o valor 0.
}