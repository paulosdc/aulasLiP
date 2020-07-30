#include <iostream>
using namespace std;
const int MAX = 50;
bool linhas(int linha, int n, int m, int matriz[MAX][MAX]);
void leMatriz(int n, int m, int matriz[MAX][MAX]){
    for(int i = 0;i<n;i++){
        for(int c = 0;c<m;c++){
            cin >> matriz[i][c];
        }
    }
}
void linhasIguais(int n, int m, int matriz[MAX][MAX]){
    bool linhasRepetidas = false;
    int contaFalso = 1;
    for(int i = 0;i<n;i++){
       linhasRepetidas = linhas(i, n, m, matriz);
       if(linhasRepetidas){
            cout << "A matriz tem linhas repetidas" << endl;
            break;
       }else{
            contaFalso++;
       }
       if(contaFalso == n){
            cout << "A matriz nao tem linhas repetidas" << endl;
       }
    }
}
bool linhas(int linha, int n, int m, int matriz[MAX][MAX]){ //verifica se uma linha é igual ao outras
    int contador = 0;
    bool igual = false;
    for(int i = 0;i<n;i++){
        for(int c = 0;c<m;c++){
            if(matriz[linha][c] == matriz[i][c] && linha!=i){
                contador++;
            }
        }
        if(contador == m){
            igual = true;
        }
        contador = 0;
    }
    return igual;
}
void verificaLinhas(int n, int m, int matriz[MAX][MAX]){
    leMatriz(n, m, matriz);
    linhasIguais(n, m, matriz);
}
int main(){
    int n, m;
    cin >> n >> m;
    int matriz[MAX][MAX];
    verificaLinhas(n, m, matriz);
    return 0;
}
