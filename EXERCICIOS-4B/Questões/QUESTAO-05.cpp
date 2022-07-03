#include <iostream> //inclui a biblioteca de entrada e sa�da
#include <iomanip> //inclui a biblioteca de manipula��o de entrada e sa�da
#include "serieS.hpp" //inclui a blibioteca interna

using namespace std; //usa os espa�os de nome padr�o

int main() //inicia a fun��o principal
{
    int n; //declara n e val como inteiro
    float val;
    cout<<"insira o indice da serie"<<"\n"; //exibe a mensagem
    cin>>n; //pede a entrada de um valor para n
    if(n>0) //confere se n � maior que zero
    {
        serieS(n); //chama a fun��o
        val=serieS(n); //d� a val o retorno da fun��o
        cout<<"o valor da serie e: "
            <<fixed<<setprecision(2)<<val<<"\n"; //imprime a mensagem e val comduas casas decimais
    }
    return 0; //retorna 0
}
