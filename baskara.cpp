#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float a, b, c; 
    float delta, x, x1, x2;

    cout << "Digite valor de 'a' :"<<endl;
    cin >> a;
    cout << "Digite valor de 'b' :"<<endl;
    cin >> b;
    cout << "Digite valor de 'c' :"<<endl;
    cin >> c;

    while(a == 0){
        cout << "***********"<<endl;
        cout << "* Valor de A não pode ser 0 *"<<endl;
        cout << "***********"<<endl;

        cout << "Digite valor de 'a' :"<<endl;
        cin >> a;
        cout << "Digite valor de 'b' :"<<endl;
        cin >> b;
        cout << "Digite valor de 'c' :"<<endl;
        cin >> c;  
    }
    delta = (b*b)-4 * (a * c);

    cout << "****"<<endl;
    cout << "DELTA: "<<delta<<endl;
    cout << "****"<<endl;
    
        
    if(delta == 0){
        x = -b / 2*a;
        cout << "***********"<<endl;
        cout << "Duas Raizes reais e iguais: "<< x <<endl;
        cout << "***********"<<endl;
    }
    else{ 
        if(delta < 0){
            cout << "***********"<<endl;
            cout << "Sem raizes nos campos dos reais"<<endl;
            cout << "***********"<<endl;
        }

        if(delta > 0)
        {
            x1 =(-b + sqrt(delta)) / (2 * a); 
            x2 =(-b - sqrt(delta)) / (2 * a); 
            cout << "***********"<<endl;
            cout << "***********"<<endl;
            cout << "Duas Raizes reais: "<<endl;
            cout << "Raiz X1: "<< x1 <<endl;
            cout << "Raiz X2: "<< x2 <<endl;
            cout << "***********"<<endl;
            cout << "***********"<<endl;
        } 
       
    }

    return 0;
}
