#include <iostream>
#include <limits>
using namespace std;
int main(){
    int numero, menor, maior = INT_MAX;
    cin >> numero;
    while(numero!=0){
        if(numero<maior){
            menor = numero;
            maior = numero;
        }
        cin >> numero;
    }
    cout << menor;
    return 0;
}
