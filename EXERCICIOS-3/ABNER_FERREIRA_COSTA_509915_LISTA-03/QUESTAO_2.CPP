#include <iostream> //inclui a biblioteca de entrada e saída padrão
using namespace std; //usa os espaços de nome padrão 

int main() //cria a função principal
{
    float massa, novamassa; //cria as variaveis massa e novamassa do tipo float
    int passo = 0; //cria a variavel passo do tipo int e dá a ela o valor 0
    int Hor, Min, Seg; //cria a variavel Hor, Min e Seg do tipo int
    while (true) //cria a loço que irá se repetir enquanto a condição
    {
        cout << "insira a massa em gramas do seu material" //exibe a mensagem escrita
             << "\n"; //quebra linha
        cin >> massa; //pede a entrada de massa
        if (massa <= 0) //checa se massa é menor ou igual a zero
        {
            cout << "insira um valor maior" //exibe a mensagem escrita
                 << "\n"; //quebra linha
            continue; //reenicia o laço
        }
        while (massa > 0.10) //cria o laço que checa se massa é maior que 10
        {
            massa = massa - (massa * 25) / 100; //da a massa o valor da operação
            passo += 30; //dá a passo +30 a cada rodada do laço 
        }
        break; //quebra o laço
    }
    if (passo > 0) //checa se passo é maior que 0
    {
        Hor = passo / 3600; //dá a Hor o valor da operação
        Min = (passo % 3600) / 60; //dá a Min o valor da operação
        Seg = (passo % 3600) % 60; //dá a Seg o valor da operação
        cout << "tempo necessario para decompor a massa" //exibe a mensagem
             << "\n"; //quebra o linha
        cout << Hor << "h:" << Min << "min:" << Seg << "seg."; //imprime o valor de Hor, Min e Seg e as strings
    }
    return 0; //encerra o programa
}