#include <iostream>
using namespace std;
void recebeValores(int n, double *valores){
    for(int i = 0;i<n;i++){
        cin >> valores[i];
    }
}
double mediaValores(int n, double *valores){
    recebeValores(n, valores);
    double soma = 0;
    for(int i = 0;i<n;i++){
        soma += valores[i];
    }
    double media = soma/n;
    return media;
}
int acimaMedia(int n, double *valores){
    double media = mediaValores(n, valores);
    cout << "Media: " << media << endl;
    int acima = 0;
    for(int i = 0;i<n;i++){
        if(valores[i]>media){
            acima++;
        }
    }
    return acima;
}
int main(){
    int n;
    cin >> n;
    double valores[n];
    int acima;
    if(n<=100){
        acima = acimaMedia(n, valores);
        cout << "Valores acima da media: " << acima;
    }
    return 0;
}


