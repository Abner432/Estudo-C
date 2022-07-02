#include <iostream> //inclui a biblioteca padrão de entrada e saida 
#include <cmath> //inclui a biblioteca matemática
#include <iomanip> //inclu a biblioteca de manipulação de entrada e saida
using namespace std; //usa o espaço de nomes padrão

int main(){ //inicia o progama
float h,r,V,A; //declara h,r,V e A como decimais
float chequeH,chequeR; //declara chequeH e chequeR como decimais
cout << "insira o raio do cone"<<"\n"; //exibe a mensagem escrita
cin >> chequeR; //armazena o valor inserido em chequeR
cout <<"insira a altura do cone"<<"\n"; //exibe a mensagem escrita
cin >> chequeH; //armazena o valor inserido em chequeH
if (chequeR>0 && chequeH>0){ //checa se os valores inseridos são maiores que 0 
r = chequeR; //da a r  valor de chequeR
h = chequeH; //da a h  valor de chequeH
   
V = (M_PI*pow(r,2)*h)/3; //calcula a espresão e da o resultado para V
cout <<"volume do cone: "<<fixed<<setprecision(2)<<V<<"\n"; //exibe a mensagem escrita junto como volume com a precisão de duas casas decimais
A = M_PI*r*(r+sqrt(pow(r,2)+pow(h,2))); //calcula a espresão e da o resultado para A
cout <<"area do cone: "<<fixed<<setprecision(2)<<A<<"\n"; //exibe a mensagem escrita junto coma área do cone com precisão de duas casas decimais
}
else{ //caso o resultado seja false o progama pula para cá
cout<<"altura ou raio menor que zero insira valores maiores"<<"\n"; //exibe a mensagem escrita   
}
return 0; //encerra o progama
}