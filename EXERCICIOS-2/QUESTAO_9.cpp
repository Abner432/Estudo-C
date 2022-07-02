#include <iostream>
using namespace std;

int main(){
unsigned int a,b,c;
cout<<"digite seu numero para A"<<"\n";
cin>>a;
cout<<"digite seu numero para B"<<"\n";
cin>>b;
cout<<"digite seu numero para C"<<"\n";
cin>>c;
if(a>0 && b>0 && c>0){
if(a>b && b>c){
cout<<"Os valores em ordem crescente sao"<<"\n";    
cout<<"A: "<<a<<"B: "<<b<<"C: "<<c<<"\n";    
}
if(a>c && c>b){
cout<<"Os valores em ordem crescente sao"<<"\n"; 
cout<<"A: "<<a<<"B: "<<b<<"C: "<<c<<"\n";    
}
if(b>a && a>c){
cout<<"Os valores em ordem crescente sao"<<"\n"; 
cout<<"B: "<<b<<"A: "<<a<<"C: "<<c<<"\n";    
}
if(b>c && c>a){
cout<<"Os valores em ordem crescente sao"<<"\n"; 
cout<<"B: "<<b<<"C: "<<c<<"A: "<<a<<"\n";    
}
if(c>a && a>b){
cout<<"Os valores em ordem crescente sao"<<"\n"; 
cout<<"C: "<<c<<"A: "<<a<<"B: "<<b<<"\n";    
}
if(c>b && b>a){
cout<<"Os valores em ordem crescente sao"<<"\n"; 
cout<<"C: "<<c<<"B: "<<b<<"A: "<<a<<"\n";    
}
}
else{
cout<<"valores muito pequenos insira valores maiores"<<"\n";    
}
return 0; //encerra o progama    
}