#include <iostream>
using namespace std;

int soma(int x, int y){
    int somatorio = 0;
    while(x<=y){
        somatorio = somatorio + x;
        x++;
    }
    return somatorio;
}

int main () {
    int numero1, numero2;
    cin >> numero1 >> numero2;
    int resultado = soma(numero1, numero2);
    cout << resultado;
    return 0;
}
