#include <iostream>
#include <cstdlib>
using namespace std;
const int MAX = 60;
void matrizIdentidade(int d, int matriz[MAX][MAX]){
    for(int i = 0;i<d;i++){
        for(int c = 0;c<d;c++){
            if(i==c) matriz[i][c] = 1;
            else matriz[i][c];
        }
    }
}
void sorteio(int d, int matriz[MAX][MAX]){
    int i = rand()%d;
    int j = rand()%d;
    int lc = rand()%2;
    if(lc == 0){
        cout << "linha: " << i << " <-> " << j << endl;
        for(int c = 0;c<d;c++){
            int aux = matriz[i][c];
            matriz[i][c] = matriz[j][c];
            matriz[j][c] = aux;
        }
    }
    if(lc == 1){
        cout << "col: " << i << " <-> " << j << endl;
        for(int l = 0;l<d;l++){
            int aux = matriz[l][i];
            matriz[l][i] = matriz[l][j];
            matriz[l][j] = aux;
        }
    }
}
int main(){
    int semente, d, permutacoes, matriz[MAX][MAX];
    cin >> semente >> d >> permutacoes;
    matrizIdentidade(d, matriz);
    srand(semente);
    for(int i = 0;i<permutacoes;i++){
        sorteio(d, matriz);
    }
    for(int i = 0;i<d;i++){
        for(int c = 0;c<d;c++){
            cout << matriz[i][c] << " ";
        }
        cout << endl;
    }
    return 0;
}
