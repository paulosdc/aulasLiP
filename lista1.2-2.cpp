#include <iostream>
using namespace std;

bool ehPrimo(int n){
    bool primo = false;
    int divisor = 1, c = 0;
    for(;divisor<=n;divisor++){
        if(n%divisor == 0){
            c++;
        }
    }
    if(c==2){
        primo = true;
    }
    return primo;
}

int contarPrimos(int x, int y){
    bool resultado;
    int totalPrimos = 0;
    while(x<=y){
        resultado = ehPrimo(x);
        if(resultado){
            totalPrimos++;
        }
        x++;
    }
    return totalPrimos;
}


int main(){
    int numero1, numero2;
    cin >> numero1 >> numero2;
    int total = contarPrimos(numero1, numero2);
    cout << total;
    return 0;
}
