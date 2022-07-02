#include <iostream> //inclui a biblioteca pardrão de input e output.
#include <bitset> //inclui a biblioteca padrão de transformação pra binaro.
using namespace std;

int main(){
    int num; //cria a variavel num e declara como um número inteiro.
    int num2; //cria a variavel num e declara como um número inteiro.
for (num=0;num<=15;num++){ //cria o laço de repetição, lê o valor de num e soma a ele 1, parando em 15.
cout << "0 a 15 em decimal"; //exibe a mensagem escrita.
cout << dec << num << endl; //imprime os valores de num na base decimal.
}
for (num=0;num<=15;num++){ //cria o laço de repetição, lê o valor de num e soma a ele 1, parando em 15.
cout << "0 a 15 em octal"; //exibe a mensagem escrita.
cout << oct << num << endl; //imprime os valores de num na base octal.
}
for (num=0;num<=15;num++){ //cria o laço de repetição, lê o valor de num e soma a ele 1, parando em 15.
cout << "0 a 15 em hexadecimal"; //exibe a mensagem escrita.
cout << hex << num << endl; //imprime os valores de num na base hexadecimal.
}
for (num2=0;num2<=15;num2++){ //cria o laço de repetição, lê o valor de num e soma a ele 1, parando em 15.
bitset<4>bynari(num2); //define a quantidade de bits e transforma num2 em números binarios.
cout << "0 a 15 em binario com 4 casa"; //exibe a mensagem escrita.
cout << bynari << endl; //imprime os valores de num na base binaria.
}
return 0; //retorna o valor 0.
}