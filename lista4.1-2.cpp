#include <iostream>
#include <iomanip>
using namespace std;
bool dezenasIguais(int x, int& primeiros, int& ultimos, int& ultimo0, int& ultimo1);
void dividir(int n, int& primeiros, int& ultimos, int& ultimo0, int& ultimo1){
    primeiros = n/100;
    ultimos = n%100;

    if(ultimos<10){
        ultimo0 = 0;
        ultimo1 = ultimos;
    }else{
        ultimo1 = ultimos%10;
        ultimo0 = ultimos/10;
    }

}
void dezenasIguais(int x, int& primeiros, int& ultimos, int& ultimo0, int& ultimo1, bool& igual){
    dividir(x, primeiros, ultimos, ultimo0, ultimo1);
    igual = false;
    int aux;
    aux = ultimo1;
    ultimo1 = ultimo0;
    ultimo0 = aux;
    if(primeiros/10 == ultimo0 && primeiros%10 == ultimo1){
        igual = true;
    }

}


int main(){
    int primeiros, ultimos, numero1, numero2, ultimo0, ultimo1;
    cin >> numero1 >> numero2;
    bool igual;
    dezenasIguais(numero1, primeiros, ultimos, ultimo0, ultimo1, igual);
    while(numero1<=numero2){
        if(igual){
            cout << numero1 << endl;
        }
        numero1++;
        dezenasIguais(numero1, primeiros, ultimos, ultimo0, ultimo1, igual);
    }

    return 0;
}

