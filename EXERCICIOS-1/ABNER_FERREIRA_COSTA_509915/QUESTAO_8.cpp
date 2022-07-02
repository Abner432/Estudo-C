#include <iostream>  // inclui a biblioteca padrão de entrada e saida.
using namespace std; // usa os espaços de nomes padrão do C++.

int main (){
    char letra; //cria a variavel letra e a declara como um tipo caractere.
    char Letra; //cria a variavel Letra e a declara como um tipo caractere.
    cout <<"digite uma letra\n"; //exibe a mensagem escrita.
    cin >>letra; //pede uma entrada para letra.
    Letra = letra ^ 1 << 5; //faz um OU-EXCLUSIVO com letra bit-a-bit mudando o seu bit de indice cinco de valor e guarda o resultado em Letra. 
    cout <<"letra inversa: "; //exibe a mensgame escrita.
    cout << Letra << "\n"; //imprime ovalor de Letra.
    return 0; //retorna 0;
}