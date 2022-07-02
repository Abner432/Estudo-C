#include <iostream> //inclui a biblioteca padrão de entrada e saída
using namespace std; //usa os espaços de nomes incluidos

int main() //iicia o programa
{
    int numero; //cria a variavel numero do tipo int
    int uni, dez, cent, mil; //cria a variavel uni,dez,cent e mil do tipo int
    for (uni = 0; uni <= 9; uni++) //cria um laço de uni=0 a uni=9 somando 1 a cada repetição
    {
        for (dez = 0; dez <= 9; dez++) //cria um laço de dez=0 a dez=9 somando 1 a cada repetição
        {
            for (cent = 0; cent <= 9; cent++) //cria um laço de cent=0 a cent=9 somando 1 a cada repetição
            {
                for (mil = 0; mil <= 9; mil++) //cria um laço de mil=0 a mil=9 somando 1 a cada repetição
                {
                    if (uni != dez && uni != cent && uni != mil)
                        if (dez != cent && dez != mil)
                            if (cent != mil) //confere se todos os números são diferentes
                                if ((uni % 2) != 0) //confere se é impar
                                    if (mil == (dez * 3)) //confere se mil é iguala dez multiplicado por 3
                                        if ((mil + cent + dez + uni) == 27) //confere se a soma das variaveis é igual a 27
                                        {
                                            cout << "endereco procurado: "; //exibe a mensagem
                                            cout << mil << cent << dez << uni << "\n"; //imprime o valor de mil,cent,dez e uni
                                            break; //quebra o laço
                                        }
                }
            }
        }
    }
    return 0; //encerra o programa
}