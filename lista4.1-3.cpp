#include <iostream>
using namespace std;
void ordenaDecrescente(int *vetor, int tamanho){
    for(int i = tamanho-1;i>=1;i--){
        for(int j = 0;j<i;j++){
            if(vetor[j]<vetor[j+1]){
                int aux = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}


int main(){
    int tamanho;
    cin >> tamanho;
    int vetor[tamanho];
    for(int i = 0;i<tamanho;i++){
        cin >> vetor[i];
    }

    cout << "[ ";
    for(int i = 0;i<tamanho;i++){
        cout << vetor[i];
        if(i<tamanho-1) cout << " , ";
        else cout << " ";
    }
    cout << "]" << endl;
    ordenaDecrescente(vetor, tamanho);
    cout << "[ ";
    for(int i = 0;i<tamanho;i++){
        cout << vetor[i];
        if(i<tamanho-1) cout << " , ";
        else cout << " ";
    }
    cout << "]";
}
