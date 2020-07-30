#include <iostream>
using namespace std;
const int MAX = 30;
void leMatriz(int n, int matriz[MAX][MAX]){
    for(int i = 0;i<n;i++){
        for(int c = 0;c<n;c++){
            cin >> matriz[i][c];
        }
    }
}
void verificaPermutacao(int n, int matriz[MAX][MAX]){
    leMatriz(n, matriz);
    int contadorZeroUm = 0, contadorUm = 0; //contadorZeroUm conta o numero total de 0s e 1s na matriz e o contadorUm conta o numero de 1s nas linhas
    int vetorUm[n] = {0};
    for(int i = 0;i<n;i++){
        for(int c = 0;c<n;c++){
            if(matriz[i][c]==0 || matriz[i][c]==1){
                contadorZeroUm++;
            }
            if(matriz[i][c]==1){
                contadorUm++;
            }
        }
        if(contadorUm == 1){
            vetorUm[i] = 1;
        }
        contadorUm = 0;
    }
    for(int i = 0;i<n;i++){
        if(vetorUm[i]==1){
            contadorUm++;
        }
    }
    if(contadorUm == n && contadorZeroUm == n*n){
        cout << "Matriz permutação" << endl;
    }else{
        cout << "Não é matriz de permutação" << endl;
    }
}
int main(){
    int n;
    cin >> n;
    int matriz[MAX][MAX];
    verificaPermutacao(n, matriz);
    return 0;
}
