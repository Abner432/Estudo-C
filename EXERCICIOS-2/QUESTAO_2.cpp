#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
float V,A,a,chequea;
cout <<"insira a aresta da piramide"<<"\n";
cin >> chequea;
if (chequea>0){
a = chequea;
V = ((pow(a,2)*sqrt(3)/4)*(a*sqrt(6)/3))/3;
cout << "volume da piramide: "<<fixed<<setprecision(2)<<V<<"\n";
A = pow(a,2)*sqrt(3);
cout << "area da piramide: "<<fixed<<setprecision(2)<<A<<"\n";
}
else{
cout<<"aresta invalida, insira um valor maior"<<"\n";
}
return 0; //encerra o progama
}