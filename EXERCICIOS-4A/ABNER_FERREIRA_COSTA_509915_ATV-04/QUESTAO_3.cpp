#include <iostream> //inclui a biblioteca de entrada e saída
#include <vector> //inclui a biblioteca de vector
using namespace std; //usa o espaço de nome padrão

bool comprime (int A, int B); //prototipa a função comprime do tipo bool

int main() //inicia a função principal
{
    int A, B; //declara A e B do tipo int
    cout << "insira o valor do primeiro numero" //exibe a mensagem
         << "\n"; //quebra linha
    cin >> A; //pede a entada de um valor para A
    cout << "insira o valor do segundo numero" //exibe a mensagem
         << "\n"; //quebra linha
    cin >> B; //pede a entrada de um valor para B
    comprime(A, B); //chama a função comprime
    bool retorno = comprime(A, B); //declara retorno do tipo bool e dá a ela o valor de comprime
    if (retorno == true) //checa se retorno é veradeiro
    {
        cout << "sao primos entre si" //exibe a mensagem
             << "\n"; //quebra a linha
    }
    else //caso o if não seja atendido
    {
        cout << "nao sao primos entre si" //exibe a mensagem
             << "\n"; //quebra linha
    }
}
bool comprime(int A, int B) //inicia a função comprime do tipo bool
{
    int i, j; //declara i e j do tipo int
    int k = 0, l = 0; //declara k e l do tipo int e zera seus valores
    int numA = 1, numB = 1; //delara numA e numB dando e elas o valor 1
    int divisoresemcomum = 0; //declara divisoresemcomum e zera seu valor 
    vector<int> divisoresA; //declara o vector devidoresA do tipo int
    vector<int> divisoresB; //declara o vector debidoresB do tipo int
    for (i = 0; i <= A; i++) //laço de i=0 até i<=A 
    {
        if (A % numA == 0) //confere se a divisão de A por numA é exata
        {
            divisoresA.push_back(numA); //dá a divisoresA o valor numA em ordem crescente
            k++; //dá 1 a k a cada vez que o if for atendido
        }
        numA++; //dá 1 a numA a cada rodada
    }
    for (j = 0; j <= B; j++) //laço de j=0 até j<=B
    {
        if (B % numB == 0) //confere se a divsão de B por numB é exata
        {
            divisoresB.push_back(numB); //dá a divisoresB o valor de numB em ordem crescente
            l++; //dá l a l a cada vez qie o if for atendido
        }
        numB++; //dá 1 a numB a cada rodada
    }
    for (i = 0; i <= k; i++) //for de i=0 até i<=k
    {
        for (j = 0; j <= l; j++) //for de i=0 até i<=l
        {
            if (divisoresA[i] == divisoresB[j]) //confere se os divisores são  iguais
            {
                divisoresemcomum++; //soma 1 a cada vez que o if for atendido
            }
        }
    }
    if (divisoresemcomum == 1) //confere se só ha 1 divisoe em comum
    {
        return true; //retorna verdadeiro
    }
    else if (divisoresemcomum > 1) //confere se há mais de 1 dividor em comum
    {
        return false; //retorna falso
    }
}