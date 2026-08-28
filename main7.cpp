#include <iostream>
using namespace std;

int main()
{
    float num;

    cout << "Verificando se um numero é positivo ou negativo:" << endl;

    cout << " " << endl;
    cout << " " << endl;

    cout << "Digite seu numero aqui:" << endl;

    cout << " " << endl;
    cout << " " << endl;

    cin >> num;

    if (num > 0)
    {
        cout << "Seu numero (" << num << ") é positivo" << endl;
    }
    else if (num < 0)
    {
        cout << "Seu numero (" << num << ") é negativo" << endl;
    }
    else
    {
        cout << "Seu numero é o 0" << endl;
    }
    cout << " " << endl;
    cout << " " << endl;
    cout << "Fim do codigo" << endl;

    return 0;
}