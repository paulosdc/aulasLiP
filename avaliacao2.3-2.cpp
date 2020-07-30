#include <iostream>
using namespace std;
int contaDigitos(int x);

void digitos(int n, int& primeiro, int& ultimo){
    int c = 0;

    while(n>0){
        if(c == 0){
            ultimo = n%10;
        }
        primeiro = n%10;
        n /= 10;
        c++;
    }
}


int main(){
    int numero, primeiro, ultimo;
    cin >> numero;
    if(numero>0){
        digitos(numero, primeiro, ultimo);
    }else if(numero==0){
        primeiro = 0;
        ultimo = 0;
    }

    cout << "primeiro=" << primeiro << " ultimo=" << ultimo << endl;
    return 0;
}
