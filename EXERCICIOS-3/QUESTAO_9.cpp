#include <iostream> //inclui a biblioteca padrão de entrada e saída
#include <iomanip> //inclui a biblioteca padrão de manipulação de entrada e saída
using namespace std; //usa os espaços de nome padrão

int main() //inicia o programa
{
    float aluguel; //cria a variavel aluguel do tipo float
    float manutencao; //cria a variavel manutencao do tipo float
    float aumento; //cria a variavel aumento do tipo float
    float lucroMax; //cria a variavel lucroMax do tipo float
    float lucro[50] = {}; //cria a array lucro com 50 posições de variaveis do tipo float e zera os valores das variaveis
    float montante = 0; //cria a variavel montante do tipo float e zera seu valor
    int unidades = 50; //cria a variavel unidades do tipo int e dá 50 a seu valor
    int i; //cria avariavel i do tipo int




    
    cout << "insira o aluguel para preencher todas as unidades" //exibe a mensagem
         << "\n"; //quebra linha
    cin >> aluguel; //pede a entrada de uma valor para aluguel
    if (aluguel > 0) //confere se aluguel é maior que 0
    {
        cout << "insira o valor da manutencao" //exibe a mensagem
             << "\n"; //quebra linha
        cin >> manutencao; //pede a entrada de um valor para manutenção
        if (manutencao > 0) //confere se manutencao é maior que 0
        {
            cout << "insira o valor do aumento que esvazia 1 unidade" //exibe a mensagem
                 << "\n"; //quebra linha
            cin >> aumento; //pede a entrada de um valor para aumento
            if (aumento > 0) //confere se aumento é maior que 0
            {
                for (i = 0; i <= unidades; i++) //cria um laço de repetição de i até que i seja menor ou igual a unidades, somando 1 a i a cada rodada
                {

                    montante = (aluguel * unidades) - (manutencao * unidades); //dá a montante o valor da operação descrita
                    lucro[i] = montante + (aumento * (unidades - 1)); //dá a lucro[i] o valor da operação descrita 
                    if (lucro[i] >= lucroMax) //confere se lucro[i] é maior que lucroMax
                    {
                        lucroMax = lucro[i]; //dá a lucroMax o valor de lucro[i]
                    }
                    else if (lucro[i] < lucroMax) //se não for verdade a condição de if checa se lucro[i] é menor que lucroMax 
                    {
                        break; //encerra o laço
                    }
                    unidades--; //diminui 1 de unidades a cada rodada
                    montante = 0; //zera o valor de montante
                }
            }
            else //caso o if não seja atendido pula para cá
            {
                cout << "insira um valor de maior" //exibe a mensagem
                     << "\n"; //quebra linha
            }
        }
        else //caso o if não seja atendido pula para cá
        {
            cout << "insira um valor de maior" //exibe a mensagem
                 << "\n"; //quebra linha
        }
    }
    else //caso o if não seja antendido pula para cá
    {
        cout << "insira um valor de maior" //exibe a mensagem
             << "\n"; //quebra linha
    }
    cout << "lucro maximo obtido com o aumento: "; //exibe a mensagem
    cout << fixed << setprecision(2) << lucroMax << "\n"; //imprime lucroMax com precisão de duas casas decimais e quebra linha
    cout << "unidades totais ocupadas: "; //exibe a mensagem
    cout << unidades << "\n"; //imprime unidades e quebra linha
    return 0; //encerra o programa
}