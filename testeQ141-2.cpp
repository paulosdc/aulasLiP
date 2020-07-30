#include <iostream>
#include <cmath>
using namespace std;
void inverte(int n){
    int novo = 0;
    int digitos = 2;
    while(n>0){
        novo += (n%10)*pow(10, digitos);
        digitos--;
        n/=10;
    }
    cout << novo;
}

int main(){
    int numero;
    cin >> numero;
    inverte(numero);
    return 0;
}
