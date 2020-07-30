//voltar
#include <iostream>
using namespace std;
int main(){
    int n, numero, digitos = 0;
    cin >> n;
    if(n>=0){
        do{
        n /= 10;
        digitos++;
        }while(n>0);
    }else{
        do{
        n /= 10;
        digitos++;
        }while(n<0);
    }

    cout << digitos;
    return 0;
}
