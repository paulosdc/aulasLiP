#include <iostream>
using namespace std;
const int MAX = 30;
double mediaLinha(int x, int n, int m, int matriz[MAX][MAX]);
int ultimoMaiorQueMedia(int i, int n, int m, int matriz[MAX][MAX]);
void leMatriz(int n, int m, int matriz[MAX][MAX]){
    for(int i = 0;i<n;i++){
        for(int c = 0;c<m;c++){
            cin >> matriz[i][c];
        }
    }
}
void maioresQueMedia(int n, int m, int matriz[MAX][MAX]){
    leMatriz(n, m, matriz);
    double media;
    int posicaoUltimo;
    for(int i = 0;i<n;i++){
        cout << "[ ";
        media = mediaLinha(i, n, m, matriz);
        posicaoUltimo = ultimoMaiorQueMedia(i, n, m, matriz);
        for(int c = 0;c<m;c++){
            if(media-matriz[i][c]<1e-8){
                cout << matriz[i][c];
                if(c!=posicaoUltimo){
                     cout << " , ";
                }else{
                    cout << " ";
                }
            }
        }
        cout << "]";
        cout << endl;
    }
}
int ultimoMaiorQueMedia(int i, int n, int m, int matriz[MAX][MAX]){
    int posicaoUltimo;
    double media = mediaLinha(i, n, m, matriz);
    for(int c = 0;c<m;c++){
        if(media-matriz[i][c]<1e-8){
            posicaoUltimo = c;
        }
    }
    return posicaoUltimo;
}
double mediaLinha(int x, int n, int m, int matriz[MAX][MAX]){
    double soma = 0;
    for(int c = 0;c<m;c++){
        soma += matriz[x][c];
    }
    double media = soma/n;
    return media;
}
int main(){
    int n, m;
    cin >> n >> m;
    int matriz[MAX][MAX];
    maioresQueMedia(n, m, matriz);
    return 0;
}
