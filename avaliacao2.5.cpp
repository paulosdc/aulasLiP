#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c, maior, menor, meio;
    cin >> a >> b >> c;
    if(a>=b && a>=c){
        maior = a;
        if(b>c){
            meio = b;
            menor = c;
        }else{
            meio = c;
            menor = b;
        }
    }
    if(b>=c && b>=a){
        maior = b;
        if(c>a){
            meio = c;
            menor = a;
        }else{
            meio = a;
            menor = c;
        }
    }
    if(c>=b && c>=a){
        maior = c;
        if(b>a){
            meio = b;
            menor = a;
        }else{
            meio = a;
            menor = b;
        }
    }
    a = maior;
    b = meio;
    c = menor;
    if(a>=b+c){
        cout << "NAO FORMA TRIANGULO" << endl;
    }else{
    if(pow(a,2)==pow(b,2)+pow(c,2)){
        cout << "TRIANGULO RETANGULO" << endl;
    }
    if(pow(a,2)>pow(b,2)+pow(c,2)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if(pow(a,2)<pow(b,2)+pow(c,2)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if(a == b && a == c){
        cout << "TRIANGULO EQUILATERO" << endl;
    }else{
        if(a==b || a==c || b==c){
        cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    }
    return 0;
}

