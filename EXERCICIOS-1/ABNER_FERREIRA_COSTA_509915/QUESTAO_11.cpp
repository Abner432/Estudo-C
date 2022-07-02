#include <iostream>  // inclui a biblioteca padrão de entrada e saida.
#include <cmath>     // inclui a biblioteca padrão matemática.
using namespace std; // usa os espaços de nomes padrão do C++.

int main(){ // cria a função principal main.
float PV; //cria a variavel PV e a declara como um número real.
float FV; //cria a variavel FV e a declara como um número real.
float n; //cria a variavel n e a declara como um número real.
float i; //cria a variavel i e a declara como um número real.
cout <<"insira o valor do montante\n"; //exibe a mensagem escrita.
cin >> PV; //pede a entrada de um valor para PV.
cout <<"insara a taxa de rendimento\n"; //exibe a mensagem escrita.
cin >> i; //pede a entrada de um valor para i.
cout <<"insira o periodo\n"; //exibe a mensagem escrita.
cin >> n; //pede a entrada de um valor para n.
cout <<"seu valor de juros compostos é\n"; //exibe a mensagem escrita.
FV = PV*(pow(1+(i/100),n)); //FV reecebe como valor o resultado da operação.
cout << FV <<" R$"<< endl; //exibe o valor de FV e a mensagem escrita.
return 0; // retorna o valor 0.
}