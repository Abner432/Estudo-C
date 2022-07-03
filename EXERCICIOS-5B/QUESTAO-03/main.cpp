#include <iostream>

using namespace std;

int main()
{
    int med1 = 0, med2 = 0, med3 = 0, med4 = 0, med5 = 0;  //declara med1,2,3,4 e 5 como int com valor 0
    int med6 = 0, med7 = 0, med8 = 0, med9 = 0, med10 = 0; //declara med6,7,8,9 e 10 como int com valor 0
    int i, j, N = 10;                                      //declara i,j e N=10 como int
    float somaN[N] = {};                                   //declara somaN[N] como float
    float media[N];                                        //declara media[N] como float
    float nota, Notas[N][3];                               //declara nota e Notas[N][3] como float
    cout << "insira as notas"                              //exibe a mensagem
         << "\n";                                          //quebra linha
    for (i = 0; i < N; i++)                                //laço de i=0 até i<N
    {
        for (j = 0; j < 3; j++) //laço de j=0 até j<3
        {
            cout << "nota " << j + 1 << " do aluno " << i + 1 << ": "; //exibe a mensagem seguido dos valores de i e j
            cin >> nota;                                               //pede uma entrada para nota
            if (nota < 0 || nota > 10)                                 //confere as condições
            {
                cout << "\n";                    //quebra linha
                cout << "insira uma nota valida" //exibe a mensagem
                     << "\n";                    //quebra linha
                j--;                             //decrementa 1 de j
            }
            else //caso o if não seja atendido
            {
                Notas[i][j] = nota; //dá a Notas[i][j] o valor de nota
            }
        }
    }
    for (i = 0; i < N; i++) //laço de i=0 até i<N
    {
        for (j = 0; j < 3; j++) //laço de j=0 até j<3
        {
            somaN[i] += Notas[i][j]; //dá a somaN[i] o valor da operação descrita
        }
    }
    for (i = 0; i < N; i++) //laço de i=0 até i<N
    {
        media[i] = somaN[i] / N; //dá a media[i] o valor da operação descrita
    }
    cout << "\n";           //quebra linha
    for (i = 0; i < N; i++) //laço de i=0 até i<N
    {
        if (media[i] >= 0 && media[i] <= 1, 1) //confere as condições
        {
            med1 += 10; //dá a med1 o valor da operação descrita
        }
        if (media[i] <= 2, 2 && media[i] >= 1, 1) //confere as condições
        {
            med2 += 10; //dá a med2 o valor da operação descrita
        }
        if (media[i] <= 3, 3 && media[i] >= 2, 2) //confere as condições
        {
            med3 += 10; //dá a med3 o valor da operação descrita
        }
        if (media[i] <= 4, 4 && media[i] >= 3, 3) //confere as condições
        {
            med4 += 10; //dá a med4 o valor da operação descrita
        }
        if (media[i] <= 5, 5 && media[i] >= 4, 4) //confere as condições
        {
            med5 += 10; //dá a med5 o valor da operação descrita
        }
        if (media[i] <= 6, 6 && media[i] >= 5, 5) //confere as condições
        {
            med6 += 10; //dá a med6 o valor da operação descrita
        }
        if (media[i] <= 7, 7 && media[i] >= 6, 6) //confere as condições
        {
            med7 += 10; //dá a med7 o valor da operação descrita
        }
        if (media[i] <= 8, 8 && media[i] >= 7, 7) //confere as condições
        {
            med8 += 10; //dá a med8 o valor da operação descrita
        }
        if (media[i] <= 9, 9 && media[i] >= 8, 8) //confere as condições
        {
            med9 += 10; //dá a med9 o valor da operação descrita
        }
        if (media[i] <= 10 && media[i] >= 9, 9) //confere as condições
        {
            med10 += 10; //dá a med10 o valor da operação descrita
        }
    }
    cout << "1 porcentagem de media: ";
    cout << med1 << "\n"; //exibe a mensagem, o valor de med1 e quebra linha
    cout << "2 porcentagem de media: ";
    cout << med2 << "\n"; //exibe a mensagem, o valor de med2 e quebra linha
    cout << "3 porcentagem de media: ";
    cout << med3 << "\n"; //exibe a mensagem, o valor de med3 e quebra linha
    cout << "4 porcentagem de media: ";
    cout << med4 << "\n"; //exibe a mensagem, o valor de med4 e quebra linha
    cout << "5 porcentagem de media: ";
    cout << med5 << "\n"; //exibe a mensagem, o valor de med5 e quebra linha
    cout << "6 porcentagem de media: ";
    cout << med6 << "\n"; //exibe a mensagem, o valor de med6 e quebra linha
    cout << "7 porcentagem de media: ";
    cout << med7 << "\n"; //exibe a mensagem, o valor de med7 e quebra linha
    cout << "8 porcentagem de media: ";
    cout << med8 << "\n"; //exibe a mensagem, o valor de med8 e quebra linha
    cout << "9 porcentagem de media: ";
    cout << med9 << "\n"; //exibe a mensagem, o valor de med9 e quebra linha
    cout << "10 porcentagem de media: ";
    cout << med10 << "\n"; //exibe a mensagem, o valor de med10 e quebra linha
    return 0;              //retorna 0
}
//professor sei que as sáidas estão erradas, peço que se puder me envie um e-mail mostrando onde errei
//e considere a lógica desta queatão