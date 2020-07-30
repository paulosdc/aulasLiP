#include <iostream>
using namespace std;
void ordenaV1(int *vetor1, int tamanho);
void ordenaV2(int *vetor2, int tamanho);
void criaV3(int *vetor1, int *vetor2, int *vetor3, int tamanho){
    ordenaV1(vetor1, tamanho);
    ordenaV2(vetor2, tamanho);
    int c = 0, x = 0;
    for(int i = 0;i<2*tamanho;i++){
        if(i%2==0){
            vetor3[i] = vetor1[c];
            c++;
        }else{
            vetor3[i] = vetor2[x];
            x++;
        }
    }
}
void ordenaV1(int *vetor1, int tamanho){
    for(int i = tamanho-1;i>=1;i--){
        for(int j = 0;j<i;j++){
            if(vetor1[j]>vetor1[j+1]){
                int aux = vetor1[j+1];
                vetor1[j+1] = vetor1[j];
                vetor1[j] = aux;
            }
        }
    }
}
void ordenaV2(int *vetor2, int tamanho){
    for(int i = tamanho-1;i>=1;i--){
        for(int j = 0;j<i;j++){
            if(vetor2[j]<vetor2[j+1]){
                int aux = vetor2[j+1];
                vetor2[j+1] = vetor2[j];
                vetor2[j] = aux;
            }
        }
    }
}
int main(){
    int tamanho;
    cin >> tamanho;
    int vetor1[tamanho], vetor2[tamanho], vetor3[2*tamanho];
    for(int i = 0;i<tamanho;i++){
        cin >> vetor1[i];
    }
    for(int i = 0;i<tamanho;i++){
        cin >> vetor2[i];
    }
    cout << "[ ";
    for(int i = 0;i<tamanho;i++){
        cout << vetor1[i];
        if(i<tamanho-1) cout << " , ";
        else cout << " ";
    }
    cout << "]";
    cout << endl;
    cout << "+" << endl;
    cout << "[ ";
    for(int i = 0;i<tamanho;i++){
        cout << vetor2[i];
        if(i<tamanho-1) cout << " , ";
        else cout << " ";
    }
    cout << "]";
    cout << endl;
    cout << "=" << endl;
    criaV3(vetor1, vetor2, vetor3, tamanho);
    cout << "[ ";
    for(int i = 0;i<2*tamanho;i++){
        cout << vetor3[i];
        if(i<(2*tamanho)-1) cout << " , ";
        else cout << " ";
    }
    cout << "]";
    return 0;
}
