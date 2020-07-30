#include <iostream>

using namespace std;
int tabuada(int n){
    for(int i = 1;i<=10;i++){
        cout << n << " x " << i << " = " << n*i << endl;
    }
}

int tabuadaCompleta(){
    for(int c = 1; c<=10; c++){
        int valor = tabuada(c);
    }
}

int main(){
    tabuadaCompleta();
    return 0;
}
