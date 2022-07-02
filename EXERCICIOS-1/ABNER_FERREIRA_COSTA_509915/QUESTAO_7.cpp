#include <iostream>  // inclui a biblioteca padrão de entrada e saida.
using namespace std; // usa os espaços de nomes padrão do C++.

int main (){
    short num; //cria a variavel num e a declara como um inteiro curto.
    cout << "digite um numero inteiro\n"; //exibe a mensagem escrita.
    cin >> num; //pede a entrada de um valor para num.
    cout << ((num&(1<<15))>>15); //Lê o valor de um unico bit de num da 16 Scasa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<14))>>14); //Lê o valor de um unico bit de num da 15 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<13))>>13); //Lê o valor de um unico bit de num da 14 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<12))>>12); //Lê o valor de um unico bit de num da 13 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<11))>>11); //Lê o valor de um unico bit de num da 12 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<10))>>10); //Lê o valor de um unico bit de num da 11 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<9))>>9); //Lê o valor de um unico bit de num da 10 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<8))>>8); //Lê o valor de um unico bit de num da 9 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<7))>>7); //Lê o valor de um unico bit de num da 8 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<6))>>6); //Lê o valor de um unico bit de num da 7 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<5))>>5); //Lê o valor de um unico bit de num da 6 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<4))>>4); //Lê o valor de um unico bit de num da 5 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<3))>>3); //Lê o valor de um unico bit de num da 4 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<2))>>2); //Lê o valor de um unico bit de num da 3 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<1))>>1); //Lê o valor de um unico bit de num da 2 casa binaria move de para o inicio faz um AND bit-a-bit como propio num e imprime o resultado.
    cout << ((num&(1<<0))>>0) << "\n"; //Lê o valor de um unico bit de num da 1 casa binaria faz um AND bit-a-bit como propio num e imprime o resultado.
    return 0; //retorna 0;
}