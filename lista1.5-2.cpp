#include <iostream>
using namespace std;
int potencia(int x, int y){
    int resultado = 1;
    for(int c = 1;c<=y;c++){
        resultado = resultado * x;
    }
    return resultado;
}
int main(){
    int numero1, numero2;
    cin >> numero1 >> numero2;
    int res = potencia(numero1, numero2);
    cout << res;
}
