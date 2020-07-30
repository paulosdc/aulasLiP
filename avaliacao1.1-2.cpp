#include <iostream>
using namespace std;
int fatorial(int n){
    int valor = 1;
    for(int i = 1;i<=n;i++){
        valor *= i;
    }
    return valor;
}
int somaFatorial(int x){
    int soma = 0;
    int valores;
    for(;x>0;x--){
        valores = fatorial(x);
        soma += valores;
    }
    return soma;
}
int main(){
    int numero;
    cin >> numero;
    int total = somaFatorial(numero);
    cout << total;
    return 0;
}
