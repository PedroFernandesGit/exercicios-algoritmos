#include <iostream>
using namespace std;

int main()
{
    float nota;

    cout << "" << endl;
    cout << "" << endl;
    cout << "Verificando situação da nota final do aluno(a)" << endl;

    cout << "" << endl;
    cout << "" << endl;

    cout<<"Digite a nota final do aluno(a):"<<endl;
    cin>>nota;

    if(nota >= 60){
        cout<<"Aluno(a) aprovando!"<<endl;
    }else if(nota >= 40 && nota <= 59){
        cout<<"Aluno(a) de recuperação!"<<endl;
    }else{
        cout<<"Aluno(a) reprovado!"<<endl;
    }

    cout<<" "<<endl;
    cout<<"Fim do codigo"<<endl;

    return 0;
}