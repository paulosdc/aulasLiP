#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n<=1) return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cin >> n;
    int resultado = fibonacci(n);
    cout << "Saida recursiva:" << endl;
    cout << resultado << endl;
    cout << "Saida iterativa:" << endl;
    int aux, n1 = 1, n2 = 1;
    for(int i = 0;i<n;i++){
        aux = n1;
        n1 = n1 + n2;
        n2 = aux;
    }
    cout << aux;
    return 0;
}
