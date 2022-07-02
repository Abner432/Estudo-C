#include <iostream> //inclui a biblioteca de entrada e saída
using namespace std; //usa os espaços de nome padrão

void collatz(int &n, int &soma); //prototipa a função collatz do tipo void

int main() //cria a função principal 
{
    int i; //cria a variavel i do tipo int
    int n[5]; //cria a array n de 5 posições do tipo int
    int soma[5]; //cria a array soma de 5 posições do tipo int
    for (i = 0; i < 5; i++) //laço de i=0 até i=4
    {
        cout << "insira um numero" //exibe a mensagem
            << "\n"; //quebra linha
        while (true) //laço de repetção com parâmetro true
        {
            cin >> n[i]; //pede a entrada de um valor para a posição i de n 
            if (n[i] > 0) //conferre se o valor inserido é maior que zero
            {
                break; //quebra o laço while
            }
            else //caso o if não seja atendido
            {
                cout << "insira um valor valido" //exibe a mensagem
                     << "\n"; //quebra linha
                continue; //reenicia o laço
            }
        }
    }
    for(i=0;i<5;i++){ //laço de i=0 até i=4 
        collatz ( n[i] , soma[i] ); //chama a função coolatz
        cout<<"O resultado de collatz deu: "<<soma[i] //exibe a mensagem e o valor de soma na posição i
            <<"\n"; //quebra linha
    }
}
void collatz(int &n, int &soma) //cria a função coolatz com os argumentos descritos
{
    soma = 0; //zera o valor de soma para caso esteja acumulado
    soma += n; //dá a soma o valor de n
    while (n != 1) //laço de n até qu se torne 1
    {
        if (n % 2 == 0) //cenfere se o número é par
        {
            n = n / 2; //dá a n o valor da operação descrita
        }
        else //caso o if não seja atendido
        {
            n = ((n * 3) - 1); //dá a n o valor da operação descrita
        }
        soma += n; //soma os novos valores de n a variavel soma
    }
}