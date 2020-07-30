#include <iostream>
using namespace std;

void binario(int n){
    int digito, tamanho = 0, aux = n;
    while(aux>0){
        digito = aux%2;
        aux/=2;
        tamanho++;
    }
    int bin[tamanho];
    int i = tamanho-1;
    while(n>0 && i>=0){
        digito = n%2;
        n/=2;
        bin[i] = digito;
        i--;
    }
    for(int c = 0;c<tamanho;c++){
        cout << bin[c];
    }


}

int main(){
    int valor;
    cin >> valor;
    binario(valor);
    return 0;
}
