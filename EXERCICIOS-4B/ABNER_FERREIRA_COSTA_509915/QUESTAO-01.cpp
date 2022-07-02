#include <iostream> //inclui a biliteca de entrada e saída
#include "tetranacci.hpp" //inclui a bilioteca interna de tetranacci

using namespace std; //usa os espaços de nome padrão

int main() //inicia a função principal
{
    int n; //declara n como um inteiro
    int result; //declara result como um inteiro
    cout <<"Insira o indice do valor desejado"<<"\n"; //exibe a mensagem escrita
    cin>>n; //pede a entrada de um valor para n
    if(n>0) //confere se n é maior que zero
    {
        tetra(n); //chama a função tetranacci
        result=tetra(n); //dá a result o retorno da função
        cout<<"\n"; //quebra linha
        cout<<"o valor de tetranacci deu: "<<result<<"\n"; //exibe a mensagem e o valor de result
    }
    else //se o if não for atendido vem para cá
    {
        cout<<"\n"; //quebra linha
        cout<<"Insira um numero maior"<<"\n"; //exibe a mensagem
    }
    return 0; //retorna 0
}
