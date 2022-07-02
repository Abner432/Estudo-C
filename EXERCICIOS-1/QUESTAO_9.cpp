#include <iostream> //inclui a biblioteca de entrada e saida.
#include <iomanip> //inclui a biblioteca de 
using namespace std; //usa o espaço de nome padrão do c++.

int main(){ //inicia o progama.
    long int cor; //declara a variavel cor como um inteiro de 32 bits.
    long int octA,octR,octG,octB; //declara as variaveis octA,R,G e B como um inteiros de 32 bits.
    long int movA,movR,movG,movB; //declara as variaveis movA,R,G e B como um inteiros de 32 bits.
    float A,R,G,B; //declara as variaveis A,R,G e B como um inteiros de 32 bits.
    cout <<"insira o sua cor em hexadecimal\n"; //exibe a mensagem escrita.
    cin>>hex>>cor; //pede a entrada de um valor em  hexadecimal.
    octA = cor&(255<<24); //faz um AND bit-a-bit com a mascara movida 24 casas e armazena em octA.
    octR = cor&(255<<16); //faz um AND bit-a-bit com a mascara movida 16 casas e armazena em octR.
    octG = cor&(255<<8); //faz um AND bit-a-bit com a mascara movida 8 casas e armazena em octG.
    octB = cor&(255); //faz um AND bit-a-bit com a mascara e armazena em octB.
    movA = octA>>24; //move o resultado de octA 24 casas para a direitae armazena em movA.
    movR = octR>>16; //move o resultado de octA 24 casas para a direitae armazena em movR.
    movG = octG>>8; //move o resultado de octA 24 casas para a direitae armazena em movG.
    movB = octB; //armazena octA o resultado em movB.
    //multiplica movA por 100 para transformalo em um numero percentual e divide por 255 pois ele é limite do octeto.
    A = ((movA*100)/255);
    //multiplica movR por 100 para transformalo em um numero percentual e divide por 255 pois ele é limite do octeto.
    R = ((movR*100)/255);
    //multiplica movG por 100 para transformalo em um numero percentual e divide por 255 pois ele é limite do octeto.
    G = ((movG*100)/255);
    //multiplica movB por 100 para transformalo em um numero percentual e divide por 255 pois ele é limite do octeto.
    B = ((movB*100)/255);
    cout<<"as porcentagens das cores\n"; //exibe a mensagem escrita.
    cout<<"porcentagem de A: "; //exibe a mensagem escrita.
    cout<<fixed<<setprecision(2)<<A<<"%\n"; //imprime o valor de A com precisão de duas casas decimais.
    cout<<"porcentagem de R: "; //exibe a mensagem escrita.
    cout<<fixed<<setprecision(2)<<R<<"%\n"; //imprime o valor de R com precisão de duas casas decimais.
    cout<<"porcentagem de G: "; //exibe a mensagem escrita.
    cout<<fixed<<setprecision(2)<<G<<"%\n"; //imprime o valor de G com precisão de duas casas decimais.
    cout<<"porcentagem de B: "; //exibe a mensagem escrita.
    cout<<fixed<<setprecision(2)<<B<<"%\n"; //imprime o valor de B com precisão de duas casas decimais.
    return 0; //encerra o progama e retorna o valor 0.
}