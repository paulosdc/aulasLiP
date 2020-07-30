#include <iostream>
using namespace std;
int main(){
    int numero1, numero2, numero3, maior, menor, meio;
    cin >> numero1 >> numero2 >> numero3;
    if(numero1>numero2 && numero1>numero3){
        maior = numero1;
        if(numero2>numero3){
            menor = numero3;
            meio = numero2;
        }else{
            menor = numero2;
            meio = numero3;
        }

    }else if(numero2>numero1 && numero2>numero3){
        maior = numero2;
        if(numero1>numero3){
            menor = numero3;
            meio = numero1;
        }else{
            menor = numero1;
            meio = numero3;
        }
    }else if(numero3>numero1 && numero3>numero2){
        maior = numero3;
        if(numero1>numero2){
            menor = numero2;
            meio = numero1;
        }else{
            menor = numero1;
            meio = numero2;

        }
    }
    cout << maior << " " << meio << " " << menor << endl;
    return 0;
}

