#include <iostream>
using namespace std;
const int MAX = 30;
void leMatriz(int n, int m, int matriz[MAX][MAX]){ //recebe os elementos da matriz principal
    for(int i = 0;i<n;i++){
        for(int c = 0;c<m;c++){
            cin >> matriz[i][c];
        }
    }
}
void escreveMatriz(int n, int m, int matriz[MAX][MAX]){ //escreve os elementos da matriz principal
    cout << "Matriz" << endl;
    for(int i = 0;i<n;i++){
        for(int c = 0;c<m;c++){
            cout << matriz[i][c] << " ";
        }
        cout << endl;
    }
}
void criaTransposta(int n, int m, int matriz[MAX][MAX], int matrizTransposta[MAX][MAX]){ //troca as linhas pelas colunas da principal e armazena em nova matriz
    for(int i = 0;i<n;i++){
        for(int c = 0;c<m;c++){
            matrizTransposta[c][i] = matriz[i][c];
        }
    }
}
void escreveTransposta(int n, int m, int matrizTransposta[MAX][MAX]){ //imprime os elementos da nova matriz
    cout << "Transposta" << endl;
    for(int i = 0;i<n;i++){
        for(int c = 0;c<m;c++){
            cout << matrizTransposta[i][c] << " ";
        }
        cout << endl;
    }
}
void fazTransposta(int n, int m, int matriz[MAX][MAX], int matrizTransposta[MAX][MAX]){ //função principal q chama todas as outras funções criadas
    leMatriz(n, m, matriz);
    escreveMatriz(n, m, matriz);
    criaTransposta(n, m, matriz, matrizTransposta);
    escreveTransposta(n, m, matrizTransposta);
}
int main(){
    int n, m;
    cin >> n >> m;
    int matriz[MAX][MAX], matrizTransposta[MAX][MAX];
    fazTransposta(n, m, matriz, matrizTransposta);
    return 0;
}
