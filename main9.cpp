#include <iostream>

using namespace std;

float valorDolar(float valor, float taxa)
{
    float conversao = valor * taxa;

    return (conversao);
}

int main()
{

    float valor, taxa, conversao;
    cout<<"Digite o valor para a sua conversao"<<endl;
    cin >> valor;
    cout<<"Digite o valor da sua taxa"<<endl;
    cin >> taxa;
    
    conversao = valorDolar(valor, taxa);
    
    cout<<"O valor da sua conversão é: ";
    cout << conversao << endl;
    return 0;
}