#include <iostream>

using namespace std;

int main(){

    int num;
    cout<<"Verificando de o numero é par ou impar"<<endl;

    cout<<"Digite o seu numero: "<<endl;
    cin>>num;

    if(num % 2 == 0){
        cout<<"O seu numero é par!"<<endl;
    }else{
        cout<<"O seu numero é impar!"<<endl;
    }

    cout<<" "<<endl;
    cout<<"Fim do Codigo"<<endl;
    return 0;
}