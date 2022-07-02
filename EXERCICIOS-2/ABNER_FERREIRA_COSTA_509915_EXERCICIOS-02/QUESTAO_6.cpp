#include <iostream>
#include <iomanip>
using namespace std;

int main(){
float peso,transformador;
int planeta;
cout <<"digite seu peso"<<"\n";
cin >> peso;
cout <<"digite um numero de 1 a 6 do planeta desejado para saber o peso"<<"\n";
cout <<"1 Mercurio, 2 Venus, 3 Marte, 4 Jupiter, 5 Saturno, 6 Urano"<<"\n";
cin >>planeta;
if(planeta>0 && planeta<7){
if (planeta>0 && planeta<2){
    transformador=(peso*37)/100;
    cout<<"seu peso em Mercurio: ";
    cout<<fixed<<setprecision(2)<<transformador<<"\n";
}
else if (planeta>1 && planeta<3){
    transformador=(peso*88)/100;
    cout<<"seu peso em Venus: ";
    cout<<fixed<<setprecision(2)<<transformador<<"\n";
}
else if (planeta>2 && planeta<4){
    transformador=(peso*38)/100;
    cout<<"seu peso em Marte: ";
    cout<<fixed<<setprecision(2)<<transformador<<"\n";
}
else if (planeta>3 && planeta<5){
    transformador=(peso*264)/100;
    cout<<"seu peso em Jupter: ";
    cout<<fixed<<setprecision(2)<<transformador<<"\n";
}
else if (planeta>4 && planeta<6){
    transformador=(peso*115)/100;
    cout<<"seu peso em Saturno: ";
    cout<<fixed<<setprecision(2)<<transformador<<"\n";
}
else {
    transformador=(peso*117)/100;
    cout<<"seu peso em Urano: ";
    cout<<fixed<<setprecision(2)<<transformador<<"\n";
}
}
else{
cout<<"sem planeta para o numero inserido"<<"\n";
}
return 0; //encerra o progama
}