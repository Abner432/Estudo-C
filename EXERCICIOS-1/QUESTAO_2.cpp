#include <iostream>  // inclui a biblioteca padrão de entrada e saida.
#include <cmath>     // inclui a biblioteca padrão matemática.
using namespace std; // usa os espaços de nomes padrão do C++.

int main(){ //
    float Atriangulo; //cria a variavel Atriangulo e a declara como um número real.
    float a; //cria a variavel a e a declara como um número real.
    float b; //cria a variavel b e a declara como um número real.
    float c; //cria a variavel c e a declara como um número real.
    cout <<"escreva o comprimento do lado a\n"; //exibe a mensagem escrita.
    cin >> a; //pede que seja dado um valor para a que será armazenado na variavel.
    cout <<"escreva o comprimento do lado b\n"; //exibe a mensagem escrita.
    cin >> b; //pede que seja dado um valor para b que será armazenado na variavel.
    cout <<"escreva o comprimento do lado c\n"; //exibe a mensagem escrita.
    cin >> c; //pede que seja dado um valor para c que será armazenado na variavel.
    float s; //cria a variavel s e a declara como um número real.
    s = a+b+c/2; //Dá a variavel s o valor resultante da operação descrita.
    Atriangulo = sqrt(s*(s-a)*s*(s-b)*s*(s-c)); //Dá a variavel Atriangulo o valor resultante da operação descrita.
    cout <<"area do triangulo: "<< Atriangulo<<"\n"; //Imprime o valor guardado em Atriangulo e exibe a mensagem escrita.
    return 0; //retorna o valor 0.
}