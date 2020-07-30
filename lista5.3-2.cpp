#include <iostream>
using namespace std;
void recebeVetores(int n, int *vetor1, int *vetor2){
    for(int i = 0;i<n;i++){
        cin >> vetor1[i];
    }
    for(int i = 0;i<n;i++){
        cin >> vetor2[i];
    }
}
void somaVetorial(int n, int *vetor1, int *vetor2){
    recebeVetores(n, vetor1, vetor2);
    int somaVetorial[n];
    for(int i = 0;i<n;i++){
        somaVetorial[i] = vetor1[i] + vetor2[i];
    }
    cout << "[ ";
    for(int i = 0;i<n;i++){
        cout << somaVetorial[i];
        if(i<n-1){
            cout << " , ";
        }
    }
    cout << " ]";
}
int main(){
    int n;
    cin >> n;
    int vetor1[n], vetor2[n];
    if(n<=50){
        somaVetorial(n, vetor1, vetor2);
    }
    return 0;
}
