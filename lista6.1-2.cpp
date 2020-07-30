#include <iostream>
using namespace std;
const int MAX = 30; //define o tamanho maximo que a matriz pode ter
void leMatriz(int n, int matriz[MAX][MAX]);
void escreveMatriz(int n, int matriz[MAX][MAX]);
void matrizIdentidade(int n, int matriz[MAX][MAX]){ //chama as funções para ler e escrever a matriz
    leMatriz(n, matriz);
    escreveMatriz(n, matriz);
}
void leMatriz(int n, int matriz[MAX][MAX]){ //lê os elementos da matriz
    for(int i = 0;i<n;i++){
        for(int c = 0;c<n;c++){
            if(i==c){
                matriz[i][c] = 1;
            }else{
                matriz[i][c] = 0;
            }
        }
    }
}
void escreveMatriz(int n, int matriz[MAX][MAX]){ //escreve os elementos da matriz
    for(int i = 0;i<n;i++){
        for(int c = 0;c<n;c++){
            cout << matriz[i][c] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    int matriz[MAX][MAX];
    matrizIdentidade(n, matriz);
    return 0;
}
