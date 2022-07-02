#include <iostream>
using namespace std;

int main(){
float a,b,c;
float ADab,ADac,ADcb;
float QuadA,QuadB,QuadC;
float AdQuadAC,AdQuadBC,AdQuadAB;
cout<<"digite o comprimento de lado A do triangulo"<<"\n";
cin >>a;
cout<<"digite o comprimento de lado B do triangulo"<<"\n";
cin >>b;
cout<<"digite o comprimento de lado C do triangulo"<<"\n";
cin >>c;

ADab = a+b;
ADac = a+c;
ADcb = b+c;
QuadA = a*a;
QuadB = b*b;
QuadC = c*c;
AdQuadAB = QuadA+QuadB;
AdQuadAC = QuadA+QuadC;
AdQuadBC = QuadB+QuadC;

if(ADab>c && ADac>b && ADcb>a){
cout<<"De fato um triangulo"<<"\n";    

if(a==b && a==c && c==b){
cout<<"triangulo equilatero"<<"\n";    
}
if(a==b or c==b or a==c){
cout<<"triangulo isoceles"<<"\n";
}
if(QuadA==AdQuadBC or QuadB==AdQuadAC or QuadC==AdQuadAB){
cout<<"triangulo retangulo"<<"\n";
}          
if(a!=b && a!=c && c!=b){
cout<<"triangulo escaleno"<<"\n";    
}
}
else {
cout<<"nao e um triangulo"<<"\n";
}
return 0; //encerra o progama
}