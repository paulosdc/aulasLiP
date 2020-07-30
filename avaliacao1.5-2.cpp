#include <iostream>
using namespace std;
int somaAmigos(int n){
    int soma = 0;
    for(int i = 1;i<n;i++){
        if(n%i==0){
           soma += i;
        }
    }
    return soma;
}

int main(){
    int numero;
    cin >> numero;
    for(int i = 2;i<=numero;i++){
        if(somaAmigos(somaAmigos(i))==i){
            for(int c = 2; c<= numero; c++){
                if(somaAmigos(i)==c){
                    cout << i << " é amigo de " << somaAmigos(i) << endl;
                }

            }
        }
    }
    return 0;
}
