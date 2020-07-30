#include <iostream>
using namespace std;

int posicao(int n, int pos){
    int c = 1, digito = n;
    while(c<=pos){
        digito = n%10;
        n /= 10;
        c++;
    }
    return digito;
}

int main(){
    int n1, n2, res;
    cin >> n1 >> n2;
    res = posicao(n1, n2);
    cout << res << endl;
    return 0;
}
