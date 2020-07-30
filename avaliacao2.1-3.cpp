#include <iostream>
using namespace std;
void criaCrescente(int *vetor, int tamanho, int *vetorCrescente, int &tamanhoPares){ // preenche um vetor apenas com os numeros das posicoes pares do vetor original
    int c = 0;
    for(int i = 0;i<tamanho;i++){
        if(i%2==0){
            vetorCrescente[c] = vetor[i];
            c++;
        }
    }
    tamanhoPares = c;
}
void criaDec(int *vetor, int tamanho, int *vetorDec, int &tamanhoImpares){ // preenche um vetor apenas com os numeros das posicoes impares do vetor original
    int c = 0;
    for(int i = 0;i<tamanho;i++){
        if(i%2!=0){
            vetorDec[c] = vetor[i];
            c++;
        }
    }
    tamanhoImpares = c;
}
void ordenaCrescente(int *vetorCrescente, int &tamanhoPares){ // ordena em ordem crescente os numeros do vetor com os elementos das posicoes par
    for(int i = tamanhoPares-1;i>=1;i--){
        for(int j = 0;j<i;j++){
            if(vetorCrescente[j]>vetorCrescente[j+1]){
                int aux = vetorCrescente[j+1];
                vetorCrescente[j+1] = vetorCrescente[j];
                vetorCrescente[j] = aux;
            }
        }
    }
}
void ordenaDec(int *vetorDec, int &tamanhoImpares){ // ordena em ordem decrescente os numeros do vetor com os elementos das posicoes impar
    for(int i = tamanhoImpares-1;i>=1;i--){
        for(int j = 0;j<i;j++){
            if(vetorDec[j]<vetorDec[j+1]){
                int aux = vetorDec[j+1];
                vetorDec[j+1] = vetorDec[j];
                vetorDec[j] = aux;
            }
        }
    }
}
void ordenaVetor(int *vetor, int tamanho, int *vetorDec, int *vetorCrescente, int &tamanhoPares, int &tamanhoImpares){ // chama as outras funcoes e depois substitui os valores do vetor original pelos valores ordenados nas posicoes pares e impares
    criaCrescente(vetor, tamanho, vetorCrescente, tamanhoPares);
    criaDec(vetor, tamanho, vetorDec, tamanhoImpares);
    ordenaCrescente(vetorCrescente, tamanhoPares);
    ordenaDec(vetorDec, tamanhoImpares);
    int c = 0, x = 0;
    for(int i = 0;i<tamanho;i++){
        if(i%2==0){
            vetor[i] = vetorCrescente[c];
            c++;
        }else{
            vetor[i] = vetorDec[x];
            x++;
        }
    }
}
int main(){
    int tamanho, tamanhoPares, tamanhoImpares;
    cin >> tamanho;
    int vetor[tamanho];
    for(int i = 0;i<tamanho;i++){
        cin >> vetor[i];
    }
    int vetorCrescente[tamanho], vetorDec[tamanho];
    cout << "[ ";
    for(int i = 0;i<tamanho;i++){
        cout << vetor[i];
        if(i<tamanho-1) cout << " , ";
        else cout << " ";
    }
    cout << "]" << endl;

    ordenaVetor(vetor, tamanho, vetorDec, vetorCrescente, tamanhoPares, tamanhoImpares);

    cout << "[ ";
    for(int i = 0;i<tamanho;i++){
        cout << vetor[i];
        if(i<tamanho-1) cout << " , ";
        else cout << " ";
    }
    cout << "]" << endl;
    return 0;
}
