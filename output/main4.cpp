#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout<<"Transformando Celsius para Fahrenheit"<<endl;

    cout<<"Qual a sua temperatura em Celsius? "<<endl;
    cin>>celsius;

    fahrenheit = (celsius * 1*8) + 32;

    cout<<"Sua temperatura em Fahrenheit é: "<<fahrenheit<<endl;

    return 0;
}