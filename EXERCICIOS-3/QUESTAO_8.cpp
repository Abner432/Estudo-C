#include <iostream> //inclui a biblioteca padrão de entrada e saída
using namespace std; //usa os espaços de nome padrão

int main() //inicia o programa
{
    int segundosamais, minutosamais, horasamais; //cria as variaveis segundosamais, minutosamais e horasamais do tipo int
    int horastotais, minutostotais, segundostotais; //cria as variaveis horastotais, minutostotais e segundostotais do tipo int
    int hor, min, seg; //cria as variaveis hor, min e seg do tipo int
    int novaH, novoM; //cria as variaveis novaH e novoM do tipo int
    cout << "insira a hora atual" //exibe a mensagem
         << "\n"; //quebra linha
    cout << "considere meia noite como 24" //exibe a mensagem
         << "\n"; //quebra linha
    cin >> hor; //pede a entrada de um valor
    if (hor > 0 && hor <= 24) //checa se hor é maior que e menor ou igual a 24
    {
        cout << "insira os minutos atuais" //exibe a mensagem
             << "\n"; //quebra linha
        cin >> min; //pede a entrada de um valor
        if (min >= 0 && min <= 59) //checa se min é maior que zero e menor ou iguala a 59
        {
            cout << "insira os segundos  atuais" //exibe a mensagem
                 << "\n"; //quebra linha
            cin >> seg; //pede a entrada de um valor
            if (seg >= 0 && seg <= 59) //checa se seg é maior que zero e menor ou iguala a 59
            {
                cout << "insira o tempo adicional" //exibe a mensagem
                     << "\n"; //quebra linha
            }
            else //se o if não for atendido vempara cá
            {
                cout << "segundos invalidos insira um valor entre 0 e 59" //exibe a mensagem
                     << "\n"; //quebra linha
            }
        }
        else //se o if não for atendido vempara cá
        {
            cout << "minutos invalidos insira um valor entre 0 e 59" //exibe a mensagem
                 << "\n"; //quebra linha
        }
    }
    else //se o if não for atendido vempara cá
    {
        cout << "hora invalida insira um valor entre 1 e 24" //exibe a mensagem
             << "\n"; //quebra linha
    }
    while (novaH != 0 && novoM != 0) //cria um laço que se repetirá até novaH e novoM forem iguais a 0
    {
        cout << "se nao houver tempo a adicionar mais basta colocar 0 nos valores" //exibe a mensagem
             << "\n"; //quebra linha
        cout << "hora" //exibe a mensagem
             << "\n"; //quebra linha
        cin >> novaH; //pede a entrada de um valor para novaH
        hor += novaH; //dá a hor o valor de novaH a cada repetição
        cout << "minutos" //exibe a mensagem
             << "\n"; //quebra linha
        cin >> novoM; //pede a entrada de um valor
        min += novoM; //dá a min o valor de novoM a cada repetição
    }
    if (seg == 60 or min >= 60 or hor > 24) //checa as condiçoes descritas
    {
        segundosamais = seg / 60; //dá a segundosamais o resultado da operação descrita
        segundostotais = (seg % 60); //dá a segundostotais o resultado da operação descrita
        minutosamais = (segundosamais + min) / 60; //dá a minutosamais o resultado da operação descrita
        minutostotais = (segundosamais + min) % 60; //dá a minutostotais o resultado da operação descrita
        horasamais = (minutosamais + hor) / 24; //dá a horasamais o resultado da operação descrita
        horastotais = (minutosamais + hor) % 24; //dá a horastotais o resultado da operação descrita
        cout << "tempo total "; //exibe a mensagem
        cout << horastotais << " h: " << minutostotais << " min: " << segundostotais << " seg." //exibe as variaveis horastoatais,minutostotais e segundostotais e as strings
             << "\n"; //quebra linha
    }
    else //se a condição não for atendida pula para cá
    {
        cout << "sua horas sem tempo adicional sao "; //exibe a mensagem
        cout << hor << " h: " << min << " min: " << seg << " seg."
             << "\n"; //quebra linha
    }
    return 0; //encerra o programa
}