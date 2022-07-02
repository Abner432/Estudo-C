#include <iostream> //inclui a biblioteca de entrada e saída
#include <iomanip> //inclui a biblioteca de manipulação de entrada e saída
#include "serieS.hpp" //inclui a blibioteca interna

using namespace std; //usa os espaços de nome padrão

int main() //inicia a função principal
{
    int n; //declara n e val como inteiro
    float val;
    cout<<"insira o indice da serie"<<"\n"; //exibe a mensagem
    cin>>n; //pede a entrada de um valor para n
    if(n>0) //confere se n é maior que zero
    {
        serieS(n); //chama a função
        val=serieS(n); //dá a val o retorno da função
        cout<<"o valor da serie e: "
            <<fixed<<setprecision(2)<<val<<"\n"; //imprime a mensagem e val comduas casas decimais
    }
    return 0; //retorna 0
}
