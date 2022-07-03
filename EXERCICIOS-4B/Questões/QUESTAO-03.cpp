#include <iostream> //inclui a bilioteca de entrada e saída
#include "recursiveMultplication.hpp" //incluia biloteca interna de função recursive Multiplication

using namespace std; //usa os espaços de nome padrão

int main() //inicia a função principal
{
    unsigned int num1,num2; //declara num1 e num2 como inteiros sem sinal
    int val; //declara val como um inteiro
    cout<<"insira o numero que quer multiplicar"<<"\n"; //exibe a mensagem escrita
    cin>>num1; //pede a entrada de um valor para num1
    cout<<"insira a quantiade de vezes que ira multplicar"<<"\n"; //exibe a mensagem escrita
    cin>>num2; //pede a entrada de um valor para num2
    recursiveMultiplication(num1,num2); //chama a função passando num1 e num2 como argumento
    val=recursiveMultiplication(num1,num2); //dá a val o retorno da chamada
    cout<<"\n"; //quebra linha
    cout<<"resultado: "<<val<<"\n"; //exibe a mensagem e o valor de val
    return 0; //retorna 0
}
