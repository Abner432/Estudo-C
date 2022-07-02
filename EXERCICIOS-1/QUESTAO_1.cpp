#include <iostream>  // inclui a biblioteca padrão de entrada e saida.
using namespace std; // usa os espaços de nomes padrão do C++.

int main(){          // cria a função principal main.
int Nd;              // Cria a variavel Nd e declara como sendo uma variavel inteira.
int N;               // Cria a variavel N e declara como sendo uma variavel inteira.
cout << "insira o numero de lados\n"; //exibe a mensagem escrita.
cin >> N;            // Pede a entrada de um número para ser guardado dentro da variavel N e Lê seu valor.
Nd = N*(N-3)/2;      // Diz que a variavel Nd terá o valor resultante da operação descrita.
cout << "o numero de diagonais: "<< Nd <<"\n"; //exibe a mensagem escrita e imprime o valor de Nd da operação da linha anterior.
return 0;            // Retorna o valor 0.
} 