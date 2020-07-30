#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;
const int MAX = 30;
void leMatriz(int n, int m, int matriz[MAX][MAX]){ //recebe os elementos da matriz
    for(int i = 0;i<n;i++){
        for(int c = 0;c<m;c++){
            cin >> matriz[i][c];
        }
    }
}
int menorValor(int n, int m, int matriz[MAX][MAX]){ //ve qual o elemento é o menor
    int menor = INT_MAX; //deve começar comparando com o maior possivel pq ai a comparacao vai achar o menor de qqr forma
    for(int i = 0;i<n;i++){
        for(int c = 0;c<m;c++){
            if(matriz[i][c]<menor){
                menor = matriz[i][c];
            }
        }
    }
    return menor;
}
int maiorValor(int n, int m, int matriz[MAX][MAX]){
    int maior = INT_MIN; //deve começar comparando com o menor possivel pq ai a comparacao vai achar o maior de qqr forma
    for(int i = 0;i<n;i++){
        for(int c = 0;c<m;c++){
            if(matriz[i][c]>maior){
                maior = matriz[i][c];
            }
        }
    }
    return maior;
}
double mediaMatriz(int n, int m, int matriz[MAX][MAX]){ //soma todos os elementos e depois divide pelo numero total de elemento, achando assim a media
    double soma = 0;
    for(int i = 0;i<n;i++){
        for(int c = 0;c<m;c++){
            soma += matriz[i][c];
        }
    }
    double media = soma/(n*m);
    return media;
}
void valoresMatriz(int n, int m, int matriz[MAX][MAX]){ //chama todas as outras funcoes
    leMatriz(n, m, matriz);
    int menor = menorValor(n, m, matriz);
    int maior = maiorValor(n, m, matriz);
    double media = mediaMatriz(n, m, matriz);
    cout << "Menor valor: " << menor << endl;
    cout << "Maior valor: " << maior << endl;
    cout << fixed << setprecision(2);
    cout << "Média dos valores: " << media << endl;
}
int main(){
    int n, m;
    cin >> n >> m;
    int matriz[MAX][MAX];
    valoresMatriz(n, m, matriz);
    return 0;
}
