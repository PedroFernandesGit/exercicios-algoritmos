#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    const double PI = 3.14159;
    float raio, res;

    cout<<"Calcular a área de um cirulo"<<endl;

    cout<<"Digite o raio do circulo: "<<endl;
    cin>>raio;

    res = PI * pow(raio,2);

    cout<<fixed<<setprecision(2);

    cout<<"A área do circulo é: "<<res<<endl;
    return 0;
}