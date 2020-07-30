#include <iostream>
using namespace std;
int seq(int n, int *sequencia){
    if(n>2){
        return 2*seq(n-2, sequencia) + seq(n-1, sequencia);
    }else if(n==2){
        return sequencia[1];
    }else if(n==1){
        return sequencia[0];
    }
}
int main(){
    int n;
    cin >> n;
    int sequencia[n];
    sequencia[0] = 2;
    sequencia[1] = 3;
    int resultado = seq(n, sequencia);
    cout << "a" << n << " = " << resultado;
    return 0;
}
