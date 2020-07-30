#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double meuLogaritmo(double n){
    double ln = 0;
    int y = 1;
    n = n-1;
    double valor;
    while((pow(n,y)/y)>0.001 || (pow(n,y)/y)<-0.001 ){
        valor = (pow(n,y))/y;
        if(y%2==0){
            ln -= valor;
        }else{
            ln += valor;
        }
        if(valor<0){
            valor = -valor;
        }
        y++;
    }
    if(y%2==0){
        ln -= (pow(n,y))/y;
    }else{
        ln += (pow(n,y))/y;
    }
return ln;

}


int main(){
    cout << fixed << setprecision(4);
    double numero;
    cin >> numero;
    double diferenca = 0, l;
    while(numero!=0){
        double logarit = meuLogaritmo(numero);
        cout << "Meu ln: " << logarit << " C++: " << log(numero) << endl;

        if(logarit<0){
            logarit = -logarit;
            l = -log(numero);
            if(l>=logarit){
                diferenca += l - logarit;
            }else{
                diferenca += logarit - l;
            }

        }else{
            if(log(numero)>=logarit){
                diferenca += log(numero)-logarit;
            }else{
                diferenca += logarit-log(numero);
            }

        }


        cin >> numero;
    }
    cout << "Diferença: " << diferenca << endl;
    return 0;
}

