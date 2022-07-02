#include <iostream> //inclui a biblioteca padrão de entrada e saida 
using namespace std; //usa o espaço de nomes padrão

int main(){ //inicia o progama
unsigned int numero;
unsigned int RestCent,RestDez,RestUni,RestSubUni;
unsigned int Centena,Dezena,Unidade,SubUnidade;
unsigned int TransfSubUni,TransfDez,TransfCent,TransfUni;
unsigned int palindromo;
cout<<"insira um numero entre 1 e 9999"<<"\n"; //exibe a mensagem escrita 
cin>>numero; //armazena o valor inserido em numero
if(numero>0){ //confere se numero é maior que 0
if(numero<=9999 && numero>=1000){ //confere se numero está na casa dos milhares
Centena = numero/10; //dvide numero tranformando pra centena, dezena e unidade para depois confirir se é palindromo
RestCent = numero%10;
Dezena = Centena/10; 
RestDez = Centena%10;
Unidade = Dezena/10;
RestUni = Dezena%10;
SubUnidade = Unidade/10;
RestSubUni = Unidade%10;
TransfSubUni = RestSubUni*1000;
TransfUni = RestUni*100;
TransfDez = RestDez*10;
palindromo = TransfSubUni+TransfUni+TransfDez+RestCent;
if(palindromo==numero){ //confere se é palindromo
cout<<"e um palindromo"<<"\n"; //exibe a mensagem escrita    
}
else{ //caso não seja pula para cá
cout<<"nao e um palindromo"<<"\n"; //exibe a mensagem escrita    
}
}
if(numero<=999 && numero>=100){ //confere se numero está na casa das centenas
Dezena = numero/10; //dvide numero tranformando dezena e unidade para depois confirir se é palindromo
RestDez = numero%10;
Unidade = Dezena/10;
RestUni = Dezena%10;
SubUnidade = Unidade/10;
RestSubUni = Unidade%10;
TransfSubUni = RestSubUni*100;
TransfUni = RestUni*10;
palindromo = TransfSubUni+TransfUni+RestDez;
if(palindromo==numero){ //confere se é palindromo
cout<<"e um palindromo"<<"\n"; //exibe a mensagem escrita     
}
else{ //caso não seja pula para cá
cout<<"nao e um palindromo"<<"\n"; //exibe a mensagem escrita     
}  
}
if(numero<=99 && numero>=10){ //confere se nuero está na casa das dezenas
Unidade = numero/10; //dvide numero tranformando pra unidade para depois confirir se é palindromo
RestUni = numero%10;
SubUnidade = Unidade/10;
RestSubUni = Unidade%10;
TransfSubUni = RestSubUni*10;
palindromo = TransfSubUni+RestUni;
if(palindromo==numero){ //confere se é palindromo
cout<<"e um palindromo"<<"\n"; //exibe a mensagem escrita    
}
else{ //caso não seja pula para cá
cout<<"nao e um palindromo"<<"\n"; //exibe a mensagem escrita     
}
}
if(numero<9){ //checa se é um núero unitario
cout<<"numero unitario"<<"\n"; //exibe a mensagem escrita    
}
}
else{ //caso os resultados sejam falsos o progama pula para cá
cout<<"insira um numero maior"<<"\n"; //exibe a mensagem escrita    
}
return 0; //encerra o progama    
}