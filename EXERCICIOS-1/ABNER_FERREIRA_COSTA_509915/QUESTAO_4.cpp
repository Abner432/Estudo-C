#include <iostream>  // inclui a biblioteca padrão de entrada e saida.
using namespace std; // usa os espaços de nomes padrão do C++.

int main(){ //cria a função principal main.
unsigned int Seg; //cria a variavel Seg e define como um número inteiro positivo.
unsigned int Min; //cria a variavel Min e define como um número inteiro positivo.
unsigned int Hor; //cria a variavel Hor e define como um número inteiro positivo.
unsigned int Tempo; //cria a variavel Tempo e define como um número inteiro positivo.
unsigned int RestHor; //cria a variavel RestHor e define como um número inteiro positivo.
cout <<"insira seu tempo em segundos"<<"\n";
cin >> Tempo; //pede a inserção de um número e guarda na variavel tempo.
Hor = Tempo/3600; //define a variavel Hor como o resultado da divisão.
RestHor = Tempo%3600; //define a variavel RestHor como o resto da divisão anterior.
Min = RestHor/60; //define a variavel Min como o resultado da divisão.
Seg = RestHor%60; //define a variavel Seg como o resto da divisão anterior.
cout<<"seu tempo transformado"<<"\n";
cout << Hor << "h:" << Min << "min:" << Seg << "seg."; //imprime o valor de Hor, Min e Seg e suas strigs.
return 0; //retorna o valor 0.
}