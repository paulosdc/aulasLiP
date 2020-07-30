#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(2);
    int n, numero, soma = 0;
    double media, divisor;
    cin >> n;
    divisor = n;
    while(n>0){
        cin >> numero;
        soma = soma + numero;
        n--;
    }
    cout << soma/divisor;
}
