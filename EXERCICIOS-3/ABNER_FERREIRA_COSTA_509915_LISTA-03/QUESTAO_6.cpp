#include <iostream> //inclui a biblioteca padrão de entrada e saída
using namespace std; //usa os espaços de nome padrão

int main(){ //inicia o programa

    int n=2; //cria a variavel n do tipo int a dá 2 ao seu valor
    int i; //cria a variavel i e zera seu valor
    int num; //cria a variavel num do tipo int
    int soma=0; //cria variavel soma do tipo int e zera seu valor 

    cout << "insira um numero de 1 a 4" <<"\n"; //exibe a mensagem
    cin >> num; //pede a entrada de um valor para num

    //se num for maior que 0 e menor que 5
    if(num > 0 && num < 5){

        //enquando num for maior que 0
        while(num > 0){

            soma=0; //zera a soma a cada laço

            //cria o laço de i até um valor de i menor que n adicionando 1 a cada rodada
            for(i=1; i < n; i++){
            
                //checa se o resto da divisão de n por i é igual a 0
                if(n%i==0){

                    soma +=i; //dá a soma o valor de i a cada vez que o if for atendido
                }
            }

            //checa se a soma dos divisores é igual a n
            if (soma==n){

                cout << "Perfeito: " << soma << "\n"; //imprime o valor de soma e a string a cada vez que o if for atendido
                num--; //dimnui 1 de num a cada vez que o if fo atendido
            }

            n++; //soma 1 a n a cada rodada do loop
        }   
    }

    //se nao
    else{

        cout << "Valor inserido invalido" << "\n"; //exibe a mensagem
    }   
    return 0; //encerra o programa
}