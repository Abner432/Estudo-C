#include "ocultarInfo.hpp"
#include <string>
using namespace std;

string ocultarInfo(string info)
{
    int i, j, tam = info.size();        //declara i,j e tam com valor do tamanho de info como int
    size_t achar = info.find("-");      //declara achar como o int com o valo da posição da string "-"
    string subs = "**";                 //declara subs como string com valor "**"
    string subst = "***";               //declara subst como string com valor "***"
    info.replace(achar + 1, 2, subs);   //troca 2 strings nas posições achar+1 pelo valor de subs
    info.replace(achar - 3, 3, subst);  //troca 3 strings nas posições achar-3 pelo valor de subst
    info.replace(achar - 11, 3, subst); //troca 3 strings nas posições achar-11 pelo valor de subst
    info.replace(achar + 4, 3, subst);  //troca 3 strings nas posições achar+4 pelo valor de subst
    for (i = achar + 4; i < tam; i++)   //laço de i=achar+4 até i<tam
    {
        if (info[i] == ' ') //confere se info na posição i é uma string vazia
        {
            for (j = (i + 1); j < tam; j++) //laço de j=i+1 até j<tam
            {
                info[j] = '*'; //dá a info[j] a string *
            }
        }
    }
    return info; //retorna info
}
