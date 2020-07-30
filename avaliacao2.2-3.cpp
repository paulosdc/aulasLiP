#include <iostream>
#include <iomanip>
using namespace std;
void ordena(int n, double *notas){
    for(int i = n-1;i>=1;i--){
        for(int j = 0;j<i;j++){
            if(notas[j]<notas[j+1]){
                double aux = notas[j+1];
                notas[j+1] = notas[j];
                notas[j] = aux;
            }
        }
    }
}
int main(){
    cout << fixed << setprecision(2);
    int k, n;
    cin >> k >> n;
    double notas[n];
    for(int i = 0;i<n;i++){
        cin >> notas[i];
    }
    cout << "[ ";
    for(int i = 0;i<n;i++){
        cout << notas[i];
        if(i<n-1) cout << " , ";
        else cout << " ";
    }
    cout << "]" << endl;
    ordena(n, notas);
    double soma = 0;

    for(int i = 0;i<k;i++){
        soma += notas[i];
    }
    double media = soma/k;
    cout << "Média = " << media << endl;
    return 0;
}

