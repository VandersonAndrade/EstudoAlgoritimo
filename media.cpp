#include <iostream>

using namespace std;

int main(){

    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float media;

    cout<<"Digite a nota1:"<<endl;
    cin >> nota1;
    cout<<"Digite a nota2:"<<endl;
    cin >> nota2;
    cout<<"Digite a nota3:"<<endl;
    cin >> nota3;
    cout<<"Digite a nota4:"<<endl;
    cin >> nota4;

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    cout<<"Média: "<< media <<endl;


    return 0;
}