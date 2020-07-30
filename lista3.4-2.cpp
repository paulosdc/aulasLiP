#include <iostream>
using namespace std;
int divisores (int n){
    int div = 0;
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            div++;
        }
    }
    return div;
}
bool triangular (int numero, int& r){
    bool ehTriangular = false;
    int i = 1, somaI = 0;
    while(divisores(i)<=numero){
        i++;
    }



    while(!ehTriangular){
        for(int c = 1;c<=i;c++){
            somaI += c;
            if(somaI==i && divisores(i)>numero){
                ehTriangular = true;
                r = i;
            }
        }
        somaI = 0;
        i++;
    }



    return ehTriangular;
}

int main(){
    int valor, r;
    cin >> valor;
    bool resultado = triangular(valor, r);
    if(resultado){
        cout << "O primeiro número triangular com mais de " << valor << " divisores é: " << r << endl;
    }
}
