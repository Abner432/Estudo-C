#include <iostream>  // inclui a biblioteca padrão de entrada e saida.
using namespace std; // usa os espaços de nomes padrão do C++.

int main(){ //cria a função principal main.
unsigned int Valor; //cria a variavel Cem e define como um número inteiro positivo.
unsigned int Cem; //cria a variavel Cem e define como um número inteiro positivo.
unsigned int Cinq; //cria a variavel Cinq e define como um número inteiro positivo.
unsigned int Vinte; //cria a variavel Vinte e define como um número inteiro positivo.
unsigned int Dez; //cria a variavel Dez e define como um número inteiro positivo.
unsigned int Cinco; //cria a variavel Cinco e define como um número inteiro positivo.
unsigned int Dois; //cria a variavel Dois e define como um número inteiro positivo.
unsigned int Um; //cria a variavel Um e define como um número inteiro positivo.
unsigned int RestCem; //cria a variavel RestCem e define como um número inteiro positivo.
unsigned int RestCinq; //cria a variavel RestCinq e define como um número inteiro positivo.
unsigned int RestVinte; //cria a variavel RestVinte e define como um número inteiro positivo.
unsigned int RestDez; //cria a variavel RestDez e define como um número inteiro positivo.
unsigned int RestCinco; //cria a variavel RestCinco e define como um número inteiro positivo.
cout <<"insira o valor"<<"\n";
cin >> Valor; //pede a entrada de um número que será armazenado em Valor.   
Cem = Valor/100; //dá a Cem o valor correspondente a divisão.
RestCem = Valor%100; //dá a RestCem o valor que sobra da divisão a cima.
Cinq = RestCem/50; //dá a Cinq o valor correspondente a divisão entre RestCem por 50.
RestCinq = RestCem%50; //dá a RestCinq o valor que sobra da segunda divisão.
Vinte = RestCinq/20; //dá a Vinte o valor correspondente a divisão RestCinq por 20.
RestVinte = RestCinq%20; //dá a RestVinte o valor que sobra da terceira divisão.
Dez = RestVinte/10; //dá a Dez o valor correspondente a divisão RestVinte por 10.
RestDez = RestVinte%10; //dá a RestDez o valor que sobra da quarta divisão.
Cinco = RestDez/5; //dá a Cinco o valor correspondente a divisão.
RestCinco = RestDez%5; //dá a RestCinco o valor que sobra da quinta divisão.
Dois = RestCinco/2; //dá a Dois o valor correspondente a divisão.
Um = RestCinco%2; //dá a Um o valor que sobra da sexta divisão.
cout <<"seu valor em quantidade de notas"<<"\n";
cout <<Cem<<"x100+"<<Cinq<<"x50+"<<Vinte<<"x20+"<<Dez<<"x10+"<<Dois<<"x2+"<<Um<<"x1\n"; //imprime o valor de Cem,Cinq,Vinte,Dez,Dois,Um e as strigs que os sucedem.
return 0; //retorna o valor 0.
}