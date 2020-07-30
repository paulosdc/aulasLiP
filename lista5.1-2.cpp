#include <iostream>
using namespace std;
void vetorValores(int n, int *vetor){ //recebe os valores do vetor
    for(int i = 0;i<n;i++){
        cin >> vetor[i];
    }
}
void vetorInvertido(int n, int *vetor){ //inverte a ordem de exibição
    vetorValores(n, vetor);
    for(int i = n-1;i>=0;i--){
        cout << vetor[i] << endl;
    }
}
int main(){
    int n;
    cin >> n;
    int vetor[n];
    vetorInvertido(n, vetor);
    return 0;
}
