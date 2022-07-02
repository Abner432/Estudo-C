#include <iostream>
using namespace std;

int main(){
unsigned int idade;
cout << "insira sua idade" << "\n";
cin >> idade;
if(idade<11){
    cout<<"valor do plano: 30,00 R$"<<"\n";
}
else if (11<idade,idade<30){
    cout<<"valor do plano: 60,00 R$"<<"\n";
}
else if (29<idade,idade<46){
    cout<<"valor do plano: 120,00 R$"<<"\n";
}
else if (44<idade,idade<60){
    cout<<"valor do plano: 150,00 R$"<<"\n";
}
else if (59<idade,idade<66){
    cout<<"valor do plano: 250,00 R$"<<"\n";
}
else {
    cout<<"valor do plano: 400,00 R$"<<"\n";
}
return 0; //encerra o progama
}