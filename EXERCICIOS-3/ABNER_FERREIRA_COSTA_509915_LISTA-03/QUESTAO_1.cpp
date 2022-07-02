#include <iostream> //inclui a biblioteca de entrada e saída padrão
#include <iomanip> //inclui a biblioteca de manipulação de entrada e saída
using namespace std; //usa os espaços de nome padrão 

int main() //cria a função principal
{

    float N[120] = {}; //cria uma array de 120 posições do tipo float
    float p1, p2, p3; //cria as variaveis p1,2 e 3 do tipo float
    int i; //cria a variavel i do tipo int
    int perc1 = 0; //cria a variavel perc1 do tipo int
    int perc2 = 0; //cria a variavel perc2 do tipo int
    int perc3 = 0; //cria a variavel perc3 do tipo int
    for (i = 0; i <= 119; i++) //cria o laço de repetição de i=0 até i=119
    {
        while (true) //cria a loço que irá se repetir enquanto a condição 
        {
            cout << "insira seu preco do item " << (i + 1) << "\n"; //exibe a mensagem junto da variavel i+1
            cin >> N[i]; //pede a inserção de um valor para a array N na posiçaõ i 
            if (N[i] <= 0) //confere se o valor inserido é menor ou igual a zero 
            {
                cout << "insira um valor maior" //exibe a mensagem escrita
                     << "\n"; // quebra linha
                continue; //faz o laço se repetir
            }
            break; //quebra o laço
        }
    }
    for (i = 0; i <= 119; i++) //laço que vai de i=0 até i=199
    {
        if (N[i] < 50) //checa se o valor da array N na posição é menor que 50
        {
            perc1++; //adiciona 1 a perc1
        }
        else if (N[i] >= 50 && N[i] <= 1000) //caso o if não seja atendido checa se o valor da array N na posição i está entre 50 e 999
        {
            perc2++; //adiciona 1 a perc2
        }
        else //caso nenhum das duas outras condiçoes sejam atendida vem para cá
        {
            perc3++; //adiciona 1 a perc3
        }
    }
    p1 = (perc1 * 100) / 120; //dá a p1 o valor da operação
    p2 = (perc2 * 100) / 120; //dá a p2 o valor da operação
    p3 = (perc3 * 100) / 120; //dá a p2 o valor da operação
    cout << "produtos baratos: " << fixed << setprecision(2) << p1 << "%" //imprime a string e o valor de p1 com 2 casa decimais
         << "\n"; //quebra linha
    cout << "produtos acessiveis: " << fixed << setprecision(2) << p2 << "%" //imprime a string e o valor de p2 com 2 casa decimais
         << "\n"; //quebra linha
    cout << "produtos caros: " << fixed << setprecision(2) << p3 << "%" //imprime a string e o valor de p3 com 2 casa decimais
         << "\n"; //quebra linha

    return 0; //encerra o programa
}