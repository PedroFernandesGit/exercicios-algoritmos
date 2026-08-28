#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num1, num2, maior;

    cout<<fixed<<setprecision(2);

    cout << "Verificando maior numero!" << endl;
    
    cout<<" "<<endl;
    cout<<" "<<endl;

    cout << "Digite o seu primeiro numero: " << endl;
    cin >> num1;

    cout<<" "<<endl;
    cout<<" "<<endl;

    cout << "Digite o seu segundo numero: " << endl;
    cin >> num2;

    cout<<" "<<endl;
    cout<<" "<<endl;

    if (num1 > num2)
    {
        maior = num1;
        cout << num1 << " é maior que " << num2 << endl;
    }
    if (num2 > num1)
    {
        maior = num2;
        cout << num2 << " é maior que " << num1 << endl;
    }else{
        cout<<"Os numeros sao iguais!";
    }
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"Fim do codigo"<<endl;
    return 0;
}