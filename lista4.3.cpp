#include <iostream>
using namespace std;
int main(){
    int x, multiplicador = 1, resultado;
    cin >> x;
    while(multiplicador <= 10){
        resultado = x*multiplicador;
        cout << x << " x " << multiplicador << " = " << resultado << endl;
        multiplicador++;
    }
    return 0;
}
