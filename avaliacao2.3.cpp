#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double numero1, numero2, resultado;
    char operacao;
    cin >> numero1 >> numero2 >> operacao;
    cout << fixed << setprecision(2);
    switch(operacao){
    case '+':
        resultado = numero1 + numero2;
        cout << resultado << endl;
        break;
    case '-':
        resultado = numero1 - numero2;
        cout << resultado << endl;
        break;
    case '*':
        resultado = numero1 * numero2;
        cout << resultado << endl;
        break;
    case '/':
        if(numero2 != 0){
            resultado = numero1 / numero2;
            cout << resultado << endl;
        }else{
            cout << "erro!" << endl;
        }
        break;
    default:
        cout << "erro!" << endl;
        break;
    }
    return 0;
}

