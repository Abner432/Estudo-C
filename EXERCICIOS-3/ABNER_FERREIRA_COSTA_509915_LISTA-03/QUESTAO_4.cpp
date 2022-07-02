#include <iostream> //inclui a biblioteca padrão de entrada e saída
#include <iomanip> //inclui a biblioteca de manipulação de entrada e saída
using namespace std; //usa os espaços de nomes incluidos

int main() //inicia o programa
{
    int mediadaTurma, mediaMulheres; //cria as variaveis mediaTurma e madia Mulheres do tipo int
    int alturaHomens = 0, alturaMulheres = 0; //cria as variaveis alHomens e alMulheres do tipo int dando a elas o valor 0
    int QuantHomens = 0, QuantMulheres = 0; //cria as variaveis QuantHomens e QuantMulheres do tipo int dando a elas o valor 0
    int menorAltura, maiorAltura; //cria as variaveis menorAltura e maiorAltura do tipo int
    int i; //cria a variavel i do tipo int
    int sexo[50] = {}; //cria a arrai sexo de 50 posiçoes com um conjunto vazio de valores
    int altura[50] = {}; //cria a arrai altura de 50 posiçoes com um conjunto vazio de valores
    for (i = 0; i <= 49; i++) //cria o laço for de i=0 a i=49 
    {
        while (true) //cria o laço while que será executado enquanto o for for verdadeiro
        {
            cout << "insira o codigo de seu sexo" //exibe a mensagem
                 << "\n"; //quebra linha
            cout << "1 para masculino e 2 para feminino" //exibe a mensagem
                 << "\n"; //queba linha
            cin >> sexo[i]; //pede uma entrada para a array sexo na posição i
            if (sexo[i] <= 0 or sexo[i] > 2) //checa se o valor é menor ou igual a zero e menor que 2
            {
                cout << "insira o codigo 1 ou 2" //exibe a mensagem
                     << "\n"; //quebra linha
                cout << "\n"; //imprime ima linha vazia
                continue; //reenicia o loop
            }
            cout << "insira sua altura em centrimetros" //exibe a mensagem
                 << "\n"; //quebra linha
            cin >> altura[i]; //pede uma entrada para a array altura na posição i
            if (altura[i] <= 0) //checa se o valor é menor ou igual a zero
            {
                cout << "insira uma altura maior que zero" //exibe a mensagem
                     << "\n"; //quebra linha
                cout << "\n"; //imprime ima linha vazia
                continue; //reenicia o loop
            }
            if (sexo[i] == 1) //checa se o valor de sexo[i] é igual a 1
            {
                QuantHomens += 1; //soma 1 a QuantHomens
                alturaHomens += altura[i]; //dá a alturaHomens o valor de altura[i] a cada repetição
            }
            if (sexo[i] == 2) //checa se o valor de sexo[i] é igual a 2
            {
                QuantMulheres += 1; //soma 1 a QuantMulheres
                alturaMulheres += altura[i]; //dá a alturaMulheres o valor de altura[i] a cada repetição
            }
            if (altura[i] <= menorAltura) //checa se altura[i] é menor que menorAltura
            {
                menorAltura = altura[i]; //dá a menorAltura o valor de altura[i]
            }
            if (altura[i] >= maiorAltura) //checa se altura[i] é maior que maiorAltura
            {
                maiorAltura = altura[i]; //dá a menorAltura o valor de altura[i]
            }
            break; //quebra o laço
        }
    }
    mediaMulheres = alturaMulheres / QuantMulheres; //dá a mediaMulheres o valor da operação
    mediadaTurma = (alturaMulheres + alturaHomens) / (QuantMulheres + QuantHomens); //dá a mediaTurma o valor da operação
    cout << "\n"; //quebra linha
    cout << "Menor altura: " << menorAltura << "cm" //imprime o valor de menorAltura e as strings
         << "\n"; //quebra linha
    cout << "Maior altura: " << maiorAltura << "cm" //imprime o valor de maiorAltura e as strings
         << "\n"; //quebra linha
    cout << "Media das alturas das mulheres: " << mediaMulheres << "cm" //imprime o valor de mediaMulheres e as strings
         << "\n"; //quebra linha
    cout << "Media da altura da turma: " << mediadaTurma << "\n"; //imprime o valor de mediaTurma e as strings
    return 0; //encerra o programa
}