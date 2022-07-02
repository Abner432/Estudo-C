#include <iostream>  // inclui a biblioteca padrão de entrada e saida.
using namespace std; // usa os espaços de nomes padrão do C++.

int main (){ 
    unsigned int oct1,oct2,oct3,oct4; //declara oct1, oct2, oct3 e oct4 como inteiros positivos.
    cout<<"escreva seu host separadamente por octeto"<<"\n"; //exibe a mensagem escrita.
    cout<<"hosts nao podem ter valor maior a 255 em seus octetos"<<"\n"; //exibe a mensagem escrita.
    cin>>oct1; //pede a entrada de um valor para oct1.
    cin>>oct2; //pede a entrada de um valor para oct2.
    cin>>oct3; //pede a entrada de um valor para oct3.
    cin>>oct4; //pede a entrada de um valor para oct4.
    unsigned int resoct1,resoct2,resoct3,resoct4; //declara resoct1, resoct2, resoct3 e resoct4 como inteiros positivos.
    if (oct1<=255){ //confere se as exegincias foram atendidas para oct1.
        resoct1=oct1; //caso as exigencias tenham sido atendidas guarda o valor de oct1 em resoct1.
    }
    if (oct2<=255){ //confere se as exegincias foram atendidas para oct2.
        resoct2=oct2; //caso as exigencias tenham sido atendidas guarda o valor de oct2 em resoct2.
    }
    if (oct3<=255){ //confere se as exegincias foram atendidas para oct3.
        resoct3=oct3; //caso as exigencias tenham sido atendidas guarda o valor de oct3 em resoct3.
    }
    if (oct4<=255){ //confere se as exegincias foram atendidas para oct4.
        resoct4=oct4; //caso as exigencias tenham sido atendidas guarda o valor de oct4 em resoct4.
    }
    unsigned int movo1,movo2,movo3,movo4; //declara movo1, movo2, movo3 e movo4 como inteiros positivos.
    movo1 = (resoct1<<24); //move os bits de resoct1 24 casas para a esquerda e garda o resultado em movo1. 
    movo2 = (resoct2<<16); //move os bits de resoct1 16 casas para a esquerda e garda o resultado em movo2.
    movo3 = (resoct3<<8); //move os bits de resoct1 8 casas para a esquerda e garda o resultado em movo3.
    movo4 = resoct4; //dá a movom4 o valor de resoct4.
    unsigned int host; //declara host como inteiros positivos.
    host = (movo1|movo2|movo3|movo4); //faz um OU bit-a-bit com movo1,2,3 e 4 e armazena o resultado em host.
    unsigned int masc1,masc2,masc3,masc4; //declara masc1, masc2, masc3 e masc4 como inteiros positivos.
    cout<<"escreva sua mascara separadamente por octeto"<<"\n"; //exibe a mensagem escrita.
    cout<<"mascaras nao podem ter valor maior a 255 em seus octetos"<<"\n"; //exibe a mensagem escrita.
    cin>>masc1; //pede a entrada de um valor para masc1.
    cin>>masc2; //pede a entrada de um valor para masc2.
    cin>>masc3; //pede a entrada de um valor para masc3.
    cin>>masc4; //pede a entrada de um valor para masc4.
    unsigned int resmasc1,resmasc2,resmasc3,resmasc4; //declara resmasc1, resmasc2, resmasc3 e resmasc4 como inteiros positivos.
    if (masc1<=255){ //confere se as exegincias foram atendidas para masc1.
        resmasc1=masc1; //caso as exigencias tenham sido atendidas guarda o valor de masc1 em resomasc1.
    }
    if (masc2<=255){ //confere se as exegincias foram atendidas para masc2.
        resmasc2=masc2; //caso as exigencias tenham sido atendidas guarda o valor de masc2 em resomasc2.
    }
    if (masc3<=255){ //confere se as exegincias foram atendidas para masc3.
        resmasc3=masc3; //caso as exigencias tenham sido atendidas guarda o valor de masc3 em resomasc3.
    }
    if (masc4<=255){ //confere se as exegincias foram atendidas para masc4.
        resmasc4=masc4; //caso as exigencias tenham sido atendidas guarda o valor de masc4 em resomasc4.
    }
    unsigned int movm1,movm2,movm3,movm4; //declara movm1, movm2, movm3 e movm4 como inteiros positivos.
    movm1 = resmasc1<<24; //move os bits de resmasc1 24 casas para a esquerda e garda o resultado em movo1.
    movm2 = resmasc2<<16; //move os bits de resmasc2 16 casas para a esquerda e garda o resultado em movm2.
    movm3 = resmasc3<<8; //move os bits de resmasc3 8 casas para a esquerda e garda o resultado em movm3.
    movm4 = resmasc4; //dá a movm4 o valor de resmasc4.
    unsigned int mascara; //declara mascara como inteiros positivos.
    mascara = (movm1|movm2|movm3|movm4); //faz um OU bit-a-bit com movm1,2,3 e 4 e armazena o resultado em mascara.
    unsigned int endereco; //declara endereco como inteiros positivos.
    endereco = (host&mascara); //faz um AND bit-a-bit com host e mascara e armazena o resultado em endereco.
    unsigned int endereco1,endereco2,endereco3,endereco4; //declara endereco1,endereco2,endereco3 e endereco4 como inteiros positivos.
    endereco1 = endereco&(255<<24); //faz um AND bit-a-bit com endereco e 255 com seus bits movidos 24 vezes para a esquerda e armazena o resultado em endereco1.
    endereco2 = endereco&(255<<16); //faz um AND bit-a-bit com endereco e 255 com seus bits movidos 16 vezes para a esquerda e armazena o resultado em endereco2.
    endereco3 = endereco&(255<<8); //faz um AND bit-a-bit com endereco e 255 com seus bits movidos 8 vezes para a esquerda e armazena o resultado em endereco3.
    endereco4 = endereco&(255); //faz um AND bit-a-bit com endereco e 255 e armazena o resultado em endereco4.
    unsigned int w,x,y,z; //declara w, x, y e z como inteiros positivos.
    w = (endereco1 >> 24); //dá a w o valor de endereco1 com seus bits movidos para atender as exigências iniciasis.
    x = (endereco2 >> 16); //dá a x o valor de endereco2 com seus bits movidos para atender as exigências iniciasis.
    y = (endereco3 >> 8); //dá a y o valor de endereco3 com seus bits movidos para atender as exigências iniciais.
    z = endereco4; //dá a z o valor de endereco4.
    cout<<"seu endereco final"<<"\n"; //exibe a mensagem escrita.
    cout<<w<<"."<<x<<"."<<y<<"."<<z<<"\n"; //imprime os valores de w,x,y e z respectivamente.
    return 0; //retorna o valor 0.
}