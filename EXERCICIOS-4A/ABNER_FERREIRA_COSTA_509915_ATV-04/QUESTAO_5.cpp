#include <iostream> //inclui a biblioteca de entrada e saída
#include <vector> //incluia biblioteca de vector
using namespace std; //utiliza o espaço de nome padrão

void goldbach(unsigned long n, unsigned long &p1, unsigned long &p2); //prototipa a função goldbach

int main() //inicia a função principal
{
    unsigned long n; //declara n do tipo long sem sinal
    unsigned long p1=0; //declara p1 do tipo long sem sinal e zera seu valor
    unsigned long p2=0; //declara p2 do tipo long sem sinal e zera seu valor
    cout<<"insira o valor de um numero par maior que 4" //exibe a mensagem
        <<"\n"; //quebra linha
    cin>> n; //pede a entrada de um numero para n
    if(n>4 && n%2==0) //confere se o numero inserido é maior que 4 e par
    {
    goldbach( n , p1, p2 ); //chama a função goldbach
    cout<<"primo 1: "; //exibe a mensagem
    cout<<p1 //exibe o valor de p1
        <<"\n"; //quebra linha
    cout<<"primo 2: "; //exibe a mensagem
    cout<<p2 //exibe o valor de p2
        <<"\n"; //quebra linha
    }
    else //caso  if não seja atendido
    {
        cout<<"insira um numero maior que 4 e que seja par" //exbe a mensagem
            <<"\n"; //quebra linha
    }    
}
void goldbach(unsigned long n, unsigned long &p1, unsigned long &p2) //inicia função goldbach 
{
    vector<long> primo1; //declara o vector primo1 do tipo long
    vector<long> primo2; //declara o vector primo2 do tipo long
    int i,j; //declara i e j do tipo int
    int tam1,tam2; //declara tam1 e tam2 do tipo int
    int divisores; //declara divisores do tipo int
    for(divisores=2;divisores<=n;divisores++) //laço de divisores=2 até divisores<=n
    {
        if(n%divisores>0) //confere se o resto da divisão de n por divisores é maior que zero
        {
            primo1.push_back(divisores); //dá a primo1 os divisores em ordem crescente de posição
            primo2.push_back(divisores); //dá a primo2 os divisores em ordem crescente de posição
        }
    }
    primo1[0]=3; //dá 3 a primeira posição de primo1
    primo2[0]=3; //dá 3 a primeira posição de primo2
    tam1=primo1.size(); //dá a tam1 o tamanho do vector primo1
    tam2=primo2.size(); //dá a tam2 o tamanho do vector primo2
    for(i=0;i<tam1;i++) //laço de i=0 até i<tam1
    {
        for(j=0;j<tam2;j++) //laço de j=0 até j<tam2
        {
            //confere se primo1 mais primo2 nas posições i e j respectivamente dá gual a n
            if(primo1[i]+primo2[j]==n) 
            {
                p1=primo1[i]; //dá a p1 o valor de primo1 na posição i
                p2=primo2[j]; //dá a p2 o valor de primoj na posição j
            }
        }
    }
}