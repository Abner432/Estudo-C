#include <iostream>
using namespace std;

int main(){
int biscoitos,caixa,containers;
int restBisc,restCaixa;
cout<<"insira o numero de biscoitos"<<"\n";
cin>>biscoitos;
caixa = biscoitos/24;
restBisc = biscoitos%24;
cout<<"numero de caixas de biscoitos: "<<caixa<<"\n";
if(restBisc>0 && restBisc<24){
    cout<<"biscoitos descartados: "<<restBisc<<"\n";
}

containers = caixa/75;
restCaixa = caixa%75;
cout<<"numero de containers: "<<containers<<"\n";
if(restCaixa>0 && restCaixa<75){
    cout<<"caixas descartadas: "<<restCaixa<<"\n";
}
return 0; //encerra o progama
}