#include <iostream>
using namespace std;
void recebeVetor(int n, int *vetor){
    for(int i = 0;i<n;i++){
        cin >> vetor[i];
    }
}
bool repetidos(int n, int *vetor){
    recebeVetor(n, vetor);
    bool temRepetidos = false;
    int contador = 0;
    for(int i = 0;i<n;i++){
        int numero = vetor[i];
        for(int c = 0;c<=n;c++){
            if(numero == vetor[c]){
                contador++;
            }
        }
        if(contador>1){
           temRepetidos = true;
           break;
        }
        contador = 0;
    }
    return temRepetidos;
}
int main(){
    int n;
    cin >> n;
    int vetor[n];
    if(n<=20){
        bool temRepetidos = repetidos(n, vetor);
        if(temRepetidos){
            cout << "Existem elementos repetidos" << endl;
        }else{
            cout << "Não existem elementos repetidos" << endl;
        }
    }
    return 0;
}
