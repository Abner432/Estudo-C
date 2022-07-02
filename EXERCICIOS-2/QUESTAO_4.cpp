#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

int x,y;
int a,b,c,d,e,f;

cout<<"escreva o valor de a"<<"\n";
cin >> a;   
cout<<"escreva o valor de b"<<"\n";
cin >> b;  
cout<<"escreva o valor de c"<<"\n";
cin >> c;  
cout<<"escreva o valor de d"<<"\n";
cin >> d;  
cout<<"escreva o valor de e"<<"\n";
cin >> e;  
cout<<"escreva o valor de f"<<"\n";
cin >> f;

x = ((c*e)-(b*f))/((a*e)-(b*d));
y = ((a*f)-(c*d))/((a*e)-(b*d));

cout<<"valor de x: "<<fixed<<setprecision(2)<<x<<"\n";
cout<<"valor de y: "<<fixed<<setprecision(2)<<y<<"\n";

return 0; //encerra o progama    
}