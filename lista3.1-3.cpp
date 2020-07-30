#include <iostream>
#include <cstdlib>
using namespace std;
void trocaPosicao(int semente, int tamanho, int *vetor){
    int i = rand() % tamanho;
    int j = rand() % tamanho;
    int aux = vetor[j];
    vetor[j] = vetor[i];
    vetor[i] = aux;
    cout << "pos " << i << " <-> " << j << endl;
}
int main(){
    int semente, tamanho;
    cin >> semente >> tamanho;
    int vetor[tamanho];
    srand(semente);
    int sorteios = 1+rand()%5;
    for(int i = 0;i<tamanho;i++){
        cin >> vetor[i];
    }
    cout << "vetor original" << endl;
    cout << "[ ";
    for(int i = 0;i<tamanho;i++){
        if(i<tamanho-1) cout << vetor[i] << " , ";
        else cout << vetor[i] << " ";
    }
    cout << "]" << endl;
    cout << "permutações" << endl;
    cout << "n = " << sorteios << endl;
    for(int c = 0;c<sorteios;c++){
        trocaPosicao(semente, tamanho, vetor);
    }
    cout << "resultado" << endl;
    cout << "[ ";
    for(int i = 0;i<tamanho;i++){
        if(i<tamanho-1) cout << vetor[i] << " , ";
        else cout << vetor[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}
