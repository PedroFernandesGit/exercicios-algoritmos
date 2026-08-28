#include <iostream>
using namespace std;

int main(){

    float nota1, nota2, nota3, media;
    cout<<"Média de 3 notas"<<endl;

    cout<<"Digite nota 1 do aluno(a): "<<endl;
    cin>>nota1;

    cout<<"Digite nota 2 do aluno(a): "<<endl;
    cin>>nota2;

    cout<<"Digite nota 3 do aluno(a): "<<endl;
    cin>>nota3;

    media = (nota1 + nota2 + nota3)/3;
    
    cout<<"media do aluno é: "<<media<<endl;

    return 0;
}