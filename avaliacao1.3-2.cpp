#include <iostream>
#include <cmath>
using namespace std;
bool terminacao(int numero1, int numero2){
    bool termina = false, parar = false;
    int i = numero1, digitosN1 = 0;
    if(numero1>=numero2){
    while(i>0){
        i /= 10;
        digitosN1++;
    }
    int divisor = 1;
    for(int c = 1;c<digitosN1;c++){
        divisor*=10;
    }
    while(!termina){
        if(numero1 == numero2){
            termina = true;
        }
         if(numero1<10 && termina == false){
            parar = true;
            termina = true;
        }
        numero1%=divisor;
        divisor/=10;

    }
    if(parar){
        termina = false;
    }
    }
    return termina;

}
int main(){
    int a, b;
    cin >> a >> b;
    bool resultado = terminacao(a, b);
    if(resultado){
        cout << "A termina com B";
    }else{
        cout << "A não termina com B";
    }
}
