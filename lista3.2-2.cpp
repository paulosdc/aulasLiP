#include <iostream>
using namespace std;

int sequencia(int n){
    int soma = 0;
    if(n>=0){
        int a[n];
        a[0] = 5;
        a[1] = 7;
        for(int i = 2;i<=n;i++){
            a[i] = 3*a[i-1] + 2*a[i-2];
        }
        for(int i = 0;i<=n;i++){
            soma += a[i];
        }
    }
    return soma;
}


int main(){
    int tamanho;
    cin >> tamanho;
    int total = sequencia(tamanho);
    cout << total;


}
