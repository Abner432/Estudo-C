#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
float X1,Y1,X2,Y2,X3,Y3;
float Dab,Dbc,Dac;
float A,B,C;
float Area,s;
cout << "insira o x da primeira coordenada"<<"\n";
cin >> X1;
cout << "insira o y da primeira coordenada"<<"\n";
cin >> Y1;
cout << "insira o x da segunda coordenada"<<"\n";
cin >> X2;
cout << "insira o y da segunda coordenada"<<"\n";
cin >> Y2;
cout << "insira o x da terceira coordenada"<<"\n";
cin >> X3;
cout << "insira o y da terceira coordenada"<<"\n";
cin >> Y3;
if((X1,Y1)!=(X2,Y2) && (X2,Y2)!=(X3,Y3) && (X1,Y1)!=(X3,Y3)){
Dab = sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));
Dbc = sqrt(pow((X3-X2),2)+pow((Y3-Y2),2));
Dac = sqrt(pow((X3-X1),2)+pow((Y3-Y1),2));
if(Dbc+Dac>Dab && Dac+Dab>Dbc && Dbc+Dab>Dac){
A = Dab;
B = Dbc;
C = Dac;
}
s = A+B+C/2;
Area = sqrt(s*(s-A)*s*(s-B)*s*(s-C));
cout <<"area do triangulo: "<<fixed<<setprecision(2)<<Area<<"\n";
}
else{
    cout<<"as coordenadas nao formam um triangulo"<<"\n";
}  
return 0; //encerra o progama
}