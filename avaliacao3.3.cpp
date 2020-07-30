#include <iostream>
using namespace std;
int main(){
    int numero, n = 1, soma = 0, divisor = 1;
    cin >> numero;
    do{
    for(;divisor<n;divisor++){
        if(n%divisor == 0){
            soma += divisor;
        }
    }
    if(soma == n){
       cout << soma << endl;
    }
    divisor = 1;
    soma = 0;
    n++;
    }while(n<numero);
    return 0;
}


