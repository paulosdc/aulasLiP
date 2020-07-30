#include <iostream>
#include <climits>
using namespace std;
const int MAX = 30;
bool verificaRepeticao(int numero, int n, int *vetor);
void leVetor(int n, int *vetor){
    for(int i = 0;i<n;i++){
        cin >> vetor[i];
    }
}
void imprimeUnicos(int n, int *vetor){ //apaga os valores repetidos e, caso tenha repetido, vai diminuindo o tamanho do vetor
    leVetor(n, vetor);
    for(int i = 0;i<n;i++){
        for(int c = i+1;c<n;){
            if(vetor[c]==vetor[i]){
                for(int k = c; k<n;k++){
                    vetor[k] = vetor[k+1];
                }
                n--;
            }else{
                c++;
            }
        }
    }
    cout << "[ ";
    for(int i = 0;i<n;i++){ //imprime o vetor novo
        cout << vetor[i];
        if(i<n-1){
            cout << " , ";
        }
    }
    cout << " ]";
}

int main(){
    int n;
    cin >> n;
    int vetor[MAX];
    imprimeUnicos(n, vetor);
    return 0;
}
