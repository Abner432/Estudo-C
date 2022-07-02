#include <iostream> //usa a biblioteca de entrada e saída
#include <iomanip> //inclui a biblioteca de manipulação de entrada e saída
#include <vector> //inclui a biblioteca de vector
using namespace std; //usa os espaços ne nome padrão

void fatoriais(int n, float &s); //prototipa a função fatoriais

int main() //inicia a função principal
{
    int n; //declara n do tipo int
    float s = 0; //declara s di tipo float e zera seu valor
    cout << "insira o numero de parcelas fatoriais entre 1 e 6" //exibe a mensagem
         << "\n"; //quebra linha
    cin >> n; //pede a entrada para n
    if (n > 0 && n < 7) //confere se n atende ao que foi pedido
    {
        fatoriais(n, s); //chama a função 
        //exibe a mensagem e n com duas casas decimais
        cout << "a soma das " << n << " parcelas de fatoriais da: "
             << fixed << setprecision(2) << s
             << "\n"; //quebra decimal
    }
}
void fatoriais(int n, float &s) //inicia a função fatoriais
{
    vector<float> dividendo; //declara o vector dividendo do tipo float
    vector<float> divisor; //declara o vector divisor do tipo float
    int tam1, tam2; //declara tam1 e tam2 d tipo int
    int i, j, k; //declara i,j e k do tipo int
    float fat1; //declara fat1 do tipo float
    float fat2; //declara fat2 do tipo float
    for (n; n <= 1; n - 2) //laço de n até n<=1 decrescendo 2 
    {
        fat1 = 1; //dá a fat1 o valor 1
        fat2 = 1; //dá a fat2 o valor 1
        k = n + 1; //dá a k o valor de n+1
        for (i = n; i <= 1; i--) //laço de i=n até i<=1 descrescendo
        {
            fat1 *= i; //dá a fat1 o valor da operação descrita
            dividendo.push_back(fat1); //adiciona ao vector dividendo o valor de fat1
        }
        for (j = k; j <= 1; j--) //laço de j=k até j<=1 descrescendo
        {
            fat2 *= j; //dá a fat2 o valor de operação descrita
            divisor.push_back(fat2); //adiciona ao vector divisor o valor de fat2
        }
    }
    tam1 = dividendo.size(); //dá a tam1 o tamanho de dividendo
    tam2 = divisor.size(); //dá a tam2 o tamanho de divisor
    for (i = 0; i < tam1; i++) //laço de i=0 até i<tam1
    {
        for (j = 0; j < tam2; j++) //laço de j=0 até j<tam2 
        {
            s += (dividendo[i] / divisor[j]); //dá a s o valor da operação descrita
        }
    }
}