#include <iostream>
#include <cmath>
using namespace std;
int contaDigitos(int n);

int inverteX(int x, int& xInvertido){
    int tamanho = contaDigitos(x), numeroAntigo = x;
    xInvertido = 0;
    for(int i = tamanho-1; i>=0;i--){
        xInvertido += (x%10)*(pow(10,i));
        x /= 10;
    }
    int valor;
    if(numeroAntigo>xInvertido) valor = 1;
    if(numeroAntigo==xInvertido) valor = 0;
    if(numeroAntigo<xInvertido) valor = -1;

    return valor;
}

int contaDigitos(int n){
    int digitos = 0;
    while(n!=0){
        digitos++;
        n/=10;
    }
    return digitos;
}

int main(){
    int numeroX, xInvertido;
    cin >> numeroX;
    int resultado = inverteX(numeroX, xInvertido);
    cout << "X = " << numeroX << endl;
    cout << "X invertido = " << xInvertido << endl;
    if(resultado == -1){
            cout << "X é menor que X invertido" << endl;
    }else if(resultado == 0){
        cout << "X é igual que X invertido" << endl;
    }else if(resultado == 1){
        cout << "X é maior que X invertido" << endl;
    }

    return 0;
}
