#include <iostream> //inclui a bilioteca de entrda e saída
#include "ackermann.hpp" //inclui a biblioteca interna ackermann

using namespace std; //usa os espaços de nome padrão

int main() //inicia a função principal
{
    int m,n; //declara m,n e valor como inteiros
    int valor;
    cout<<"insira o valor de m"<<"\n"; //exibe a mensagem
    cin>>m; //pede a entrada de um valor de m
    if(m>=0) //confere se m é igual ou maior que 0
    {
        cout<<"insira o valor de n"<<"\n"; //exibe a mensagem
        cin>>n; //pede a entrada de um valor para n
        if(n>=0) //confere se n é maior ou igual a 0
        {
            ack(m,n); //chama a função ack passando m e n como parâmetro
            valor=ack(m,n); //dá a valor o retorno da chamada da função
            cout<<"o valor de ackermann deu: "<<valor<<"\n"; //exibe o valor de valor e a mensagem 
        }
        else //caso o if seja atendido vem para cá
        {
            cout<<"insira um valor igual ou maior que 0"<<"\n"; //exibe a mensagem escrita
        }
    }
    else //caso o if não seja atebdido vem para cá
    {
        cout<<"insira um valor igual ou maior que 0"<<"\n"; //exibe a mensagem escrita
    }
    return 0; //retorna 0
}
