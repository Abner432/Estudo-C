#include <iostream>  // inclui a biblioteca padrão de entrada e saida.
#include <cmath>     // inclui a biblioteca padrão matemática.
using namespace std; // usa os espaços de nomes padrão do C++.

int main(){ // cria a função principal main.
float V; //cria a variavel real V que repesenta volume.
float h; //cria a variavel real h que repesenta altura.
float R; //cria a variavel real R que repesenta raio da base.
float r; //cria a variavel real r que repesenta raio do topo.
cout << "insura o raio da base\n"; //exibe a mensagem escrita.
cin >> R; //armazena o número digitado pelo usiario em R.
cout << "insura o raio do topo\n"; //exibe a mensagem escrita.
cin >> r; //armazena o número digitado pelo usiario em r.
cout << "insura a altura\n"; //exibe a mensagem escrita.
cin >> h; //armazena o número digitado pelo usiario em h.
if (R>0){ //verifica se o valor de R é maior que zero.
    if (r>0){ //verifica se o valor de r é maior que zero.
        if (h>0){ //verifica se o valor de h é maior que zero.
    cout << "Resultado existente."; //confirmados os parâmetros a mesnagem é exibida. 
    V = ((h*M_PI)/3)*(pow(R,2)+R*r+pow(r,2)); //a variavel V é definida como resultado dessa operação.
    cout << "Volume do cone com topo cortado: "<<V<<endl; //depois de calculada a operação o resultado de V é xibido precedido da mensagem escrita.
        }
        else //se os parâmetros não forem atendidos o código pula para cá.
        cout <<"resultado inexistente\n"; //a mensagem é exibida no caso d em que os parâmetros não forem atendidos.
    }
    else //se os parâmetros não forem atendidos o código pula para cá.
    cout <<"resultado inexistente\n"; //a mensagem é exibida no caso d em que os parâmetros não forem atendidos.
} 
else //se os parâmetros não forem atendidos o código pula para cá.
cout <<"resultado inexistente\n"; //a mensagem é exibida no caso d em que os parâmetros não forem atendidos. 
return 0; //retorna o valor 0.
}